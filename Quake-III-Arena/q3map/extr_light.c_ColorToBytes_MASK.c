
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
typedef float byte ;


 int FUNC_0 (float const*,float*) ;
 int FUNC_1 (float*,int,float*) ;

void FUNC_2( const float *VAR_0, byte *VAR_1 ) {
 float VAR_2;
 vec3_t VAR_3;

 FUNC_0( VAR_0, VAR_3 );


 VAR_2 = VAR_3[0];
 if ( VAR_3[1] > VAR_2 ) {
  VAR_2 = VAR_3[1];
 }
 if ( VAR_3[2] > VAR_2 ) {
  VAR_2 = VAR_3[2];
 }
 if ( VAR_2 > 255 ) {
  FUNC_1( VAR_3, 255/VAR_2, VAR_3 );
 }
 VAR_1[ 0 ] = VAR_3[0];
 VAR_1[ 1 ] = VAR_3[1];
 VAR_1[ 2 ] = VAR_3[2];
}
