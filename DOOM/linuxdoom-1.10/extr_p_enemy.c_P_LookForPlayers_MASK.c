
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sector_t ;
struct TYPE_9__ {scalar_t__ health; TYPE_7__* mo; } ;
typedef TYPE_2__ player_t ;
struct TYPE_10__ {int lastlook; scalar_t__ angle; TYPE_7__* target; scalar_t__ y; scalar_t__ x; TYPE_1__* subsector; } ;
typedef TYPE_3__ mobj_t ;
typedef scalar_t__ fixed_t ;
typedef int boolean ;
typedef scalar_t__ angle_t ;
struct TYPE_11__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {int * sector; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,TYPE_7__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int * VAR_3 ;
 TYPE_2__* VAR_4 ;

boolean
FUNC_3
( mobj_t* VAR_5,
  boolean VAR_6 )
{
    int VAR_7;
    int VAR_8;
    player_t* VAR_9;
    sector_t* VAR_10;
    angle_t VAR_11;
    fixed_t VAR_12;

    VAR_10 = VAR_5->subsector->sector;

    VAR_7 = 0;
    VAR_8 = (VAR_5->lastlook-1)&3;

    for ( ; ; VAR_5->lastlook = (VAR_5->lastlook+1)&3 )
    {
 if (!VAR_3[VAR_5->lastlook])
     continue;

 if (VAR_7++ == 2
     || VAR_5->lastlook == VAR_8)
 {

     return 0;
 }

 VAR_9 = &VAR_4[VAR_5->lastlook];

 if (VAR_9->health <= 0)
     continue;

 if (!FUNC_1 (VAR_5, VAR_9->mo))
     continue;

 if (!VAR_6)
 {
     VAR_11 = FUNC_2 (VAR_5->x,
      VAR_5->y,
      VAR_9->mo->x,
      VAR_9->mo->y)
  - VAR_5->angle;

     if (VAR_11 > VAR_1 && VAR_11 < VAR_0)
     {
  VAR_12 = FUNC_0 (VAR_9->mo->x - VAR_5->x,
     VAR_9->mo->y - VAR_5->y);

  if (VAR_12 > VAR_2)
      continue;
     }
 }

 VAR_5->target = VAR_9->mo;
 return 1;
    }

    return 0;
}
