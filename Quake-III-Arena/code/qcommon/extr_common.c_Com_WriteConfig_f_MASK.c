
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ,int) ;

void FUNC_6( void ) {
 char VAR_1[VAR_0];

 if ( FUNC_1() != 2 ) {
  FUNC_3( "Usage: writeconfig <filename>\n" );
  return;
 }

 FUNC_5( VAR_1, FUNC_2(1), sizeof( VAR_1 ) );
 FUNC_0( VAR_1, sizeof( VAR_1 ), ".cfg" );
 FUNC_3( "Writing %s.\n", VAR_1 );
 FUNC_4( VAR_1 );
}
