
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t angle; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ mobj_t ;
typedef int fixed_t ;
typedef size_t angle_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_3
( mobj_t* VAR_9,
  mobj_t* VAR_10,
  int* VAR_11,
  int* VAR_12,
  int* VAR_13 )
{
    fixed_t VAR_14;
    fixed_t VAR_15;
    fixed_t VAR_16;
    angle_t VAR_17;



    VAR_15 = FUNC_2(VAR_9->x - VAR_10->x);
    VAR_16 = FUNC_2(VAR_9->y - VAR_10->y);


    VAR_14 = VAR_15 + VAR_16 - ((VAR_15 < VAR_16 ? VAR_15 : VAR_16)>>1);

    if (VAR_7 != 8
 && VAR_14 > VAR_3)
    {
 return 0;
    }


    VAR_17 = FUNC_1(VAR_9->x,
       VAR_9->y,
       VAR_10->x,
       VAR_10->y);

    if (VAR_17 > VAR_9->angle)
 VAR_17 = VAR_17 - VAR_9->angle;
    else
 VAR_17 = VAR_17 + (0xffffffff - VAR_9->angle);

    VAR_17 >>= VAR_0;


    *VAR_12 = 128 - (FUNC_0(VAR_5,VAR_6[VAR_17])>>VAR_1);


    if (VAR_14 < VAR_4)
    {
 *VAR_11 = VAR_8;
    }
    else if (VAR_7 == 8)
    {
 if (VAR_14 > VAR_3)
     VAR_14 = VAR_3;

 *VAR_11 = 15+ ((VAR_8-15)
      *((VAR_3 - VAR_14)>>VAR_1))
     / VAR_2;
    }
    else
    {

 *VAR_11 = (VAR_8
  * ((VAR_3 - VAR_14)>>VAR_1))
     / VAR_2;
    }

    return (*VAR_11 > 0);
}
