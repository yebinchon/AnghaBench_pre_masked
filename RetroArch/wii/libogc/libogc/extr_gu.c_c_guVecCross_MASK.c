
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; int z; } ;
typedef TYPE_1__ guVector ;



void FUNC_0(guVector *VAR_0,guVector *VAR_1,guVector *VAR_2)
{
 guVector VAR_3;

 VAR_3.x = (VAR_0->y*VAR_1->z)-(VAR_0->z*VAR_1->y);
 VAR_3.y = (VAR_0->z*VAR_1->x)-(VAR_0->x*VAR_1->z);
 VAR_3.z = (VAR_0->x*VAR_1->y)-(VAR_0->y*VAR_1->x);

 VAR_2->x = VAR_3.x;
 VAR_2->y = VAR_3.y;
 VAR_2->z = VAR_3.z;
}
