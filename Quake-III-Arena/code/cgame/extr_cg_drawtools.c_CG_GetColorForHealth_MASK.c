
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec4_t ;


 int VAR_0 ;
 int FUNC_0 (double*) ;

void FUNC_1( int VAR_1, int VAR_2, vec4_t VAR_3 ) {
 int VAR_4;
 int VAR_5;



 if ( VAR_1 <= 0 ) {
  FUNC_0( VAR_3 );
  VAR_3[3] = 1;
  return;
 }
 VAR_4 = VAR_2;
 VAR_5 = VAR_1 * VAR_0 / ( 1.0 - VAR_0 );
 if ( VAR_5 < VAR_4 ) {
  VAR_4 = VAR_5;
 }
 VAR_1 += VAR_4;


 VAR_3[0] = 1.0;
 VAR_3[3] = 1.0;
 if ( VAR_1 >= 100 ) {
  VAR_3[2] = 1.0;
 } else if ( VAR_1 < 66 ) {
  VAR_3[2] = 0;
 } else {
  VAR_3[2] = ( VAR_1 - 66 ) / 33.0;
 }

 if ( VAR_1 > 60 ) {
  VAR_3[1] = 1.0;
 } else if ( VAR_1 < 30 ) {
  VAR_3[1] = 0;
 } else {
  VAR_3[1] = ( VAR_1 - 30 ) / 30.0;
 }
}
