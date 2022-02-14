
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 char** FUNC_5 (char*,char*,char*,int*) ;
 int FUNC_6 (char**,int) ;

void FUNC_7( void ) {
 char *VAR_0;
 char **VAR_1;
 int VAR_2;
 int VAR_3;

 if ( FUNC_0() < 2 ) {
  FUNC_2( "usage: fdir <filter>\n" );
  FUNC_2( "example: fdir *q3dm*.bsp\n");
  return;
 }

 VAR_0 = FUNC_1( 1 );

 FUNC_2( "---------------\n" );

 VAR_1 = FUNC_5( "", "", VAR_0, &VAR_2 );

 FUNC_6(VAR_1, VAR_2);

 for ( VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ ) {
  FUNC_3(VAR_1[VAR_3]);
  FUNC_2( "%s\n", VAR_1[VAR_3] );
 }
 FUNC_2( "%d files listed\n", VAR_2 );
 FUNC_4( VAR_1 );
}
