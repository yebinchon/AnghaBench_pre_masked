
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float** m; } ;
typedef TYPE_1__ VG_MAT3X3_T ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (float,float) ;
 scalar_t__ FUNC_1 (float) ;
 float FUNC_2 (float,float) ;
 float FUNC_3 (float) ;

void FUNC_4(const VG_MAT3X3_T *VAR_1,
   float *VAR_2, float *VAR_3, float *VAR_4)
{
   float VAR_5 = (VAR_1->m[0][0] * VAR_1->m[0][0]) + (VAR_1->m[0][1] * VAR_1->m[0][1]);
   float VAR_6 = (VAR_1->m[0][0] * VAR_1->m[1][0]) + (VAR_1->m[0][1] * VAR_1->m[1][1]);

   float VAR_7 = (VAR_1->m[1][0] * VAR_1->m[1][0]) + (VAR_1->m[1][1] * VAR_1->m[1][1]);

   float VAR_8 = VAR_5 + VAR_7;
   float VAR_9 = VAR_5 - VAR_7;
   float VAR_10 = FUNC_3((VAR_9 * VAR_9) + (4.0f * VAR_6 * VAR_6));
   float VAR_11 = (VAR_8 + VAR_10) * 0.5f;
   if (VAR_3) {
      *VAR_3 = FUNC_3(VAR_11);
   }
   if (VAR_4) {
      *VAR_4 = FUNC_3(

         FUNC_0(VAR_8 - VAR_10, 0.0f) * 0.5f);
   }





   if (VAR_2) {

      float VAR_12 = (VAR_11 - VAR_7) + VAR_6;
      float VAR_13 = (VAR_11 - VAR_5) + VAR_6;
      *VAR_2 = ((FUNC_1(VAR_12) < VAR_0) && (FUNC_1(VAR_13) < VAR_0)) ? 0.0f : FUNC_2(VAR_13, VAR_12);
   }
}
