
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bda; scalar_t__ srv_changed; } ;
typedef TYPE_1__ tGATTS_SRV_CHG ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(tGATTS_SRV_CHG *VAR_0)
{
    FUNC_0("gatt_chk_srv_chg srv_changed=%d", VAR_0->srv_changed );

    if (VAR_0->srv_changed) {
        FUNC_1(VAR_0->bda);
    }
}
