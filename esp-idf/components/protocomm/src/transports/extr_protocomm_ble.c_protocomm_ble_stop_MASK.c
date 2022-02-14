
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int protocomm_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int * pc_ble; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

esp_err_t FUNC_4(protocomm_t *VAR_4)
{
    if ((VAR_4 != ((void*)0)) &&
        (VAR_3 != ((void*)0) ) &&
        (VAR_4 == VAR_3->pc_ble)) {
        esp_err_t VAR_5 = VAR_1;
        VAR_5 = FUNC_3();
        if (VAR_5) {
            FUNC_0(VAR_2, "BLE stop failed");
        }
        FUNC_2();
        FUNC_1();
        return VAR_5;
    }
    return VAR_0;
}
