
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef int byte ;


 float FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3( const vec3_t VAR_0, byte VAR_1[2] ) {

 if ( VAR_0[0] == 0 && VAR_0[1] == 0 ) {
  if ( VAR_0[2] > 0 ) {
   VAR_1[0] = 0;
   VAR_1[1] = 0;
  } else {
   VAR_1[0] = 128;
   VAR_1[1] = 0;
  }
 } else {
  int VAR_2, VAR_3;

  VAR_2 = FUNC_0( FUNC_2( VAR_0[1], VAR_0[0] ) ) * (255.0f / 360.0f );
  VAR_2 &= 0xff;

  VAR_3 = FUNC_0( FUNC_1( VAR_0[2] ) ) * ( 255.0f / 360.0f );
  VAR_3 &= 0xff;

  VAR_1[0] = VAR_3;
  VAR_1[1] = VAR_2;
 }
}
