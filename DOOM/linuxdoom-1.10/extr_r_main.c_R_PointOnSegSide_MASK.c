
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* v2; TYPE_1__* v1; } ;
typedef TYPE_3__ seg_t ;
typedef scalar_t__ fixed_t ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_5__ {scalar_t__ x; scalar_t__ y; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

int
FUNC_1
( fixed_t VAR_1,
  fixed_t VAR_2,
  seg_t* VAR_3 )
{
    fixed_t VAR_4;
    fixed_t VAR_5;
    fixed_t VAR_6;
    fixed_t VAR_7;
    fixed_t VAR_8;
    fixed_t VAR_9;
    fixed_t VAR_10;
    fixed_t VAR_11;

    VAR_4 = VAR_3->v1->x;
    VAR_5 = VAR_3->v1->y;

    VAR_6 = VAR_3->v2->x - VAR_4;
    VAR_7 = VAR_3->v2->y - VAR_5;

    if (!VAR_6)
    {
 if (VAR_1 <= VAR_4)
     return VAR_7 > 0;

 return VAR_7 < 0;
    }
    if (!VAR_7)
    {
 if (VAR_2 <= VAR_5)
     return VAR_6 < 0;

 return VAR_6 > 0;
    }

    VAR_8 = (VAR_1 - VAR_4);
    VAR_9 = (VAR_2 - VAR_5);


    if ( (VAR_7 ^ VAR_6 ^ VAR_8 ^ VAR_9)&0x80000000 )
    {
 if ( (VAR_7 ^ VAR_8) & 0x80000000 )
 {

     return 1;
 }
 return 0;
    }

    VAR_10 = FUNC_0 ( VAR_7>>VAR_0 , VAR_8 );
    VAR_11 = FUNC_0 ( VAR_9 , VAR_6>>VAR_0 );

    if (VAR_11 < VAR_10)
    {

 return 0;
    }

    return 1;
}
