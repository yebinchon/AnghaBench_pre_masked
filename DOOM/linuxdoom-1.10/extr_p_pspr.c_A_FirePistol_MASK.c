
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pspdef_t ;
struct TYPE_5__ {size_t readyweapon; int refire; int mo; int * ammo; } ;
typedef TYPE_1__ player_t ;
struct TYPE_6__ {size_t ammo; int flashstate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

void
FUNC_5
( player_t* VAR_4,
  pspdef_t* VAR_5 )
{
    FUNC_4 (VAR_4->mo, VAR_2);

    FUNC_2 (VAR_4->mo, VAR_0);
    VAR_4->ammo[VAR_3[VAR_4->readyweapon].ammo]--;

    FUNC_3 (VAR_4,
    VAR_1,
    VAR_3[VAR_4->readyweapon].flashstate);

    FUNC_0 (VAR_4->mo);
    FUNC_1 (VAR_4->mo, !VAR_4->refire);
}
