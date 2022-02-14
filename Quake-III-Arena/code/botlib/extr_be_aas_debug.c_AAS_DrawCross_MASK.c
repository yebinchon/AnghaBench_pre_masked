
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (float*,float*) ;

void FUNC_2(vec3_t VAR_0, float VAR_1, int VAR_2)
{
 int VAR_3;
 vec3_t VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
 {
  FUNC_1(VAR_0, VAR_4);
  VAR_4[VAR_3] += VAR_1;
  FUNC_1(VAR_0, VAR_5);
  VAR_5[VAR_3] -= VAR_1;
  FUNC_0(VAR_4, VAR_5, VAR_2);
 }
}
