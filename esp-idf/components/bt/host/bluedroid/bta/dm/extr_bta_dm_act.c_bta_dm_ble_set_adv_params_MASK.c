
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_dir_bda; int adv_int_max; int adv_int_min; } ;
struct TYPE_5__ {TYPE_1__ ble_set_adv_params; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1 (tBTA_DM_MSG *VAR_1)
{
    FUNC_0(VAR_1->ble_set_adv_params.adv_int_min,
                        VAR_1->ble_set_adv_params.adv_int_max,
                        VAR_1->ble_set_adv_params.p_dir_bda,
                        VAR_0);
}
