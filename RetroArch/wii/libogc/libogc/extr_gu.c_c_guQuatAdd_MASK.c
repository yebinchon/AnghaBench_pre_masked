
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ w; scalar_t__ x; scalar_t__ z; scalar_t__ y; } ;
typedef TYPE_1__ guQuaternion ;



void FUNC_0(guQuaternion *VAR_0,guQuaternion *VAR_1,guQuaternion *VAR_2)
{
 VAR_2->x = VAR_0->x + VAR_1->x;
 VAR_2->y = VAR_0->x + VAR_1->y;
 VAR_2->z = VAR_0->x + VAR_1->z;
 VAR_2->w = VAR_0->x + VAR_1->w;
}
