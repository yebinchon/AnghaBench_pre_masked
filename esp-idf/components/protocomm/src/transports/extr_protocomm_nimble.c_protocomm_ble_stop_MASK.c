
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int protocomm_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int * pc_ble; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 () ;

esp_err_t FUNC_8(protocomm_t *VAR_5)
{
    FUNC_0(VAR_2, "protocomm_ble_stop called here...");
    if ((VAR_5 != ((void*)0)) &&
            (VAR_4 != ((void*)0) ) &&
            (VAR_5 == VAR_4->pc_ble)) {
        esp_err_t VAR_6 = VAR_1;

        esp_err_t VAR_7 = FUNC_2();
        if (VAR_7) {
            FUNC_0(VAR_2, "Error in stopping advertisement with err code = %d",
                     VAR_7);
        }

        VAR_6 = FUNC_6();
        if (VAR_6 == 0) {
            FUNC_5();
            VAR_6 = FUNC_3();
            if (VAR_6 != VAR_1) {
                FUNC_1(VAR_2, "esp_nimble_hci_and_controller_deinit() failed with error: %d", VAR_6);
            }
        }

        FUNC_4(VAR_3);
        FUNC_7();
        return VAR_6;
    }
    return VAR_0;
}
