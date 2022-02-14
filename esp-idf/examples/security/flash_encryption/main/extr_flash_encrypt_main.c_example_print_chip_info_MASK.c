
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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{

    esp_chip_info_t VAR_3;
    FUNC_0(&VAR_3);
    FUNC_1("This is ESP32 chip with %d CPU cores, WiFi%s%s, ",
            VAR_3.cores,
            (VAR_3.features & VAR_1) ? "/BT" : "",
            (VAR_3.features & VAR_0) ? "/BLE" : "");

    FUNC_1("silicon revision %d, ", VAR_3.revision);

    FUNC_1("%dMB %s flash\n", FUNC_2() / (1024 * 1024),
            (VAR_3.features & VAR_2) ? "embedded" : "external");
}
