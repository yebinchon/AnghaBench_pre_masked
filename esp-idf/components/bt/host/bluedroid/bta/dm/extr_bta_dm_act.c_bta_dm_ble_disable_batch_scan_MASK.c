
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_10__ {scalar_t__ tot_scan_results_strg; } ;
typedef TYPE_3__ tBTM_BLE_VSC_CB ;
struct TYPE_9__ {int ref_value; } ;
struct TYPE_8__ {int ref_value; } ;
struct TYPE_11__ {TYPE_2__ ble_enable_scan; TYPE_1__ ble_disable_scan; } ;
typedef TYPE_4__ tBTA_DM_MSG ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

void FUNC_4 (tBTA_DM_MSG *VAR_2)
{
    FUNC_2(VAR_2);
    tBTM_STATUS VAR_3 = 0;
    tBTM_BLE_VSC_CB VAR_4;

    FUNC_1(&VAR_4);

    if (0 != VAR_4.tot_scan_results_strg) {
        VAR_3 = FUNC_0(VAR_2->ble_disable_scan.ref_value);
    }

    if (VAR_1 != VAR_3) {
        FUNC_3(VAR_0, VAR_2->ble_enable_scan.ref_value,
                              VAR_3);
    }
}
