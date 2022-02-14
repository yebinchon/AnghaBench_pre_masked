
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_BLE_SCAN_COND_OP ;
typedef int tBTM_BLE_REF_VALUE ;
struct TYPE_6__ {int data_len; int * p_pattern_mask; int * p_pattern; } ;
typedef TYPE_1__ tBTM_BLE_PF_SRVC_PATTERN_COND ;
struct TYPE_7__ {int data_len; scalar_t__ company_id; scalar_t__ company_id_mask; int * p_pattern_mask; int * p_pattern; } ;
typedef TYPE_2__ tBTM_BLE_PF_MANU_COND ;
typedef int tBTM_BLE_PF_FILT_INDEX ;
typedef scalar_t__ tBTM_BLE_PF_COND_TYPE ;
struct TYPE_8__ {TYPE_1__ srvc_data; TYPE_2__ manu_data; } ;
typedef TYPE_3__ tBTM_BLE_PF_COND_PARAM ;
typedef int tBTM_BLE_FILT_CB_EVT ;
typedef int tBLE_BD_ADDR ;
typedef int UINT8 ;
struct TYPE_9__ {int cur_filter_target; } ;


 int FUNC_0 (int*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int,int*,int ) ;
 int VAR_9 ;
 int FUNC_5 (int*,scalar_t__) ;
 int FUNC_6 (int*,int ) ;
 TYPE_5__ VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int*,int,int) ;

tBTM_STATUS FUNC_8(tBTM_BLE_SCAN_COND_OP VAR_12,
                                        tBTM_BLE_PF_FILT_INDEX VAR_13,
                                        tBTM_BLE_PF_COND_PARAM *VAR_14,
                                        tBTM_BLE_PF_COND_TYPE VAR_15,
                                        tBTM_BLE_FILT_CB_EVT VAR_16,
                                        tBTM_BLE_REF_VALUE VAR_17)
{
    tBTM_BLE_PF_MANU_COND *VAR_18 = (VAR_14 == ((void*)0)) ? ((void*)0) : &VAR_14->manu_data;
    tBTM_BLE_PF_SRVC_PATTERN_COND *VAR_19 = (VAR_14 == ((void*)0)) ? ((void*)0) : &VAR_14->srvc_data;

    UINT8 VAR_20[VAR_4 + VAR_4 + VAR_0],
          *VAR_21 = VAR_20,
           VAR_22 = VAR_0;
    tBTM_STATUS VAR_23 = VAR_7;

    if (((void*)0) == VAR_14) {
        return VAR_23;
    }

    FUNC_7(VAR_20, 0, VAR_4 + VAR_4
           + VAR_0);

    if (VAR_3 == VAR_15) {
        FUNC_6(VAR_21, VAR_2);
    } else {
        FUNC_6(VAR_21, VAR_1);
    }

    FUNC_6(VAR_21, VAR_12);


    FUNC_6(VAR_21, VAR_13);

    if (VAR_5 == VAR_12 || VAR_6 == VAR_12) {
        if (VAR_3 == VAR_15) {
            if (((void*)0) == VAR_19) {
                return VAR_23;
            }
            if (VAR_19->data_len > (VAR_4 - 2)) {
                VAR_19->data_len = (VAR_4 - 2);
            }

            if (VAR_19->data_len > 0) {
                FUNC_0(VAR_21, VAR_19->p_pattern, VAR_19->data_len);
                VAR_22 += (VAR_19->data_len);
                FUNC_0(VAR_21, VAR_19->p_pattern_mask, VAR_19->data_len);
            }

            VAR_22 += (VAR_19->data_len);
            FUNC_1("Service data length: %d", VAR_22);
        } else {
            if (((void*)0) == VAR_18) {
                FUNC_2("btm_ble_update_pf_manu_data - No manuf data");
                return VAR_23;
            }
            FUNC_3("btm_ble_update_pf_manu_data length: %d",
                            VAR_18->data_len);
            if (VAR_18->data_len > (VAR_4 - 2)) {
                VAR_18->data_len = (VAR_4 - 2);
            }

            FUNC_5(VAR_21, VAR_18->company_id);
            if (VAR_18->data_len > 0 && VAR_18->p_pattern_mask != ((void*)0)) {
                FUNC_0(VAR_21, VAR_18->p_pattern, VAR_18->data_len);
                VAR_22 += (VAR_18->data_len + 2);
            } else {
                VAR_22 += 2;
            }

            if (VAR_18->company_id_mask != 0) {
                FUNC_5 (VAR_21, VAR_18->company_id_mask);
            } else {
                FUNC_7(VAR_21, 0xff, 2);
                VAR_21 += 2;
            }
            VAR_22 += 2;

            if (VAR_18->data_len > 0 && VAR_18->p_pattern_mask != ((void*)0)) {
                FUNC_0(VAR_21, VAR_18->p_pattern_mask, VAR_18->data_len);
                VAR_22 += (VAR_18->data_len);
            }

            FUNC_1("Manuf data length: %d", VAR_22);
        }
    }


    if ((VAR_23 = FUNC_4 (VAR_9,
                                         VAR_22,
                                         VAR_20,
                                         VAR_11)) != VAR_8) {
        FUNC_7(&VAR_10.cur_filter_target, 0, sizeof(tBLE_BD_ADDR));
    } else {
        FUNC_2("manufacturer data PF filter update failed");
    }

    return VAR_23;
}
