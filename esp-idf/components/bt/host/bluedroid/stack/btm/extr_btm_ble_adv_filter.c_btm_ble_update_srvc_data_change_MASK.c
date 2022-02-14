
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef scalar_t__ tBTM_BLE_SCAN_COND_OP ;
typedef int tBTM_BLE_PF_FILT_INDEX ;
struct TYPE_3__ {int target_addr; } ;
typedef TYPE_1__ tBTM_BLE_PF_COND_PARAM ;
typedef int tBLE_BD_ADDR ;
typedef int UINT8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int *,int) ;

tBTM_STATUS FUNC_1(tBTM_BLE_SCAN_COND_OP VAR_5,
        tBTM_BLE_PF_FILT_INDEX VAR_6,
        tBTM_BLE_PF_COND_PARAM *VAR_7)
{
    tBTM_STATUS VAR_8 = VAR_3;
    tBLE_BD_ADDR *VAR_9 = VAR_7 ? &VAR_7->target_addr : ((void*)0);
    UINT8 VAR_10 = (VAR_5 == VAR_2) ? 0 : 1;

    if (FUNC_0 (VAR_5, VAR_1, VAR_9, VAR_10)
            != VAR_0) {
        VAR_8 = VAR_4;
    }

    return VAR_8;
}
