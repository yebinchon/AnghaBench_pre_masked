
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ forwardmove; scalar_t__ sidemove; } ;
struct TYPE_20__ {int cheats; TYPE_7__* mo; TYPE_5__ cmd; } ;
typedef TYPE_6__ player_t ;
struct TYPE_21__ {int momx; int momy; int flags; int momz; int x; int y; scalar_t__ z; scalar_t__ floorz; scalar_t__ state; TYPE_4__* subsector; TYPE_6__* player; TYPE_1__* info; } ;
typedef TYPE_7__ mobj_t ;
typedef int fixed_t ;
struct TYPE_22__ {TYPE_2__* backsector; } ;
struct TYPE_18__ {TYPE_3__* sector; } ;
struct TYPE_17__ {scalar_t__ floorheight; } ;
struct TYPE_16__ {scalar_t__ ceilingpic; } ;
struct TYPE_15__ {int spawnstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_8__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

void FUNC_6 (mobj_t* VAR_13)
{
    fixed_t VAR_14;
    fixed_t VAR_15;
    player_t* VAR_16;
    fixed_t VAR_17;
    fixed_t VAR_18;

    if (!VAR_13->momx && !VAR_13->momy)
    {
 if (VAR_13->flags & VAR_6)
 {

     VAR_13->flags &= ~VAR_6;
     VAR_13->momx = VAR_13->momy = VAR_13->momz = 0;

     FUNC_3 (VAR_13, VAR_13->info->spawnstate);
 }
 return;
    }

    VAR_16 = VAR_13->player;

    if (VAR_13->momx > VAR_3)
 VAR_13->momx = VAR_3;
    else if (VAR_13->momx < -VAR_3)
 VAR_13->momx = -VAR_3;

    if (VAR_13->momy > VAR_3)
 VAR_13->momy = VAR_3;
    else if (VAR_13->momy < -VAR_3)
 VAR_13->momy = -VAR_3;

    VAR_17 = VAR_13->momx;
    VAR_18 = VAR_13->momy;

    do
    {
 if (VAR_17 > VAR_3/2 || VAR_18 > VAR_3/2)
 {
     VAR_14 = VAR_13->x + VAR_17/2;
     VAR_15 = VAR_13->y + VAR_18/2;
     VAR_17 >>= 1;
     VAR_18 >>= 1;
 }
 else
 {
     VAR_14 = VAR_13->x + VAR_17;
     VAR_15 = VAR_13->y + VAR_18;
     VAR_17 = VAR_18 = 0;
 }

 if (!FUNC_5 (VAR_13, VAR_14, VAR_15))
 {

     if (VAR_13->player)
     {
  FUNC_4 (VAR_13);
     }
     else if (VAR_13->flags & VAR_5)
     {

  if (VAR_10 &&
      VAR_10->backsector &&
      VAR_10->backsector->ceilingpic == VAR_11)
  {



      FUNC_2 (VAR_13);
      return;
  }
  FUNC_1 (VAR_13);
     }
     else
  VAR_13->momx = VAR_13->momy = 0;
 }
    } while (VAR_17 || VAR_18);


    if (VAR_16 && VAR_16->cheats & VAR_0)
    {

 VAR_13->momx = VAR_13->momy = 0;
 return;
    }

    if (VAR_13->flags & (VAR_5 | VAR_6) )
 return;

    if (VAR_13->z > VAR_13->floorz)
 return;

    if (VAR_13->flags & VAR_4)
    {


 if (VAR_13->momx > VAR_1/4
     || VAR_13->momx < -VAR_1/4
     || VAR_13->momy > VAR_1/4
     || VAR_13->momy < -VAR_1/4)
 {
     if (VAR_13->floorz != VAR_13->subsector->sector->floorheight)
  return;
 }
    }

    if (VAR_13->momx > -VAR_7
 && VAR_13->momx < VAR_7
 && VAR_13->momy > -VAR_7
 && VAR_13->momy < VAR_7
 && (!VAR_16
     || (VAR_16->cmd.forwardmove== 0
  && VAR_16->cmd.sidemove == 0 ) ) )
    {

 if ( VAR_16&&(unsigned)((VAR_16->mo->state - VAR_12)- VAR_9) < 4)
     FUNC_3 (VAR_16->mo, VAR_8);

 VAR_13->momx = 0;
 VAR_13->momy = 0;
    }
    else
    {
 VAR_13->momx = FUNC_0 (VAR_13->momx, VAR_2);
 VAR_13->momy = FUNC_0 (VAR_13->momy, VAR_2);
    }
}
