
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 int FUNC_0 (float*) ;
 int FUNC_1 (float*,int,int,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3( const char *VAR_0, vec3_t VAR_1 ) {
 int VAR_2;

 FUNC_0( VAR_1 );

 VAR_2 = FUNC_2( VAR_0 );

 if ( VAR_2 < 1 || VAR_2 > 7 ) {
  FUNC_1( VAR_1, 1, 1, 1 );
  return;
 }

 if ( VAR_2 & 1 ) {
  VAR_1[2] = 1.0f;
 }
 if ( VAR_2 & 2 ) {
  VAR_1[1] = 1.0f;
 }
 if ( VAR_2 & 4 ) {
  VAR_1[0] = 1.0f;
 }
}
