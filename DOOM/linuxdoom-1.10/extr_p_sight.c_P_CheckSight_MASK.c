
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* z; int height; scalar_t__ y; scalar_t__ x; TYPE_1__* subsector; } ;
typedef TYPE_2__ mobj_t ;
typedef int boolean ;
struct TYPE_8__ {scalar_t__ dy; scalar_t__ dx; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_6__ {int sector; } ;


 int FUNC_0 (scalar_t__) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 void* VAR_6 ;
 TYPE_3__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;

boolean
FUNC_1
( mobj_t* VAR_12,
  mobj_t* VAR_13 )
{
    int VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18;




    VAR_14 = (VAR_12->subsector->sector - VAR_4);
    VAR_15 = (VAR_13->subsector->sector - VAR_4);
    VAR_16 = VAR_14*VAR_2 + VAR_15;
    VAR_17 = VAR_16>>3;
    VAR_18 = 1 << (VAR_16&7);


    if (VAR_3[VAR_17]&VAR_18)
    {
 VAR_5[0]++;


 return 0;
    }



    VAR_5[1]++;

    VAR_11++;

    VAR_6 = VAR_12->z + VAR_12->height - (VAR_12->height>>2);
    VAR_10 = (VAR_13->z+VAR_13->height) - VAR_6;
    VAR_0 = (VAR_13->z) - VAR_6;

    VAR_7.x = VAR_12->x;
    VAR_7.y = VAR_12->y;
    VAR_8 = VAR_13->x;
    VAR_9 = VAR_13->y;
    VAR_7.dx = VAR_13->x - VAR_12->x;
    VAR_7.dy = VAR_13->y - VAR_12->y;


    return FUNC_0 (VAR_1-1);
}
