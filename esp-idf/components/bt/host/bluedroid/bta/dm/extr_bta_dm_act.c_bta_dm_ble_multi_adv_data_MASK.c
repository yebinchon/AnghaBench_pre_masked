
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_BLE_ADV_DATA ;
struct TYPE_5__ {scalar_t__ inst_id; scalar_t__ p_data; int data_mask; int is_scan_rsp; } ;
struct TYPE_6__ {TYPE_1__ ble_multi_adv_data; } ;
typedef TYPE_2__ tBTA_DM_MSG ;
struct TYPE_7__ {int (* p_multi_adv_cback ) (int ,scalar_t__,void*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,void*,int ) ;

void FUNC_4(tBTA_DM_MSG *VAR_4)
{
    tBTM_STATUS VAR_5 = 0;
    void *VAR_6 = ((void*)0);

    if (FUNC_1() > 0 && VAR_4->ble_multi_adv_data.inst_id > 0
            && VAR_4->ble_multi_adv_data.inst_id < FUNC_1()) {
        VAR_5 = FUNC_0(VAR_4->ble_multi_adv_data.inst_id,
                                           VAR_4->ble_multi_adv_data.is_scan_rsp,
                                           VAR_4->ble_multi_adv_data.data_mask,
                                           (tBTM_BLE_ADV_DATA *)VAR_4->ble_multi_adv_data.p_data);
    }

    if (VAR_2 != VAR_5) {
        VAR_6 = FUNC_2(VAR_4->ble_multi_adv_data.inst_id);
        VAR_3.p_multi_adv_cback(VAR_0,
                                    VAR_4->ble_multi_adv_data.inst_id, VAR_6, VAR_1);
    }

}
