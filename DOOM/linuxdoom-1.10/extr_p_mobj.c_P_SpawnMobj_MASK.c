
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_18__ {int frame; int sprite; int tics; } ;
typedef TYPE_4__ state_t ;
typedef size_t mobjtype_t ;
struct TYPE_19__ {size_t spawnstate; scalar_t__ height; int reactiontime; int spawnhealth; int flags; int radius; } ;
typedef TYPE_5__ mobjinfo_t ;
struct TYPE_17__ {scalar_t__ acp1; } ;
struct TYPE_14__ {TYPE_3__ function; } ;
struct TYPE_20__ {size_t type; int lastlook; TYPE_13__ thinker; scalar_t__ z; TYPE_5__* info; scalar_t__ ceilingz; scalar_t__ floorz; TYPE_2__* subsector; int frame; int sprite; int tics; TYPE_4__* state; int reactiontime; int health; int flags; scalar_t__ height; int radius; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_6__ mobj_t ;
typedef scalar_t__ fixed_t ;
typedef scalar_t__ actionf_p1 ;
struct TYPE_16__ {TYPE_1__* sector; } ;
struct TYPE_15__ {scalar_t__ ceilingheight; scalar_t__ floorheight; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_13__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int,int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_6__*,int ,int) ;
 TYPE_5__* VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_4__* VAR_8 ;

mobj_t*
FUNC_5
( fixed_t VAR_9,
  fixed_t VAR_10,
  fixed_t VAR_11,
  mobjtype_t VAR_12 )
{
    mobj_t* VAR_13;
    state_t* VAR_14;
    mobjinfo_t* VAR_15;

    VAR_13 = FUNC_3 (sizeof(*VAR_13), VAR_3, ((void*)0));
    FUNC_4 (VAR_13, 0, sizeof (*VAR_13));
    VAR_15 = &VAR_6[VAR_12];

    VAR_13->type = VAR_12;
    VAR_13->info = VAR_15;
    VAR_13->x = VAR_9;
    VAR_13->y = VAR_10;
    VAR_13->radius = VAR_15->radius;
    VAR_13->height = VAR_15->height;
    VAR_13->flags = VAR_15->flags;
    VAR_13->health = VAR_15->spawnhealth;

    if (VAR_5 != VAR_7)
 VAR_13->reactiontime = VAR_15->reactiontime;

    VAR_13->lastlook = FUNC_1 () % VAR_0;


    VAR_14 = &VAR_8[VAR_15->spawnstate];

    VAR_13->state = VAR_14;
    VAR_13->tics = VAR_14->tics;
    VAR_13->sprite = VAR_14->sprite;
    VAR_13->frame = VAR_14->frame;


    FUNC_2 (VAR_13);

    VAR_13->floorz = VAR_13->subsector->sector->floorheight;
    VAR_13->ceilingz = VAR_13->subsector->sector->ceilingheight;

    if (VAR_11 == VAR_2)
 VAR_13->z = VAR_13->floorz;
    else if (VAR_11 == VAR_1)
 VAR_13->z = VAR_13->ceilingz - VAR_13->info->height;
    else
 VAR_13->z = VAR_11;

    VAR_13->thinker.function.acp1 = (actionf_p1)VAR_4;

    FUNC_0 (&VAR_13->thinker);

    return VAR_13;
}
