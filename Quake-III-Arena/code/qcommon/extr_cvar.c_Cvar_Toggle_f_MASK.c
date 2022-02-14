
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,int) ;

void FUNC_6( void ) {
 int VAR_1;

 if ( FUNC_0() != 2 ) {
  FUNC_2 ("usage: toggle <variable>\n");
  return;
 }

 VAR_1 = FUNC_4( FUNC_1( 1 ) );
 VAR_1 = !VAR_1;

 FUNC_3 (FUNC_1(1), FUNC_5("%i", VAR_1), VAR_0);
}
