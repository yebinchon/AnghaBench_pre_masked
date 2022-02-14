
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fileHandle_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__*,int ) ;
 int VAR_0 ;

void FUNC_5( void ) {
 fileHandle_t VAR_1;

 if ( FUNC_0() != 2 ) {
  FUNC_2( "Usage: touchFile <file>\n" );
  return;
 }

 FUNC_4( FUNC_1( 1 ), &VAR_1, VAR_0 );
 if ( VAR_1 ) {
  FUNC_3( VAR_1 );
 }
}
