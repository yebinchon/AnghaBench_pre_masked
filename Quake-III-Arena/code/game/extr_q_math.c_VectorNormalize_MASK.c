
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;


 float FUNC_0 (float) ;

vec_t FUNC_1( vec3_t VAR_0 ) {

 float VAR_1, VAR_2;

 VAR_1 = VAR_0[0]*VAR_0[0] + VAR_0[1]*VAR_0[1] + VAR_0[2]*VAR_0[2];
 VAR_1 = FUNC_0 (VAR_1);

 if ( VAR_1 ) {
  VAR_2 = 1/VAR_1;
  VAR_0[0] *= VAR_2;
  VAR_0[1] *= VAR_2;
  VAR_0[2] *= VAR_2;
 }

 return VAR_1;
}
