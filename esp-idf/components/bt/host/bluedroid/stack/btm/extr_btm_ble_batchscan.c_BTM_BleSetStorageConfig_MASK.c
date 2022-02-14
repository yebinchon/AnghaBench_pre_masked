
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ tot_scan_results_strg; } ;
typedef TYPE_1__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_SCAN_THRESHOLD_CBACK ;
typedef int tBTM_BLE_SCAN_SETUP_CBACK ;
typedef int tBTM_BLE_SCAN_REP_CBACK ;
typedef int tBTM_BLE_REF_VALUE ;
typedef scalar_t__ UINT8 ;
struct TYPE_7__ {scalar_t__ cur_state; int ref_value; int * p_scan_rep_cback; int * p_thres_cback; int * p_setup_cback; } ;
struct TYPE_6__ {int (* supports_ble ) () ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 () ;

tBTM_STATUS FUNC_8(UINT8 VAR_16, UINT8 VAR_17,
                                    UINT8 VAR_18,
                                    tBTM_BLE_SCAN_SETUP_CBACK *VAR_19,
                                    tBTM_BLE_SCAN_THRESHOLD_CBACK *VAR_20,
                                    tBTM_BLE_SCAN_REP_CBACK *VAR_21,
                                    tBTM_BLE_REF_VALUE VAR_22)
{
    tBTM_STATUS VAR_23 = VAR_13;
    tBTM_BLE_VSC_CB VAR_24;

    FUNC_2 (" BTM_BleSetStorageConfig: %d, %d, %d, %d, %d",
                     VAR_15.cur_state, VAR_22, VAR_16, VAR_17,
                     VAR_18);

    if (!FUNC_6()->supports_ble()) {
        return VAR_12;
    }

    FUNC_0(&VAR_24);

    if (0 == VAR_24.tot_scan_results_strg) {
        FUNC_1("Controller does not support batch scan");
        return VAR_11;
    }

    VAR_15.p_setup_cback = VAR_19;
    VAR_15.p_thres_cback = VAR_20;
    VAR_15.p_scan_rep_cback = VAR_21;
    VAR_15.ref_value = VAR_22;

    if (VAR_16 > VAR_0 ||
            VAR_17 > VAR_2 ||
            VAR_18 > VAR_1) {
        FUNC_1("Illegal set storage config params");
        return VAR_12;
    }

    if (VAR_9 == VAR_15.cur_state ||
            VAR_6 == VAR_15.cur_state ||
            VAR_7 == VAR_15.cur_state) {
        VAR_23 = FUNC_4(VAR_14);
        if (VAR_10 != VAR_23) {
            return VAR_23;
        }

        VAR_15.cur_state = VAR_8;
        FUNC_3(VAR_4,
                                   VAR_8, 0, VAR_22);
    }

    VAR_23 = FUNC_5(VAR_16, VAR_17,
                                        VAR_18);
    if (VAR_10 != VAR_23) {
        return VAR_23;
    }

    FUNC_3(VAR_5, VAR_15.cur_state,
                               VAR_3, VAR_22);

    return VAR_23;
}
