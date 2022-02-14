
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float** m; } ;
typedef TYPE_1__ VG_MAT3X3_T ;


 float FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(VG_MAT3X3_T *VAR_0)
{
   float VAR_1;
   VG_MAT3X3_T VAR_2;

   FUNC_1(FUNC_3(VAR_0));

   VAR_1 = FUNC_0(FUNC_2(VAR_0));

   VAR_2.m[0][0] = ((VAR_0->m[2][2] * VAR_0->m[1][1]) - (VAR_0->m[2][1] * VAR_0->m[1][2])) * VAR_1;
   VAR_2.m[0][1] = ((VAR_0->m[0][2] * VAR_0->m[2][1]) - (VAR_0->m[0][1] * VAR_0->m[2][2])) * VAR_1;
   VAR_2.m[0][2] = ((VAR_0->m[1][2] * VAR_0->m[0][1]) - (VAR_0->m[1][1] * VAR_0->m[0][2])) * VAR_1;

   VAR_2.m[1][0] = ((VAR_0->m[2][0] * VAR_0->m[1][2]) - (VAR_0->m[2][2] * VAR_0->m[1][0])) * VAR_1;
   VAR_2.m[1][1] = ((VAR_0->m[0][0] * VAR_0->m[2][2]) - (VAR_0->m[0][2] * VAR_0->m[2][0])) * VAR_1;
   VAR_2.m[1][2] = ((VAR_0->m[1][0] * VAR_0->m[0][2]) - (VAR_0->m[1][2] * VAR_0->m[0][0])) * VAR_1;

   VAR_2.m[2][0] = ((VAR_0->m[2][1] * VAR_0->m[1][0]) - (VAR_0->m[2][0] * VAR_0->m[1][1])) * VAR_1;
   VAR_2.m[2][1] = ((VAR_0->m[0][1] * VAR_0->m[2][0]) - (VAR_0->m[0][0] * VAR_0->m[2][1])) * VAR_1;
   VAR_2.m[2][2] = ((VAR_0->m[1][1] * VAR_0->m[0][0]) - (VAR_0->m[1][0] * VAR_0->m[0][1])) * VAR_1;

   *VAR_0 = VAR_2;
}
