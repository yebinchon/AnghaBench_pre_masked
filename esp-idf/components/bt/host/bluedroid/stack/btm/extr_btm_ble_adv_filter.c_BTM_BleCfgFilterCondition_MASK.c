
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_BLE_SCAN_COND_OP ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_PF_FILT_INDEX ;
typedef int tBTM_BLE_PF_COND_TYPE ;
typedef int tBTM_BLE_PF_COND_PARAM ;
typedef int tBTM_BLE_PF_CFG_CBACK ;
typedef int UINT8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *,int ,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int *,int,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ,int,int *,int ,int ) ;

tBTM_STATUS FUNC_11(tBTM_BLE_SCAN_COND_OP VAR_5,
                                      tBTM_BLE_PF_COND_TYPE VAR_6,
                                      tBTM_BLE_PF_FILT_INDEX VAR_7,
                                      tBTM_BLE_PF_COND_PARAM *VAR_8,
                                      tBTM_BLE_PF_CFG_CBACK *VAR_9,
                                      tBTM_BLE_REF_VALUE VAR_10)
{
    tBTM_STATUS VAR_11 = VAR_3;
    UINT8 VAR_12 = 0;
    FUNC_0 (" BTM_BleCfgFilterCondition action:%d, cond_type:%d, index:%d", VAR_5,
                     VAR_6, VAR_7);

    if (VAR_4 != FUNC_5()) {
        return VAR_11;
    }

    switch (VAR_6) {

    case 131:

    case 133:
        VAR_11 = FUNC_8(VAR_5, VAR_7, VAR_8, VAR_6, 0, VAR_10);
        break;


    case 134:
        VAR_11 = FUNC_7(VAR_5, VAR_7, VAR_8);
        break;


    case 135:
        VAR_11 = FUNC_6(VAR_5, VAR_7, VAR_8);
        break;


    case 129:
    case 130:
        VAR_11 = FUNC_10(VAR_5, VAR_7, VAR_6, VAR_8, 0, VAR_10);
        break;

    case 132:
        VAR_11 = FUNC_9(VAR_5, VAR_7, VAR_8);
        break;

    case 128:
        VAR_11 = FUNC_3(VAR_5, VAR_7, VAR_8, VAR_9,
                                          0, VAR_10);
        break;

    default:
        FUNC_1("condition type [%d] not supported currently.", VAR_6);
        break;
    }

    if (VAR_2 == VAR_11 && VAR_6 != 128) {
        VAR_12 = FUNC_4(VAR_6);
        FUNC_2(VAR_5, VAR_12, VAR_0, VAR_10, VAR_9, ((void*)0));
    } else if (VAR_2 == VAR_11 && 128 == VAR_6) {
        FUNC_2(VAR_5, VAR_1, VAR_0,
                                 VAR_10, VAR_9, ((void*)0));
    }
    return VAR_11;
}
