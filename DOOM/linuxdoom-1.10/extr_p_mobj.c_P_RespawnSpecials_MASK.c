
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* sector; } ;
typedef TYPE_2__ subsector_t ;
struct TYPE_13__ {int x; int y; scalar_t__ type; int angle; } ;
struct TYPE_12__ {int angle; TYPE_4__ spawnpoint; } ;
typedef TYPE_3__ mobj_t ;
typedef TYPE_4__ mapthing_t ;
typedef int fixed_t ;
struct TYPE_14__ {scalar_t__ doomednum; int flags; } ;
struct TYPE_10__ {int floorheight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (int,int,int,int) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 TYPE_4__* VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 TYPE_5__* VAR_14 ;
 int VAR_15 ;

void FUNC_3 (void)
{
    fixed_t VAR_16;
    fixed_t VAR_17;
    fixed_t VAR_18;

    subsector_t* VAR_19;
    mobj_t* VAR_20;
    mapthing_t* VAR_21;

    int VAR_22;


    if (VAR_8 != 2)
 return;


    if (VAR_9 == VAR_10)
 return;


    if (VAR_13 - VAR_12[VAR_10] < 30*35)
 return;

    VAR_21 = &VAR_11[VAR_10];

    VAR_16 = VAR_21->x << VAR_1;
    VAR_17 = VAR_21->y << VAR_1;


    VAR_19 = FUNC_1 (VAR_16,VAR_17);
    VAR_20 = FUNC_0 (VAR_16, VAR_17, VAR_19->sector->floorheight , VAR_4);
    FUNC_2 (VAR_20, VAR_15);


    for (VAR_22=0 ; VAR_22< VAR_5 ; VAR_22++)
    {
 if (VAR_21->type == VAR_14[VAR_22].doomednum)
     break;
    }


    if (VAR_14[VAR_22].flags & VAR_3)
 VAR_18 = VAR_6;
    else
 VAR_18 = VAR_7;

    VAR_20 = FUNC_0 (VAR_16,VAR_17,VAR_18, VAR_22);
    VAR_20->spawnpoint = *VAR_21;
    VAR_20->angle = VAR_0 * (VAR_21->angle/45);


    VAR_10 = (VAR_10+1)&(VAR_2-1);
}
