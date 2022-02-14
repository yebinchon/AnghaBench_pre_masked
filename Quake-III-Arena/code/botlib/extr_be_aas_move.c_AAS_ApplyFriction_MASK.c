
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 float FUNC_0 (float) ;

void FUNC_1(vec3_t VAR_0, float VAR_1, float VAR_2,
             float VAR_3)
{
 float VAR_4, VAR_5, VAR_6;


 VAR_4 = FUNC_0(VAR_0[0] * VAR_0[0] + VAR_0[1] * VAR_0[1]);
 if (VAR_4)
 {
  VAR_5 = VAR_4 < VAR_2 ? VAR_2 : VAR_4;
  VAR_6 = VAR_4 - VAR_3 * VAR_5 * VAR_1;
  if (VAR_6 < 0) VAR_6 = 0;
  VAR_6 /= VAR_4;
  VAR_0[0] *= VAR_6;
  VAR_0[1] *= VAR_6;
 }
}
