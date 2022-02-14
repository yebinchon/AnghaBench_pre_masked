
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_STATUS ;
struct TYPE_6__ {int (* p_adv_data_cback ) (int ) ;} ;
struct TYPE_5__ {int adv_data_len; int adv_data; } ;
struct TYPE_7__ {TYPE_2__ ble_set_adv_data; TYPE_1__ ble_set_long_adv_data; } ;
typedef TYPE_3__ tBTA_DM_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

void FUNC_2 (tBTA_DM_MSG *VAR_3)
{
    tBTA_STATUS VAR_4 = VAR_0;

    if (FUNC_0(VAR_3->ble_set_long_adv_data.adv_data,
                                VAR_3->ble_set_long_adv_data.adv_data_len) == VAR_2) {
        VAR_4 = VAR_1;
    }

    if (VAR_3->ble_set_adv_data.p_adv_data_cback) {
        (*VAR_3->ble_set_adv_data.p_adv_data_cback)(VAR_4);
    }
}
