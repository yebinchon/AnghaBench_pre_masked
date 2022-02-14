
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int height; scalar_t__ z; } ;
typedef TYPE_1__ mobj_t ;
typedef int fixed_t ;
typedef size_t angle_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int,int,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int * VAR_11 ;
 TYPE_1__* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;

fixed_t
FUNC_1
( mobj_t* VAR_15,
  angle_t VAR_16,
  fixed_t VAR_17 )
{
    fixed_t VAR_18;
    fixed_t VAR_19;

    VAR_16 >>= VAR_0;
    VAR_12 = VAR_15;

    VAR_18 = VAR_15->x + (VAR_17>>VAR_1)*VAR_9[VAR_16];
    VAR_19 = VAR_15->y + (VAR_17>>VAR_1)*VAR_10[VAR_16];
    VAR_13 = VAR_15->z + (VAR_15->height>>1) + 8*VAR_2;


    VAR_14 = 100*VAR_2/160;
    VAR_8 = -100*VAR_2/160;

    VAR_7 = VAR_17;
    VAR_11 = ((void*)0);

    FUNC_0 ( VAR_15->x, VAR_15->y,
       VAR_18, VAR_19,
       VAR_4|VAR_5,
       VAR_3 );

    if (VAR_11)
 return VAR_6;

    return 0;
}
