
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float** m; } ;
typedef TYPE_1__ VG_MAT3X3_T ;



float FUNC_0(const VG_MAT3X3_T *VAR_0)
{
   return (VAR_0->m[0][0] * ((VAR_0->m[2][2] * VAR_0->m[1][1]) - (VAR_0->m[2][1] * VAR_0->m[1][2]))) +
          (VAR_0->m[1][0] * ((VAR_0->m[0][2] * VAR_0->m[2][1]) - (VAR_0->m[0][1] * VAR_0->m[2][2]))) +
          (VAR_0->m[2][0] * ((VAR_0->m[1][2] * VAR_0->m[0][1]) - (VAR_0->m[1][1] * VAR_0->m[0][2])));
}
