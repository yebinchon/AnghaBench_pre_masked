
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef scalar_t__ tBTM_BLE_SCAN_COND_OP ;
typedef int tBTM_BLE_REF_VALUE ;
struct TYPE_10__ {int uuid128; int uuid32; int uuid16; } ;
struct TYPE_12__ {scalar_t__ len; TYPE_1__ uu; } ;
struct TYPE_13__ {TYPE_6__* p_target_addr; TYPE_3__ uuid; TYPE_2__* p_uuid_mask; } ;
typedef TYPE_4__ tBTM_BLE_PF_UUID_COND ;
typedef scalar_t__ tBTM_BLE_PF_FILT_INDEX ;
typedef scalar_t__ tBTM_BLE_PF_COND_TYPE ;
struct TYPE_14__ {TYPE_4__ solicitate_uuid; TYPE_4__ srvc_uuid; } ;
typedef TYPE_5__ tBTM_BLE_PF_COND_PARAM ;
typedef int tBTM_BLE_FILT_CB_EVT ;
typedef int tBLE_BD_ADDR ;
typedef scalar_t__ UINT8 ;
struct TYPE_16__ {scalar_t__ cur_filter_target; } ;
struct TYPE_15__ {scalar_t__ type; int bda; } ;
struct TYPE_11__ {int uuid128_mask; int uuid32_mask; int uuid16_mask; } ;


 int FUNC_0 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__*,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (scalar_t__*,scalar_t__) ;
 TYPE_9__ VAR_16 ;
 int FUNC_8 (scalar_t__,scalar_t__,int ,int ,int *,int *) ;
 int * FUNC_9 (TYPE_6__*) ;
 int VAR_17 ;
 int FUNC_10 (scalar_t__*,TYPE_6__*,int) ;
 int FUNC_11 (scalar_t__*,int,int) ;

tBTM_STATUS FUNC_12(tBTM_BLE_SCAN_COND_OP VAR_18,
                                       tBTM_BLE_PF_FILT_INDEX VAR_19,
                                       tBTM_BLE_PF_COND_TYPE VAR_20,
                                       tBTM_BLE_PF_COND_PARAM *VAR_21,
                                       tBTM_BLE_FILT_CB_EVT VAR_22,
                                       tBTM_BLE_REF_VALUE VAR_23)
{
    UINT8 VAR_24[VAR_5 + VAR_0],
                * VAR_25 = VAR_24,
                  VAR_26 = VAR_0;
    tBTM_STATUS VAR_27 = VAR_10;
    tBTM_BLE_PF_UUID_COND *VAR_28;
    UINT8 VAR_29;

    FUNC_11(VAR_24, 0, VAR_5 + VAR_0);

    if (VAR_6 == VAR_20) {
        VAR_29 = VAR_4;
        VAR_28 = VAR_21 ? &VAR_21->srvc_uuid : ((void*)0);
    } else {
        VAR_29 = VAR_3;
        VAR_28 = VAR_21 ? &VAR_21->solicitate_uuid : ((void*)0);
    }

    if (((void*)0) == VAR_28 && VAR_18 != VAR_8) {
        FUNC_3("Illegal param for add/delete UUID filter");
        return VAR_27;
    }


    if (VAR_7 == VAR_18 && ((void*)0) != VAR_28 &&
            VAR_28->p_target_addr &&
            FUNC_9(VAR_28->p_target_addr) == ((void*)0)) {
        FUNC_7(VAR_25, VAR_2);
        FUNC_7(VAR_25, VAR_18);


        FUNC_7(VAR_25, VAR_19);

        FUNC_1(VAR_25, VAR_28->p_target_addr->bda);
        FUNC_7(VAR_25, VAR_28->p_target_addr->type);


        if ((VAR_27 = FUNC_4 (VAR_12,
                                             (UINT8)(VAR_0 + VAR_1),
                                             VAR_24,
                                             VAR_17)) == VAR_11) {
            FUNC_3("Update Address filter into controller failed.");
            return VAR_27;
        }

        FUNC_8(VAR_18, VAR_2, VAR_22, VAR_23, ((void*)0), ((void*)0));
        FUNC_2("Updated Address filter");
    }

    VAR_25 = VAR_24;
    FUNC_7(VAR_25, VAR_29);
    FUNC_7(VAR_25, VAR_18);


    FUNC_7(VAR_25, VAR_19);

    if ((VAR_7 == VAR_18 ||
            VAR_9 == VAR_18) &&
            ((void*)0) != VAR_28) {
        if (VAR_28->uuid.len == VAR_14) {
            FUNC_5(VAR_25, VAR_28->uuid.uu.uuid16);
            VAR_26 += VAR_14;
        } else if (VAR_28->uuid.len == VAR_15) {
            FUNC_6(VAR_25, VAR_28->uuid.uu.uuid32);
            VAR_26 += VAR_15;
        } else if (VAR_28->uuid.len == VAR_13) {
            FUNC_0 (VAR_25, VAR_28->uuid.uu.uuid128, VAR_13);
            VAR_26 += VAR_13;
        } else {
            FUNC_3("illegal UUID length: %d", VAR_28->uuid.len);
            return VAR_10;
        }

        if (((void*)0) != VAR_28->p_uuid_mask) {
            if (VAR_28->uuid.len == VAR_14) {
                FUNC_5(VAR_25, VAR_28->p_uuid_mask->uuid16_mask);
                VAR_26 += VAR_14;
            } else if (VAR_28->uuid.len == VAR_15) {
                FUNC_6(VAR_25, VAR_28->p_uuid_mask->uuid32_mask);
                VAR_26 += VAR_15;
            } else if (VAR_28->uuid.len == VAR_13) {
                FUNC_0 (VAR_25, VAR_28->p_uuid_mask->uuid128_mask, VAR_13);
                VAR_26 += VAR_13;
            }
        } else {
            FUNC_11(VAR_25, 0xff, VAR_28->uuid.len);
            VAR_26 += VAR_28->uuid.len;
        }
        FUNC_2("btm_ble_update_uuid_filter : %d, %d, %d, %d", VAR_20, VAR_29,
                        VAR_28->uuid.len, VAR_26);
    }


    if ((VAR_27 = FUNC_4 (VAR_12,
                                         VAR_26,
                                         VAR_24,
                                         VAR_17)) != VAR_11) {
        if (VAR_28 && VAR_28->p_target_addr) {
            FUNC_10(&VAR_16.cur_filter_target, VAR_28->p_target_addr,
                   sizeof(tBLE_BD_ADDR));
        }
        else {
            FUNC_11(&VAR_16.cur_filter_target, 0, sizeof(tBLE_BD_ADDR));
        }
    } else {
        FUNC_3("UUID filter udpating failed");
    }

    return VAR_27;
}
