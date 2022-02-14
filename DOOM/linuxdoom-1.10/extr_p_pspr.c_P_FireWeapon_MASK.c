
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int statenum_t ;
struct TYPE_6__ {size_t readyweapon; int mo; } ;
typedef TYPE_1__ player_t ;
struct TYPE_7__ {int atkstate; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_4 (player_t* VAR_3)
{
    statenum_t VAR_4;

    if (!FUNC_0 (VAR_3))
 return;

    FUNC_2 (VAR_3->mo, VAR_0);
    VAR_4 = VAR_2[VAR_3->readyweapon].atkstate;
    FUNC_3 (VAR_3, VAR_1, VAR_4);
    FUNC_1 (VAR_3->mo, VAR_3->mo);
}
