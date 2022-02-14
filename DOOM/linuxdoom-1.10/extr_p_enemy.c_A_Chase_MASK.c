
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int movedir; int angle; int flags; scalar_t__ movecount; TYPE_1__* info; TYPE_9__* target; scalar_t__ threshold; scalar_t__ reactiontime; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_15__ {scalar_t__ health; int flags; } ;
struct TYPE_13__ {scalar_t__ activesound; scalar_t__ missilestate; scalar_t__ meleestate; scalar_t__ attacksound; scalar_t__ spawnstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_9__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_9 (mobj_t* VAR_7)
{
    int VAR_8;

    if (VAR_7->reactiontime)
 VAR_7->reactiontime--;



    if (VAR_7->threshold)
    {
 if (!VAR_7->target
     || VAR_7->target->health <= 0)
 {
     VAR_7->threshold = 0;
 }
 else
     VAR_7->threshold--;
    }


    if (VAR_7->movedir < 8)
    {
 VAR_7->angle &= (7<<29);
 VAR_8 = VAR_7->angle - (VAR_7->movedir << 29);

 if (VAR_8 > 0)
     VAR_7->angle -= VAR_0/2;
 else if (VAR_8 < 0)
     VAR_7->angle += VAR_0/2;
    }

    if (!VAR_7->target
 || !(VAR_7->target->flags&VAR_2))
    {

 if (FUNC_3(VAR_7,1))
     return;

 FUNC_7 (VAR_7, VAR_7->info->spawnstate);
 return;
    }


    if (VAR_7->flags & VAR_1)
    {
 VAR_7->flags &= ~VAR_1;
 if (VAR_4 != VAR_6 && !VAR_3)
     FUNC_5 (VAR_7);
 return;
    }


    if (VAR_7->info->meleestate
 && FUNC_0 (VAR_7))
    {
 if (VAR_7->info->attacksound)
     FUNC_8 (VAR_7, VAR_7->info->attacksound);

 FUNC_7 (VAR_7, VAR_7->info->meleestate);
 return;
    }


    if (VAR_7->info->missilestate)
    {
 if (VAR_4 < VAR_6
     && !VAR_3 && VAR_7->movecount)
 {
     goto nomissile;
 }

 if (!FUNC_1 (VAR_7))
     goto nomissile;

 FUNC_7 (VAR_7, VAR_7->info->missilestate);
 VAR_7->flags |= VAR_1;
 return;
    }


  nomissile:

    if (VAR_5
 && !VAR_7->threshold
 && !FUNC_2 (VAR_7, VAR_7->target) )
    {
 if (FUNC_3(VAR_7,1))
     return;
    }


    if (--VAR_7->movecount<0
 || !FUNC_4 (VAR_7))
    {
 FUNC_5 (VAR_7);
    }


    if (VAR_7->info->activesound
 && FUNC_6 () < 3)
    {
 FUNC_8 (VAR_7, VAR_7->info->activesound);
    }
}
