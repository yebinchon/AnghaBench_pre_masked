
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float,int*) ;
 float FUNC_1 (float,float) ;

void FUNC_2(unsigned char *VAR_0, float *VAR_1)
{
   int VAR_2;
   float VAR_3 = FUNC_1(VAR_1[0], FUNC_1(VAR_1[1], VAR_1[2]));

   if (VAR_3 < 1e-32f) {
      VAR_0[0] = VAR_0[1] = VAR_0[2] = VAR_0[3] = 0;
   } else {
      float VAR_4 = (float) FUNC_0(VAR_3, &VAR_2) * 256.0f/VAR_3;

      VAR_0[0] = (unsigned char)(VAR_1[0] * VAR_4);
      VAR_0[1] = (unsigned char)(VAR_1[1] * VAR_4);
      VAR_0[2] = (unsigned char)(VAR_1[2] * VAR_4);
      VAR_0[3] = (unsigned char)(VAR_2 + 128);
   }
}
