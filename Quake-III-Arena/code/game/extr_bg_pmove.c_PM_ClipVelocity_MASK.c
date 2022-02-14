
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 float FUNC_0 (float*,float*) ;

void FUNC_1( vec3_t VAR_0, vec3_t VAR_1, vec3_t VAR_2, float VAR_3 ) {
 float VAR_4;
 float VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0 (VAR_0, VAR_1);

 if ( VAR_4 < 0 ) {
  VAR_4 *= VAR_3;
 } else {
  VAR_4 /= VAR_3;
 }

 for ( VAR_6=0 ; VAR_6<3 ; VAR_6++ ) {
  VAR_5 = VAR_1[VAR_6]*VAR_4;
  VAR_2[VAR_6] = VAR_0[VAR_6] - VAR_5;
 }
}
