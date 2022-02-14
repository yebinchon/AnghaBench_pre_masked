
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ acp1; } ;
struct TYPE_18__ {TYPE_1__ function; struct TYPE_18__* next; } ;
typedef TYPE_4__ thinker_t ;
struct TYPE_19__ {int tag; } ;
typedef TYPE_5__ sector_t ;
struct TYPE_20__ {int flags; scalar_t__ type; unsigned int angle; int reactiontime; scalar_t__ momz; scalar_t__ momy; scalar_t__ momx; TYPE_3__* player; scalar_t__ z; scalar_t__ y; scalar_t__ x; scalar_t__ floorz; TYPE_2__* subsector; } ;
typedef TYPE_6__ mobj_t ;
struct TYPE_21__ {int tag; } ;
typedef TYPE_7__ line_t ;
typedef scalar_t__ fixed_t ;
typedef scalar_t__ actionf_p1 ;
struct TYPE_17__ {scalar_t__ viewheight; scalar_t__ viewz; } ;
struct TYPE_16__ {TYPE_5__* sector; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_6__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;

int
FUNC_3
( line_t* VAR_11,
  int VAR_12,
  mobj_t* VAR_13 )
{
    int VAR_14;
    int VAR_15;
    mobj_t* VAR_16;
    mobj_t* VAR_17;
    unsigned VAR_18;
    thinker_t* VAR_19;
    sector_t* VAR_20;
    fixed_t VAR_21;
    fixed_t VAR_22;
    fixed_t VAR_23;


    if (VAR_13->flags & VAR_1)
 return 0;



    if (VAR_12 == 1)
 return 0;


    VAR_15 = VAR_11->tag;
    for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
    {
 if (VAR_8[ VAR_14 ].tag == VAR_15 )
 {
     VAR_19 = VAR_10.next;
     for (VAR_19 = VAR_10.next;
   VAR_19 != &VAR_10;
   VAR_19 = VAR_19->next)
     {

  if (VAR_19->function.acp1 != (actionf_p1)VAR_4)
      continue;

  VAR_16 = (mobj_t *)VAR_19;


  if (VAR_16->type != VAR_2 )
      continue;

  VAR_20 = VAR_16->subsector->sector;

  if (VAR_20-VAR_8 != VAR_14 )
      continue;

  VAR_21 = VAR_13->x;
  VAR_22 = VAR_13->y;
  VAR_23 = VAR_13->z;

  if (!FUNC_1 (VAR_13, VAR_16->x, VAR_16->y))
      return 0;

  VAR_13->z = VAR_13->floorz;
  if (VAR_13->player)
      VAR_13->player->viewz = VAR_13->z+VAR_13->player->viewheight;


  VAR_17 = FUNC_0 (VAR_21, VAR_22, VAR_23, VAR_3);
  FUNC_2 (VAR_17, VAR_9);
  VAR_18 = VAR_16->angle >> VAR_0;
  VAR_17 = FUNC_0 (VAR_16->x+20*VAR_5[VAR_18], VAR_16->y+20*VAR_6[VAR_18]
       , VAR_13->z, VAR_3);


  FUNC_2 (VAR_17, VAR_9);


  if (VAR_13->player)
      VAR_13->reactiontime = 18;

  VAR_13->angle = VAR_16->angle;
  VAR_13->momx = VAR_13->momy = VAR_13->momz = 0;
  return 1;
     }
 }
    }
    return 0;
}
