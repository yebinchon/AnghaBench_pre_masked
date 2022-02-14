
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cores; int features; int revision; } ;
typedef TYPE_1__ esp_chip_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int) ;

void FUNC_6(void)
{
    FUNC_3("Hello world!\n");


    esp_chip_info_t VAR_6;
    FUNC_0(&VAR_6);
    FUNC_3("This is %s chip with %d CPU cores, WiFi%s%s, ",
            VAR_3,
            VAR_6.cores,
            (VAR_6.features & VAR_1) ? "/BT" : "",
            (VAR_6.features & VAR_0) ? "/BLE" : "");

    FUNC_3("silicon revision %d, ", VAR_6.revision);

    FUNC_3("%dMB %s flash\n", FUNC_4() / (1024 * 1024),
            (VAR_6.features & VAR_2) ? "embedded" : "external");

    for (int VAR_7 = 10; VAR_7 >= 0; VAR_7--) {
        FUNC_3("Restarting in %d seconds...\n", VAR_7);
        FUNC_5(1000 / VAR_4);
    }
    FUNC_3("Restarting now.\n");
    FUNC_2(VAR_5);
    FUNC_1();
}
