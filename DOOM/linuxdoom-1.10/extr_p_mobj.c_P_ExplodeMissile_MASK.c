
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t type; int tics; TYPE_1__* info; int flags; scalar_t__ momz; scalar_t__ momy; scalar_t__ momx; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_9__ {int deathstate; } ;
struct TYPE_7__ {scalar_t__ deathsound; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 TYPE_3__* VAR_1 ;

void FUNC_3 (mobj_t* VAR_2)
{
    VAR_2->momx = VAR_2->momy = VAR_2->momz = 0;

    FUNC_1 (VAR_2, VAR_1[VAR_2->type].deathstate);

    VAR_2->tics -= FUNC_0()&3;

    if (VAR_2->tics < 1)
 VAR_2->tics = 1;

    VAR_2->flags &= ~VAR_0;

    if (VAR_2->info->deathsound)
 FUNC_2 (VAR_2, VAR_2->info->deathsound);
}
