
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mobjtype_t ;
struct TYPE_10__ {int z; int flags; int angle; int momz; TYPE_1__* info; scalar_t__ y; scalar_t__ x; void* momy; void* momx; struct TYPE_10__* target; } ;
typedef TYPE_2__ mobj_t ;
typedef int angle_t ;
struct TYPE_9__ {int speed; scalar_t__ seesound; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (scalar_t__,scalar_t__,int,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int * VAR_3 ;
 int * VAR_4 ;

mobj_t*
FUNC_7
( mobj_t* VAR_5,
  mobj_t* VAR_6,
  mobjtype_t VAR_7 )
{
    mobj_t* VAR_8;
    angle_t VAR_9;
    int VAR_10;

    VAR_8 = FUNC_4 (VAR_5->x,
        VAR_5->y,
        VAR_5->z + 4*8*VAR_1, VAR_7);

    if (VAR_8->info->seesound)
 FUNC_6 (VAR_8, VAR_8->info->seesound);

    VAR_8->target = VAR_5;
    VAR_9 = FUNC_5 (VAR_5->x, VAR_5->y, VAR_6->x, VAR_6->y);


    if (VAR_6->flags & VAR_2)
 VAR_9 += (FUNC_3()-FUNC_3())<<20;

    VAR_8->angle = VAR_9;
    VAR_9 >>= VAR_0;
    VAR_8->momx = FUNC_0 (VAR_8->info->speed, VAR_3[VAR_9]);
    VAR_8->momy = FUNC_0 (VAR_8->info->speed, VAR_4[VAR_9]);

    VAR_10 = FUNC_1 (VAR_6->x - VAR_5->x, VAR_6->y - VAR_5->y);
    VAR_10 = VAR_10 / VAR_8->info->speed;

    if (VAR_10 < 1)
 VAR_10 = 1;

    VAR_8->momz = (VAR_6->z - VAR_5->z) / VAR_10;
    FUNC_2 (VAR_8);

    return VAR_8;
}
