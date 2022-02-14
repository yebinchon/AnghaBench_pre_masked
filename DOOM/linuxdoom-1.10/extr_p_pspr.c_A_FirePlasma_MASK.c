
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pspdef_t ;
struct TYPE_5__ {size_t readyweapon; int mo; int * ammo; } ;
typedef TYPE_1__ player_t ;
struct TYPE_6__ {size_t ammo; scalar_t__ flashstate; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void
FUNC_3
( player_t* VAR_3,
  pspdef_t* VAR_4 )
{
    VAR_3->ammo[VAR_2[VAR_3->readyweapon].ammo]--;

    FUNC_1 (VAR_3,
    VAR_1,
    VAR_2[VAR_3->readyweapon].flashstate+(FUNC_0 ()&1) );

    FUNC_2 (VAR_3->mo, VAR_0);
}
