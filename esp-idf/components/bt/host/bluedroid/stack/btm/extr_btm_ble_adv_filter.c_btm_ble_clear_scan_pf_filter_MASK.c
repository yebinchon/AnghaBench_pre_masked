
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
typedef scalar_t__ tBTM_BLE_SCAN_COND_OP ;
typedef int tBTM_BLE_REF_VALUE ;
typedef scalar_t__ tBTM_BLE_PF_FILT_INDEX ;
typedef int tBTM_BLE_PF_COUNT ;
struct TYPE_4__ {int target_addr; } ;
typedef TYPE_1__ tBTM_BLE_PF_COND_PARAM ;
typedef int tBTM_BLE_PF_CFG_CBACK ;
typedef int tBTM_BLE_FILT_CB_EVT ;
typedef int tBLE_BD_ADDR ;
typedef int UINT8 ;
struct TYPE_5__ {int cur_filter_target; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_3__ VAR_20 ;
 int FUNC_4 (scalar_t__,int ,int ,int ,int *,int *) ;
 int * FUNC_5 (int *) ;
 int VAR_21 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int *,int ,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ,int *,int ,int ) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int ,int) ;

tBTM_STATUS FUNC_12(tBTM_BLE_SCAN_COND_OP VAR_22,
        tBTM_BLE_PF_FILT_INDEX VAR_23,
        tBTM_BLE_PF_COND_PARAM *VAR_24,
        tBTM_BLE_PF_CFG_CBACK *VAR_25,
        tBTM_BLE_FILT_CB_EVT VAR_26,
        tBTM_BLE_REF_VALUE VAR_27)
{
    tBLE_BD_ADDR *VAR_28 = (VAR_24 == ((void*)0)) ? ((void*)0) : &VAR_24->target_addr;
    tBTM_BLE_PF_COUNT *VAR_29;
    tBTM_STATUS VAR_30 = VAR_18;
    UINT8 VAR_31[20], *VAR_32;

    if (VAR_14 != VAR_22) {
        FUNC_0("unable to perform action:%d for generic adv filter type", VAR_22);
        return VAR_16;
    }

    VAR_32 = VAR_31;
    FUNC_11(VAR_31, 0, 20);

    VAR_29 = FUNC_5(VAR_28);

    if (((void*)0) == VAR_29 ||

            (VAR_28 != ((void*)0) && VAR_29)) {
        FUNC_0("Error: Can not clear filter, No PF filter has been configured!");
        return VAR_30;
    }


    if (((void*)0) == VAR_28) {

        VAR_30 = FUNC_7(VAR_14, VAR_23, ((void*)0),
                                         VAR_9, VAR_26, VAR_27);
        if (VAR_15 == VAR_30) {
            FUNC_4(VAR_22, VAR_3, VAR_26,
                                     VAR_27, ((void*)0), ((void*)0));
        }


        VAR_30 = FUNC_6(VAR_14, VAR_23, ((void*)0));
        if (VAR_15 == VAR_30) {
            FUNC_4(VAR_22, VAR_2, VAR_26,
                                     VAR_27, ((void*)0), ((void*)0));
        }


        VAR_30 = FUNC_8(VAR_14, VAR_23, ((void*)0));


        VAR_30 = FUNC_9(VAR_14, VAR_23,
                                        VAR_13, ((void*)0), VAR_26, VAR_27);
        if (VAR_15 == VAR_30) {
            FUNC_4(VAR_22, VAR_6, VAR_26, VAR_27, ((void*)0), ((void*)0));
        }

        VAR_30 = FUNC_9(VAR_14, VAR_23,
                                        VAR_12, ((void*)0), VAR_26, VAR_27);
        if (VAR_15 == VAR_30) {
            FUNC_4(VAR_22, VAR_4, VAR_26,
                                     VAR_27, ((void*)0), ((void*)0));
        }


        VAR_30 = FUNC_7(VAR_14, VAR_23, ((void*)0),
                                         VAR_11, VAR_26, VAR_27);
        if (VAR_15 == VAR_30) {
            FUNC_4(VAR_22, VAR_5, VAR_26,
                                     VAR_27, ((void*)0), ((void*)0));
        }
    }


    FUNC_3(VAR_32, VAR_1);
    FUNC_3(VAR_32, VAR_14);


    FUNC_3(VAR_32, VAR_23);


    FUNC_2(VAR_32, VAR_10);

    FUNC_3(VAR_32, VAR_8);

    if ((VAR_30 = FUNC_1 (VAR_19,
                                         (UINT8)(VAR_0 + VAR_7),
                                         VAR_31,
                                         VAR_21))
            != VAR_17) {
        if (VAR_28) {
            FUNC_10(&VAR_20.cur_filter_target, VAR_28, sizeof(tBLE_BD_ADDR));
        } else {
            FUNC_11(&VAR_20.cur_filter_target, 0, sizeof(tBLE_BD_ADDR));
        }
    }
    return VAR_30;
}
