
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ fixed_t ;
struct TYPE_3__ {scalar_t__ dx; scalar_t__ x; scalar_t__ dy; scalar_t__ y; } ;
typedef TYPE_1__ divline_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;

int
FUNC_1
( fixed_t VAR_0,
  fixed_t VAR_1,
  divline_t* VAR_2 )
{
    fixed_t VAR_3;
    fixed_t VAR_4;
    fixed_t VAR_5;
    fixed_t VAR_6;

    if (!VAR_2->dx)
    {
 if (VAR_0 <= VAR_2->x)
     return VAR_2->dy > 0;

 return VAR_2->dy < 0;
    }
    if (!VAR_2->dy)
    {
 if (VAR_1 <= VAR_2->y)
     return VAR_2->dx < 0;

 return VAR_2->dx > 0;
    }

    VAR_3 = (VAR_0 - VAR_2->x);
    VAR_4 = (VAR_1 - VAR_2->y);


    if ( (VAR_2->dy ^ VAR_2->dx ^ VAR_3 ^ VAR_4)&0x80000000 )
    {
 if ( (VAR_2->dy ^ VAR_3) & 0x80000000 )
     return 1;
 return 0;
    }

    VAR_5 = FUNC_0 ( VAR_2->dy>>8, VAR_3>>8 );
    VAR_6 = FUNC_0 ( VAR_4>>8 , VAR_2->dx>>8 );

    if (VAR_6 < VAR_5)
 return 0;
    return 1;
}
