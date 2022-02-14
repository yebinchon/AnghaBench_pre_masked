
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
struct TYPE_6__ {int ref_value; int p_read_rep_cback; int p_thres_cback; int p_setup_cback; int batch_scan_notify_threshold; int batch_scan_trunc_max; int batch_scan_full_max; } ;
struct TYPE_8__ {TYPE_1__ ble_set_storage; } ;
typedef TYPE_3__ tBTA_DM_MSG ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__) ;

void FUNC_3 (tBTA_DM_MSG *VAR_2)
{
    tBTM_STATUS VAR_3 = 0;
    tBTM_BLE_VSC_CB VAR_4;

    FUNC_0(&VAR_4);

    if (0 != VAR_4.tot_scan_results_strg) {
        VAR_3 = FUNC_1(VAR_2->ble_set_storage.batch_scan_full_max,
                                             VAR_2->ble_set_storage.batch_scan_trunc_max,
                                             VAR_2->ble_set_storage.batch_scan_notify_threshold,
                                             VAR_2->ble_set_storage.p_setup_cback,
                                             VAR_2->ble_set_storage.p_thres_cback,
                                             VAR_2->ble_set_storage.p_read_rep_cback,
                                             VAR_2->ble_set_storage.ref_value);
    }

    if (VAR_1 != VAR_3) {
        FUNC_2(VAR_0, VAR_2->ble_set_storage.ref_value,
                              VAR_3);
    }
}
