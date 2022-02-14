
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int z; } ;
typedef TYPE_1__ guVector ;
typedef int f32 ;


 int FUNC_0 (int) ;

void FUNC_1(guVector *VAR_0)
{
 f32 VAR_1;

 VAR_1 = ((VAR_0->x)*(VAR_0->x)) + ((VAR_0->y)*(VAR_0->y)) + ((VAR_0->z)*(VAR_0->z));
 VAR_1 = 1/FUNC_0(VAR_1);
 VAR_0->x *= VAR_1;
 VAR_0->y *= VAR_1;
 VAR_0->z *= VAR_1;
}
