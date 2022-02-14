
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_7__ {scalar_t__ tot_scan_results_strg; } ;
typedef TYPE_2__ tBTM_BLE_VSC_CB ;
struct TYPE_6__ {int ref_value; int addr_type; int discard_rule; int scan_window; int scan_int; int scan_mode; } ;
struct TYPE_8__ {TYPE_1__ ble_enable_scan; } ;
typedef TYPE_3__ tBTA_DM_MSG ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__) ;

void FUNC_3 (tBTA_DM_MSG *VAR_2)
{
    tBTM_STATUS VAR_3 = 0;
    tBTM_BLE_VSC_CB VAR_4;

    FUNC_1(&VAR_4);

    if (0 != VAR_4.tot_scan_results_strg) {
        VAR_3 = FUNC_0(VAR_2->ble_enable_scan.scan_mode,
                                            VAR_2->ble_enable_scan.scan_int,
                                            VAR_2->ble_enable_scan.scan_window,
                                            VAR_2->ble_enable_scan.discard_rule,
                                            VAR_2->ble_enable_scan.addr_type,
                                            VAR_2->ble_enable_scan.ref_value);
    }

    if (VAR_1 != VAR_3) {
        FUNC_2(VAR_0, VAR_2->ble_enable_scan.ref_value,
                              VAR_3);
    }
}
