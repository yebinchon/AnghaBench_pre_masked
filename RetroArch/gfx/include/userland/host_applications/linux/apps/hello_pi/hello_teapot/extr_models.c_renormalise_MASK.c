
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, int VAR_1)
{
   int VAR_2;
   float *VAR_3 = VAR_0;
   for (VAR_2=0;VAR_2<VAR_1; VAR_2++) {
      float VAR_4 = VAR_3[0];
      float VAR_5 = VAR_3[1];
      float VAR_6 = VAR_3[2];
      float VAR_7 = 1.0f/FUNC_0(VAR_4*VAR_4 + VAR_5*VAR_5 + VAR_6*VAR_6);
      *VAR_3++ = VAR_4 * VAR_7;
      *VAR_3++ = VAR_5 * VAR_7;
      *VAR_3++ = VAR_6 * VAR_7;
   }
}
