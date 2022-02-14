
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t angle; int momz; int z; int height; scalar_t__ y; scalar_t__ x; void* momy; void* momx; TYPE_1__* info; int flags; struct TYPE_7__* target; } ;
typedef TYPE_2__ mobj_t ;
typedef size_t angle_t ;
struct TYPE_6__ {int attacksound; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;

void FUNC_4 (mobj_t* VAR_5)
{
    mobj_t* VAR_6;
    angle_t VAR_7;
    int VAR_8;

    if (!VAR_5->target)
 return;

    VAR_6 = VAR_5->target;
    VAR_5->flags |= VAR_1;

    FUNC_3 (VAR_5, VAR_5->info->attacksound);
    FUNC_0 (VAR_5);
    VAR_7 = VAR_5->angle >> VAR_0;
    VAR_5->momx = FUNC_1 (VAR_2, VAR_3[VAR_7]);
    VAR_5->momy = FUNC_1 (VAR_2, VAR_4[VAR_7]);
    VAR_8 = FUNC_2 (VAR_6->x - VAR_5->x, VAR_6->y - VAR_5->y);
    VAR_8 = VAR_8 / VAR_2;

    if (VAR_8 < 1)
 VAR_8 = 1;
    VAR_5->momz = (VAR_6->z+(VAR_6->height>>1) - VAR_5->z) / VAR_8;
}
