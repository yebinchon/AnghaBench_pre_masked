
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shaderInfo_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;

void FUNC_1( shaderInfo_t *VAR_3 ) {
 int VAR_4;

 if ( !VAR_3 ) {
  return;
 }

 for( VAR_4 = 0; VAR_4 < VAR_1; VAR_4++ ) {
  if ( VAR_2[ VAR_4 ] == VAR_3 ) {
   return;
  }
 }

 if ( VAR_1 >= VAR_0 ) {
  FUNC_0( "Too many textures on terrain" );
  return;
 }

 VAR_2[ VAR_1++ ] = VAR_3;
}
