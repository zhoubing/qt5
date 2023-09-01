#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
//#include "ui_untitled.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
//    QMainWindow w;
//    Ui_MainWindow uiMainWindow;
//    uiMainWindow.setupUi(&w);
//    w.show();
    return QApplication::exec();
}
