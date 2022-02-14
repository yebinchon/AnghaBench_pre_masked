
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dx; scalar_t__ x; scalar_t__ dy; scalar_t__ y; } ;
typedef TYPE_1__ node_t ;
typedef scalar_t__ fixed_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

int
FUNC_1
( fixed_t VAR_1,
  fixed_t VAR_2,
  node_t* VAR_3 )
{
    fixed_t VAR_4;
    fixed_t VAR_5;
    fixed_t VAR_6;
    fixed_t VAR_7;

    if (!VAR_3->dx)
    {
 if (VAR_1 <= VAR_3->x)
     return VAR_3->dy > 0;

 return VAR_3->dy < 0;
    }
    if (!VAR_3->dy)
    {
 if (VAR_2 <= VAR_3->y)
     return VAR_3->dx < 0;

 return VAR_3->dx > 0;
    }

    VAR_4 = (VAR_1 - VAR_3->x);
    VAR_5 = (VAR_2 - VAR_3->y);


    if ( (VAR_3->dy ^ VAR_3->dx ^ VAR_4 ^ VAR_5)&0x80000000 )
    {
 if ( (VAR_3->dy ^ VAR_4) & 0x80000000 )
 {

     return 1;
 }
 return 0;
    }

    VAR_6 = FUNC_0 ( VAR_3->dy>>VAR_0 , VAR_4 );
    VAR_7 = FUNC_0 ( VAR_5 , VAR_3->dx>>VAR_0 );

    if (VAR_7 < VAR_6)
    {

 return 0;
    }

    return 1;
}
