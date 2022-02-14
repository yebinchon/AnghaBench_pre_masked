
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;


 int FUNC_0 (float* const,float,float*) ;

vec_t FUNC_1( const vec3_t VAR_0, vec3_t VAR_1 ) {
 float VAR_2, VAR_3;

 VAR_2 = VAR_0[0];
 if (VAR_0[1] > VAR_2)
  VAR_2 = VAR_0[1];
 if (VAR_0[2] > VAR_2)
  VAR_2 = VAR_0[2];

 if (VAR_2 == 0) {
  VAR_1[0] = VAR_1[1] = VAR_1[2] = 1.0;
  return 0;
 }

 VAR_3 = 1.0 / VAR_2;

 FUNC_0 (VAR_0, VAR_3, VAR_1);

 return VAR_2;
}
