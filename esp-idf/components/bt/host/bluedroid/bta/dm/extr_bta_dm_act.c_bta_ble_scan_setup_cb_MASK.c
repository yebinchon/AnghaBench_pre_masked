
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_BATCH_SCAN_EVT ;
typedef int tBTA_BLE_BATCH_SCAN_EVT ;
struct TYPE_2__ {int (* p_setup_cback ) (int ,int ,int ) ;} ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(tBTM_BLE_BATCH_SCAN_EVT VAR_5, tBTM_BLE_REF_VALUE VAR_6,
                           tBTM_STATUS VAR_7)
{
    tBTA_BLE_BATCH_SCAN_EVT VAR_8 = 0;

    FUNC_0("bta_ble_scan_setup_cb : evt: %d, ref_value: %d, status:%d", VAR_5,
                     VAR_6, VAR_7);

    switch (VAR_5) {
    case 129:
        VAR_8 = VAR_2;
        break;
    case 131:
        VAR_8 = VAR_0;
        break;
    case 130:
        VAR_8 = VAR_1;
        break;
    case 128:
        VAR_8 = VAR_3;
        break;
    default:
        break;
    }

    if (((void*)0) != VAR_4.p_setup_cback) {
        VAR_4.p_setup_cback(VAR_8, VAR_6, VAR_7);
    }
}
