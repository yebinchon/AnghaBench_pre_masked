
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int statenum_t ;
struct TYPE_7__ {size_t pendingweapon; size_t readyweapon; TYPE_1__* psprites; int mo; } ;
typedef TYPE_2__ player_t ;
struct TYPE_8__ {int upstate; } ;
struct TYPE_6__ {int sy; } ;


 int FUNC_0 (TYPE_2__*,size_t,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

void FUNC_2 (player_t* VAR_6)
{
    statenum_t VAR_7;

    if (VAR_6->pendingweapon == VAR_5)
 VAR_6->pendingweapon = VAR_6->readyweapon;

    if (VAR_6->pendingweapon == VAR_4)
 FUNC_1 (VAR_6->mo, VAR_2);

    VAR_7 = VAR_3[VAR_6->pendingweapon].upstate;

    VAR_6->pendingweapon = VAR_5;
    VAR_6->psprites[VAR_1].sy = VAR_0;

    FUNC_0 (VAR_6, VAR_1, VAR_7);
}
