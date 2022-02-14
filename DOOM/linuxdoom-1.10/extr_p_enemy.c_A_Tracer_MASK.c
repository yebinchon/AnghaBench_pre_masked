
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int z; int momz; int tics; scalar_t__ health; size_t angle; TYPE_1__* info; void* y; void* x; void* momy; void* momx; struct TYPE_6__* tracer; } ;
typedef TYPE_2__ mobj_t ;
typedef int fixed_t ;
typedef size_t angle_t ;
struct TYPE_5__ {int speed; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (void*,void*,int,int ) ;
 int FUNC_4 (void*,void*,int) ;
 size_t FUNC_5 (void*,void*,void*,void*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;

void FUNC_6 (mobj_t* VAR_7)
{
    angle_t VAR_8;
    fixed_t VAR_9;
    fixed_t VAR_10;
    mobj_t* VAR_11;
    mobj_t* VAR_12;

    if (VAR_6 & 3)
 return;


    FUNC_4 (VAR_7->x, VAR_7->y, VAR_7->z);

    VAR_12 = FUNC_3 (VAR_7->x-VAR_7->momx,
        VAR_7->y-VAR_7->momy,
        VAR_7->z, VAR_2);

    VAR_12->momz = VAR_1;
    VAR_12->tics -= FUNC_2()&3;
    if (VAR_12->tics < 1)
 VAR_12->tics = 1;


    VAR_11 = VAR_7->tracer;

    if (!VAR_11 || VAR_11->health <= 0)
 return;


    VAR_8 = FUNC_5 (VAR_7->x,
        VAR_7->y,
        VAR_11->x,
        VAR_11->y);

    if (VAR_8 != VAR_7->angle)
    {
 if (VAR_8 - VAR_7->angle > 0x80000000)
 {
     VAR_7->angle -= VAR_3;
     if (VAR_8 - VAR_7->angle < 0x80000000)
  VAR_7->angle = VAR_8;
 }
 else
 {
     VAR_7->angle += VAR_3;
     if (VAR_8 - VAR_7->angle > 0x80000000)
  VAR_7->angle = VAR_8;
 }
    }

    VAR_8 = VAR_7->angle>>VAR_0;
    VAR_7->momx = FUNC_0 (VAR_7->info->speed, VAR_4[VAR_8]);
    VAR_7->momy = FUNC_0 (VAR_7->info->speed, VAR_5[VAR_8]);


    VAR_9 = FUNC_1 (VAR_11->x - VAR_7->x,
       VAR_11->y - VAR_7->y);

    VAR_9 = VAR_9 / VAR_7->info->speed;

    if (VAR_9 < 1)
 VAR_9 = 1;
    VAR_10 = (VAR_11->z+40*VAR_1 - VAR_7->z) / VAR_9;

    if (VAR_10 < VAR_7->momz)
 VAR_7->momz -= VAR_1/8;
    else
 VAR_7->momz += VAR_1/8;
}
