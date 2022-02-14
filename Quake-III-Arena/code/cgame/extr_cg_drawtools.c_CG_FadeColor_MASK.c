
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_2__ {int time; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

float *FUNC_0( int VAR_2, int VAR_3 ) {
 static vec4_t VAR_4;
 int VAR_5;

 if ( VAR_2 == 0 ) {
  return ((void*)0);
 }

 VAR_5 = VAR_1.time - VAR_2;

 if ( VAR_5 >= VAR_3 ) {
  return ((void*)0);
 }


 if ( VAR_3 - VAR_5 < VAR_0 ) {
  VAR_4[3] = ( VAR_3 - VAR_5 ) * 1.0/VAR_0;
 } else {
  VAR_4[3] = 1.0;
 }
 VAR_4[0] = VAR_4[1] = VAR_4[2] = 1;

 return VAR_4;
}
