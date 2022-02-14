
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int** m; } ;
typedef TYPE_1__ VG_MAT3X3_T ;



void FUNC_0(VG_MAT3X3_T *VAR_0, const VG_MAT3X3_T *VAR_1, const VG_MAT3X3_T *VAR_2)
{
   uint32_t VAR_3, VAR_4;
   for (VAR_3 = 0; VAR_3 != 3; ++VAR_3) {
      for (VAR_4 = 0; VAR_4 != 3; ++VAR_4) {
         VAR_0->m[VAR_3][VAR_4] =
            (VAR_1->m[VAR_3][0] * VAR_2->m[0][VAR_4]) +
            (VAR_1->m[VAR_3][1] * VAR_2->m[1][VAR_4]) +
            (VAR_1->m[VAR_3][2] * VAR_2->m[2][VAR_4]);
      }
   }
}
