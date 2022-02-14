
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mobjtype_t ;
struct TYPE_9__ {int angle; TYPE_1__* info; void* momz; void* momy; void* momx; struct TYPE_9__* target; scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ mobj_t ;
typedef scalar_t__ fixed_t ;
typedef int angle_t ;
struct TYPE_8__ {int speed; scalar_t__ seesound; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;

void
FUNC_5
( mobj_t* VAR_5,
  mobjtype_t VAR_6 )
{
    mobj_t* VAR_7;
    angle_t VAR_8;

    fixed_t VAR_9;
    fixed_t VAR_10;
    fixed_t VAR_11;
    fixed_t VAR_12;


    VAR_8 = VAR_5->angle;
    VAR_12 = FUNC_1 (VAR_5, VAR_8, 16*64*VAR_1);

    if (!VAR_4)
    {
 VAR_8 += 1<<26;
 VAR_12 = FUNC_1 (VAR_5, VAR_8, 16*64*VAR_1);

 if (!VAR_4)
 {
     VAR_8 -= 2<<26;
     VAR_12 = FUNC_1 (VAR_5, VAR_8, 16*64*VAR_1);
 }

 if (!VAR_4)
 {
     VAR_8 = VAR_5->angle;
     VAR_12 = 0;
 }
    }

    VAR_9 = VAR_5->x;
    VAR_10 = VAR_5->y;
    VAR_11 = VAR_5->z + 4*8*VAR_1;

    VAR_7 = FUNC_3 (VAR_9,VAR_10,VAR_11, VAR_6);

    if (VAR_7->info->seesound)
 FUNC_4 (VAR_7, VAR_7->info->seesound);

    VAR_7->target = VAR_5;
    VAR_7->angle = VAR_8;
    VAR_7->momx = FUNC_0( VAR_7->info->speed,
    VAR_2[VAR_8>>VAR_0]);
    VAR_7->momy = FUNC_0( VAR_7->info->speed,
    VAR_3[VAR_8>>VAR_0]);
    VAR_7->momz = FUNC_0( VAR_7->info->speed, VAR_12);

    FUNC_2 (VAR_7);
}
