
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


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_2 ;

void
FUNC_1
( player_t* VAR_3,
  pspdef_t* VAR_4 )
{
    VAR_3->ammo[VAR_2[VAR_3->readyweapon].ammo] -= VAR_0;
    FUNC_0 (VAR_3->mo, VAR_1);
}
