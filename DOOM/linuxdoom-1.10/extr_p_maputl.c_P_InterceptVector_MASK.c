
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef float fixed_t ;
struct TYPE_4__ {int dy; int dx; int x; int y; } ;
typedef TYPE_1__ divline_t ;


 float VAR_0 ;
 float FUNC_0 (float,float) ;
 float FUNC_1 (int,int) ;

fixed_t
FUNC_2
( divline_t* VAR_1,
  divline_t* VAR_2 )
{

    fixed_t VAR_3;
    fixed_t VAR_4;
    fixed_t VAR_5;

    VAR_5 = FUNC_1 (VAR_2->dy>>8,VAR_1->dx) - FUNC_1(VAR_2->dx>>8,VAR_1->dy);

    if (VAR_5 == 0)
 return 0;


    VAR_4 =
 FUNC_1 ( (VAR_2->x - VAR_1->x)>>8 ,VAR_2->dy )
 +FUNC_1 ( (VAR_1->y - VAR_2->y)>>8, VAR_2->dx );

    VAR_3 = FUNC_0 (VAR_4 , VAR_5);

    return VAR_3;
}
