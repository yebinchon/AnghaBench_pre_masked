
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

void FUNC_8(void)
{
    esp_err_t VAR_3;

    FUNC_2(VAR_1, "Initializing...");

    VAR_3 = FUNC_7();
    if (VAR_3 == VAR_0) {
        FUNC_0(FUNC_6());
        VAR_3 = FUNC_7();
    }
    FUNC_0(VAR_3);

    VAR_3 = FUNC_5();
    if (VAR_3) {
        FUNC_1(VAR_1, "esp32_bluetooth_init failed (err %d)", VAR_3);
        return;
    }

    FUNC_3(VAR_2);


    VAR_3 = FUNC_4();
    if (VAR_3) {
        FUNC_1(VAR_1, "Failed to initialize BLE Mesh (err %d)", VAR_3);
    }
}
