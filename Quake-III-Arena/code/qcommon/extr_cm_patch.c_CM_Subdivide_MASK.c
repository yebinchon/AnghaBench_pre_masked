
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;



__attribute__((used)) static void FUNC_0( vec3_t VAR_0, vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5 ) {
 int VAR_6;

 for ( VAR_6 = 0 ; VAR_6 < 3 ; VAR_6++ ) {
  VAR_3[VAR_6] = 0.5 * (VAR_0[VAR_6] + VAR_1[VAR_6]);
  VAR_5[VAR_6] = 0.5 * (VAR_1[VAR_6] + VAR_2[VAR_6]);
  VAR_4[VAR_6] = 0.5 * (VAR_3[VAR_6] + VAR_5[VAR_6]);
 }
}
