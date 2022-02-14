
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;

esp_err_t FUNC_6(void)
{
    esp_err_t VAR_3;
    FUNC_0(VAR_2, "Free mem at start of simple_ble_stop %d", FUNC_5());
    VAR_3 = FUNC_2();
    if (VAR_3 != VAR_1) {
        return VAR_0;
    }
    FUNC_0(VAR_2, "esp_bluedroid_disable called successfully");
    VAR_3 = FUNC_1();
    if (VAR_3 != VAR_1) {
        return VAR_3;
    }
    FUNC_0(VAR_2, "esp_bluedroid_deinit called successfully");
    VAR_3 = FUNC_4();
    if (VAR_3 != VAR_1) {
        return VAR_0;
    }




    FUNC_0(VAR_2, "esp_bt_controller_disable called successfully");
    VAR_3 = FUNC_3();
    if (VAR_3 != VAR_1) {
        return VAR_0;
    }
    FUNC_0(VAR_2, "esp_bt_controller_deinit called successfully");

    FUNC_0(VAR_2, "Free mem at end of simple_ble_stop %d", FUNC_5());
    return VAR_1;
}
