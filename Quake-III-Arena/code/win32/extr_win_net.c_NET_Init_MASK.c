
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5( void ) {
 int VAR_3;

 VAR_3 = FUNC_4( FUNC_1( 1, 1 ), &VAR_2 );
 if( VAR_3 ) {
  FUNC_0( "WARNING: Winsock initialization failed, returned %d\n", VAR_3 );
  return;
 }

 VAR_1 = VAR_0;
 FUNC_0( "Winsock Initialized\n" );


 FUNC_3();


 FUNC_2( VAR_0 );
}
