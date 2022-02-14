
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;



void FUNC_0( vec3_t VAR_0, vec3_t VAR_1 ) {
 int VAR_2;

 for ( VAR_2 = 0 ; VAR_2 < 3 ; VAR_2++ ) {
  if ( VAR_1[VAR_2] <= VAR_0[VAR_2] ) {
   VAR_0[VAR_2] = (int)VAR_0[VAR_2];
  } else {
   VAR_0[VAR_2] = (int)VAR_0[VAR_2] + 1;
  }
 }
}
