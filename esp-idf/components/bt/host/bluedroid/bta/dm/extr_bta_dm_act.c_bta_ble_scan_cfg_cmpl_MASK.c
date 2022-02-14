
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_BLE_SCAN_COND_OP ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_PF_AVBL_SPACE ;
typedef int tBTM_BLE_PF_ACTION ;
typedef int tBTA_STATUS ;
struct TYPE_2__ {int (* p_scan_filt_cfg_cback ) (int ,int ,int ,int ,int ) ;} ;


 int FUNC_0 (char*,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(tBTM_BLE_PF_ACTION VAR_4, tBTM_BLE_SCAN_COND_OP VAR_5,
                                  tBTM_BLE_PF_AVBL_SPACE VAR_6, tBTM_STATUS VAR_7,
                                  tBTM_BLE_REF_VALUE VAR_8)
{
    tBTA_STATUS VAR_9 = (VAR_7 == VAR_2) ? VAR_1 : VAR_0;

    FUNC_0("bta_ble_scan_cfg_cmpl: %d, %d, %d, %d", VAR_4, VAR_5, VAR_6, VAR_7);

    if (VAR_3.p_scan_filt_cfg_cback) {
        VAR_3.p_scan_filt_cfg_cback(VAR_4, VAR_5, VAR_6, VAR_9, VAR_8);
    }
}
