
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pspdef_t ;
struct TYPE_4__ {size_t readyweapon; int mo; int * ammo; } ;
typedef TYPE_1__ player_t ;
struct TYPE_5__ {size_t ammo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_1 ;

void
FUNC_1
( player_t* VAR_2,
  pspdef_t* VAR_3 )
{
    VAR_2->ammo[VAR_1[VAR_2->readyweapon].ammo]--;
    FUNC_0 (VAR_2->mo, VAR_0);
}
