
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* p_param_buf; int param_len; } ;
typedef TYPE_1__ tBTM_VSC_CMPL ;
typedef int tBTM_STATUS ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_BATCH_SCAN_STATE ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {int cur_state; int (* p_scan_rep_cback ) (int ,int,int,int,int*,int) ;int (* p_setup_cback ) (int,int ,int) ;} ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,int*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_3 (int*,int *,int*,int *) ;
 int FUNC_4 (int,int *,int*,int**,int*) ;
 int FUNC_5 (int,int,int*,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ,int) ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ,int,int,int,int*,int) ;
 int FUNC_11 (int ,int,int,int,int*,int) ;

void FUNC_12 (tBTM_VSC_CMPL *VAR_8)
{
    UINT8 *VAR_9 = VAR_8->p_param_buf;
    UINT16 VAR_10 = VAR_8->param_len;
    tBTM_BLE_REF_VALUE VAR_11 = 0;

    UINT8 VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
    UINT8 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
    UINT16 VAR_18 = 0;
    tBTM_BLE_BATCH_SCAN_STATE VAR_19 = 0;
    tBTM_STATUS VAR_20 = 0;
    UINT8 *VAR_21 = ((void*)0);

    if (VAR_10 < 2) {
        FUNC_1("wrong length for btm_ble_batch_scan_vsc_cmpl_cback");
        FUNC_3(&VAR_14, &VAR_19, &VAR_17, &VAR_11);
        return;
    }

    FUNC_2(VAR_12, VAR_9);
    FUNC_2(VAR_13, VAR_9);

    FUNC_3(&VAR_14, &VAR_19, &VAR_17, &VAR_11);

    FUNC_0("btm_ble_batchscan op_code = %02x state = %02x cb_evt = %02x,ref_value=%d",
                    VAR_14, VAR_19, VAR_17, VAR_11);

    if (VAR_14 != VAR_13) {
        FUNC_1("Got unexpected VSC cmpl, expected: %d got: %d", VAR_13, VAR_14);
        return;
    }

    switch (VAR_13) {
    case 131: {
        if (VAR_6 == VAR_12 && VAR_3 == VAR_19) {
            VAR_7.cur_state = VAR_2;
        } else if (VAR_3 == VAR_19) {
            FUNC_1("SCAN_ENB_DISAB_CUST_FEATURE - Invalid state after enb");
            VAR_7.cur_state = VAR_4;
        }

        FUNC_0("BTM_BLE_BATCH_SCAN_ENB_DISAB_CUST_FEAT status = %d, state: %d,evt=%d",
                        VAR_12, VAR_7.cur_state, VAR_17);

        if (VAR_17 != 0 && ((void*)0) != VAR_7.p_setup_cback) {
            VAR_7.p_setup_cback(VAR_17, VAR_11, VAR_12);
        }
        break;
    }

    case 128: {
        FUNC_0("BTM_BLE_BATCH_SCAN_SET_STORAGE_PARAM status = %d, evt=%d",
                        VAR_12, VAR_17);
        if (VAR_17 != 0 && ((void*)0) != VAR_7.p_setup_cback) {
            VAR_7.p_setup_cback(VAR_17, VAR_11, VAR_12);
        }
        break;
    }

    case 129: {
        FUNC_0("BTM_BLE_BATCH_SCAN_SET_PARAMS status = %d,evt=%d", VAR_12, VAR_17);

        if (VAR_1 == VAR_19) {
            if (VAR_6 == VAR_12) {
                VAR_7.cur_state = VAR_0;
            } else {
                FUNC_1("BTM_BLE_BATCH_SCAN_SET_PARAMS - Invalid state after disabled");
                VAR_7.cur_state = VAR_4;
            }
        }

        if (VAR_17 != 0 && ((void*)0) != VAR_7.p_setup_cback) {
            VAR_7.p_setup_cback(VAR_17, VAR_11, VAR_12);
        }
        break;
    }

    case 130: {
        if (VAR_17 != 0 && ((void*)0) != VAR_7.p_scan_rep_cback) {
            FUNC_2(VAR_15, VAR_9);
            FUNC_2(VAR_16, VAR_9);
            VAR_9 = (uint8_t *)(VAR_8->p_param_buf + 4);
            FUNC_0("BTM_BLE_BATCH_SCAN_READ_RESULTS status=%d,len=%d,rec=%d",
                            VAR_12, VAR_10 - 4, VAR_16);

            if (0 == VAR_16) {
                FUNC_4(VAR_15, &VAR_11, &VAR_16,
                                               &VAR_21, &VAR_18);
                if (((void*)0) != VAR_7.p_scan_rep_cback) {
                    VAR_7.p_scan_rep_cback(VAR_11, VAR_15, VAR_16,
                                                      VAR_18, VAR_21, VAR_12);
                }
            } else {
                if ((VAR_10 - 4) > 0) {
                    FUNC_5(VAR_15, VAR_16, VAR_9, VAR_10 - 4);

                    VAR_20 = FUNC_6(VAR_15, VAR_11);
                    if (VAR_5 != VAR_20) {
                        FUNC_4(VAR_15, &VAR_11, &VAR_16,
                                                       &VAR_21, &VAR_18);

                        if (((void*)0) != VAR_7.p_scan_rep_cback && ((void*)0) != VAR_21) {
                            VAR_7.p_scan_rep_cback(VAR_11, VAR_15,
                                                              VAR_16, VAR_18, VAR_21, VAR_12);
                        }
                    }
                }
            }
        }
        break;
    }

    default:
        break;
    }

    return;
}
