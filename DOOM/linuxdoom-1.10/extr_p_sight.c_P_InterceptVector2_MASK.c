
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ fixed_t ;
struct TYPE_4__ {int dy; int dx; int x; int y; } ;
typedef TYPE_1__ divline_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;

fixed_t
FUNC_2
( divline_t* VAR_0,
  divline_t* VAR_1 )
{
    fixed_t VAR_2;
    fixed_t VAR_3;
    fixed_t VAR_4;

    VAR_4 = FUNC_1 (VAR_1->dy>>8,VAR_0->dx) - FUNC_1(VAR_1->dx>>8,VAR_0->dy);

    if (VAR_4 == 0)
 return 0;


    VAR_3 = FUNC_1 ( (VAR_1->x - VAR_0->x)>>8 ,VAR_1->dy) +
 FUNC_1 ( (VAR_0->y - VAR_1->y)>>8 , VAR_1->dx);
    VAR_2 = FUNC_0 (VAR_3 , VAR_4);

    return VAR_2;
}
