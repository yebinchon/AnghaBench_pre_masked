
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pspdef_t ;
struct TYPE_6__ {int buttons; } ;
struct TYPE_7__ {scalar_t__ pendingweapon; scalar_t__ refire; scalar_t__ health; TYPE_1__ cmd; } ;
typedef TYPE_2__ player_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;

void FUNC_2
( player_t* VAR_2,
  pspdef_t* VAR_3 )
{



    if ( (VAR_2->cmd.buttons & VAR_0)
  && VAR_2->pendingweapon == VAR_1
  && VAR_2->health)
    {
 VAR_2->refire++;
 FUNC_1 (VAR_2);
    }
    else
    {
 VAR_2->refire = 0;
 FUNC_0 (VAR_2);
    }
}
