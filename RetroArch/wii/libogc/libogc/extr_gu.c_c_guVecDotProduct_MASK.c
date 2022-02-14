
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int z; } ;
typedef TYPE_1__ guVector ;
typedef int f32 ;



f32 FUNC_0(guVector *VAR_0,guVector *VAR_1)
{
    f32 VAR_2;

 VAR_2 = (VAR_0->x * VAR_1->x) + (VAR_0->y * VAR_1->y) + (VAR_0->z * VAR_1->z);

    return VAR_2;
}
