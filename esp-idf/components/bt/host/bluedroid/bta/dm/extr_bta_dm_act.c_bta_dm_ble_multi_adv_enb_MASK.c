
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_BLE_ADV_PARAMS ;
struct TYPE_5__ {int * p_ref; int (* p_cback ) (int ,int,int *,int ) ;scalar_t__ p_params; } ;
struct TYPE_6__ {TYPE_1__ ble_multi_adv_enb; } ;
typedef TYPE_2__ tBTA_DM_MSG ;
struct TYPE_7__ {int (* p_multi_adv_cback ) (int ,int,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int (*) (int ,int,int *,int ),int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (int ,int,int *,int ) ;

void FUNC_3(tBTA_DM_MSG *VAR_4)
{
    tBTM_STATUS VAR_5 = 0;

    VAR_3.p_multi_adv_cback = VAR_4->ble_multi_adv_enb.p_cback;
    if (FUNC_1() > 0 && ((void*)0) != VAR_4->ble_multi_adv_enb.p_ref) {
        VAR_5 = FUNC_0((tBTM_BLE_ADV_PARAMS *)
                                              VAR_4->ble_multi_adv_enb.p_params,
                                              VAR_4->ble_multi_adv_enb.p_cback,
                                              VAR_4->ble_multi_adv_enb.p_ref);
    }

    if (VAR_2 != VAR_5) {
        VAR_3.p_multi_adv_cback(VAR_0, 0xFF,
                                    VAR_4->ble_multi_adv_enb.p_ref, VAR_1);
    }
}
