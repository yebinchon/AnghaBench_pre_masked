
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_4__ {scalar_t__ tot_scan_results_strg; } ;
typedef TYPE_1__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_REF_VALUE ;
struct TYPE_5__ {int (* supports_ble ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 () ;

tBTM_STATUS FUNC_7(tBTM_BLE_REF_VALUE VAR_8)
{
    tBTM_STATUS VAR_9 = VAR_6;
    tBTM_BLE_VSC_CB VAR_10;
    FUNC_2 (" BTM_BleDisableBatchScan");

    if (!FUNC_5()->supports_ble()) {
        return VAR_5;
    }

    FUNC_0(&VAR_10);

    if (0 == VAR_10.tot_scan_results_strg) {
        FUNC_1("Controller does not support batch scan");
        return VAR_4;
    }

    VAR_9 = FUNC_4(VAR_7);
    if (VAR_3 == VAR_9) {

        FUNC_3(VAR_1,
                                   VAR_2, VAR_0,
                                   VAR_8);
    }

    return VAR_9;
}
