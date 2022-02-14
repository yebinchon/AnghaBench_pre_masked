
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ guVector ;



void FUNC_0(guVector *VAR_0,guVector *VAR_1,guVector *VAR_2)
{
    VAR_2->x = VAR_0->x - VAR_1->x;
    VAR_2->y = VAR_0->y - VAR_1->y;
    VAR_2->z = VAR_0->z - VAR_1->z;
}
