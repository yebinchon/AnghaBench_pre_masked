
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;

void FUNC_7( void ) {
 int VAR_0 = FUNC_0();

 if ( VAR_0 > 2 ) {
  char VAR_1[1024];
  int VAR_2;

  FUNC_6( VAR_1, FUNC_1(1) );
  FUNC_5( VAR_1, "=" );

  for ( VAR_2 = 2; VAR_2 < VAR_0; VAR_2++ ) {
   FUNC_5( VAR_1, FUNC_1( VAR_2 ) );
   FUNC_5( VAR_1, " " );
  }

  FUNC_4( VAR_1 );
 } else if ( VAR_0 == 2 ) {
  char *VAR_3 = FUNC_3( FUNC_1(1) );

  if ( VAR_3 ) {
   FUNC_2( "%s=%s\n", FUNC_1(1), VAR_3 );
  } else {
   FUNC_2( "%s undefined\n", FUNC_1(1), VAR_3 );
  }
 }
}
