
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float,float) ;

__attribute__((used)) static void FUNC_1(float VAR_0, float VAR_1, float VAR_2, float *VAR_3) {
   if (VAR_1 == 0)
      VAR_3[0] = VAR_3[1] = VAR_3[2] = VAR_2;
   else
   {
      float VAR_4, VAR_5;

      VAR_5 = (VAR_2 < 0.5) ? (VAR_2 * (1 + VAR_1)) : ((VAR_2 + VAR_1) - (VAR_2 * VAR_1));
      VAR_4 = 2 * VAR_2 - VAR_5;

      VAR_3[0] = FUNC_0(VAR_4, VAR_5, VAR_0 + (1.0f / 3));
      VAR_3[1] = FUNC_0(VAR_4, VAR_5, VAR_0);
      VAR_3[2] = FUNC_0(VAR_4, VAR_5, VAR_0 - (1.0f / 3));
   }
}
