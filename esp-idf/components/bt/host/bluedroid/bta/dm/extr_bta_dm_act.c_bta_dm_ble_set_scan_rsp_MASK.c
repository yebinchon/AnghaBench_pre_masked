
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_BLE_ADV_DATA ;
typedef int tBTA_STATUS ;
struct TYPE_4__ {int (* p_adv_data_cback ) (int ) ;scalar_t__ p_adv_cfg; int data_mask; } ;
struct TYPE_5__ {TYPE_1__ ble_set_adv_data; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

void FUNC_2 (tBTA_DM_MSG *VAR_3)
{
    tBTA_STATUS VAR_4 = VAR_0;

    if (FUNC_0(VAR_3->ble_set_adv_data.data_mask,
                            (tBTM_BLE_ADV_DATA *)VAR_3->ble_set_adv_data.p_adv_cfg) == VAR_2) {
        VAR_4 = VAR_1;
    }

    if (VAR_3->ble_set_adv_data.p_adv_data_cback) {
        (*VAR_3->ble_set_adv_data.p_adv_data_cback)(VAR_4);
    }
}
