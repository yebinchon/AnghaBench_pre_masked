
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int set_local_privacy_cback; int privacy_enable; } ;
struct TYPE_5__ {TYPE_1__ ble_local_privacy; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (int ,int ) ;

void FUNC_1 (tBTA_DM_MSG *VAR_0)
{
    FUNC_0 (VAR_0->ble_local_privacy.privacy_enable, VAR_0->ble_local_privacy.set_local_privacy_cback);
}
