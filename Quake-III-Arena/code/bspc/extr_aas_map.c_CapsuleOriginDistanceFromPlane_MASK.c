
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;



vec_t FUNC_0(vec3_t VAR_0, vec3_t VAR_1, vec3_t VAR_2)
{
 float VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_2[0] - VAR_1[0];

 if (VAR_2[2] - VAR_1[2] < VAR_5) {
  VAR_5 = VAR_2[2] - VAR_1[2];
 }
 VAR_6 = VAR_5 * 0.5;

 VAR_3 = VAR_2[2] - VAR_6;
 VAR_4 = -VAR_1[2] - VAR_6;


 if ( VAR_0[2] > 0 ) {

  return VAR_0[2] * VAR_4 + VAR_6;
 }
 else {

  return -VAR_0[2] * VAR_3 + VAR_6;
 }
}
