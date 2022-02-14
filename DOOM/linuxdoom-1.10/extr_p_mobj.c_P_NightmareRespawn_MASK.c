
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__* sector; } ;
typedef TYPE_5__ subsector_t ;
struct TYPE_20__ {int x; int y; int angle; int options; } ;
struct TYPE_19__ {int x; int y; int angle; int reactiontime; int flags; TYPE_7__ spawnpoint; int type; TYPE_4__* info; TYPE_2__* subsector; } ;
typedef TYPE_6__ mobj_t ;
typedef TYPE_7__ mapthing_t ;
typedef int fixed_t ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {int floorheight; } ;
struct TYPE_15__ {TYPE_1__* sector; } ;
struct TYPE_14__ {int floorheight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_6__*,int,int) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_6__* FUNC_2 (int,int,int,int ) ;
 TYPE_5__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int VAR_8 ;

void
FUNC_5 (mobj_t* VAR_9)
{
    fixed_t VAR_10;
    fixed_t VAR_11;
    fixed_t VAR_12;
    subsector_t* VAR_13;
    mobj_t* VAR_14;
    mapthing_t* VAR_15;

    VAR_10 = VAR_9->spawnpoint.x << VAR_1;
    VAR_11 = VAR_9->spawnpoint.y << VAR_1;


    if (!FUNC_0 (VAR_9, VAR_10, VAR_11) )
 return;



    VAR_14 = FUNC_2 (VAR_9->x,
        VAR_9->y,
        VAR_9->subsector->sector->floorheight , VAR_5);

    FUNC_4 (VAR_14, VAR_8);


    VAR_13 = FUNC_3 (VAR_10,VAR_11);

    VAR_14 = FUNC_2 (VAR_10, VAR_11, VAR_13->sector->floorheight , VAR_5);

    FUNC_4 (VAR_14, VAR_8);


    VAR_15 = &VAR_9->spawnpoint;


    if (VAR_9->info->flags & VAR_3)
 VAR_12 = VAR_6;
    else
 VAR_12 = VAR_7;


    VAR_14 = FUNC_2 (VAR_10,VAR_11,VAR_12, VAR_9->type);
    VAR_14->spawnpoint = VAR_9->spawnpoint;
    VAR_14->angle = VAR_0 * (VAR_15->angle/45);

    if (VAR_15->options & VAR_4)
 VAR_14->flags |= VAR_2;

    VAR_14->reactiontime = 18;


    FUNC_1 (VAR_9);
}
