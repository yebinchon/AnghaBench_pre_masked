
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;


 scalar_t__ FUNC_0 (float,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, stbi_uc *VAR_1, int VAR_2)
{
   if ( VAR_1[3] != 0 ) {
      float VAR_3;

      VAR_3 = (float) FUNC_0(1.0f, VAR_1[3] - (int)(128 + 8));
      if (VAR_2 <= 2)
         VAR_0[0] = (VAR_1[0] + VAR_1[1] + VAR_1[2]) * VAR_3 / 3;
      else {
         VAR_0[0] = VAR_1[0] * VAR_3;
         VAR_0[1] = VAR_1[1] * VAR_3;
         VAR_0[2] = VAR_1[2] * VAR_3;
      }
      if (VAR_2 == 2) VAR_0[1] = 1;
      if (VAR_2 == 4) VAR_0[3] = 1;
   } else {
      switch (VAR_2) {
         case 4: VAR_0[3] = 1;
         case 3: VAR_0[0] = VAR_0[1] = VAR_0[2] = 0;
                 break;
         case 2: VAR_0[1] = 1;
         case 1: VAR_0[0] = 0;
                 break;
      }
   }
}
