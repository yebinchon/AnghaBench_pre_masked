
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;
typedef int clipHandle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,double*,double*) ;
 float FUNC_2 (double*,double*) ;
 int FUNC_3 (double*) ;
 int FUNC_4 (double*,double*) ;

void FUNC_5(int VAR_0, vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4)
{
 clipHandle_t VAR_5;
 vec3_t VAR_6, VAR_7;
 float VAR_8;
 int VAR_9;

 VAR_5 = FUNC_0(VAR_0);
 FUNC_1(VAR_5, VAR_6, VAR_7);

 if ((VAR_1[0] || VAR_1[1] || VAR_1[2]))
 {

  VAR_8 = FUNC_2(VAR_6, VAR_7);
  for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  {
   VAR_6[VAR_9] = (VAR_6[VAR_9] + VAR_7[VAR_9]) * 0.5 - VAR_8;
   VAR_7[VAR_9] = (VAR_6[VAR_9] + VAR_7[VAR_9]) * 0.5 + VAR_8;
  }
 }
 if (VAR_2) FUNC_4(VAR_6, VAR_2);
 if (VAR_3) FUNC_4(VAR_7, VAR_3);
 if (VAR_4) FUNC_3(VAR_4);
}
