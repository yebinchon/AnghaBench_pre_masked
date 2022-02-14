
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {int p_energy_info_cback; } ;
struct TYPE_6__ {TYPE_1__ ble_energy_info; } ;
typedef TYPE_2__ tBTA_DM_MSG ;
struct TYPE_7__ {int p_energy_info_cback; } ;


 scalar_t__ FUNC_0 (int (*) (int ,int ,int ,int ,scalar_t__)) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 TYPE_3__ VAR_1 ;

void FUNC_2(tBTA_DM_MSG *VAR_2)
{
    tBTM_STATUS VAR_3 = 0;

    VAR_1.p_energy_info_cback = VAR_2->ble_energy_info.p_energy_info_cback;
    VAR_3 = FUNC_0(FUNC_1);
    if (VAR_0 != VAR_3) {
        FUNC_1(0, 0, 0, 0, VAR_3);
    }
}
