
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

void FUNC_6( void ) {
 int VAR_2, VAR_3, VAR_4, VAR_5;
 char VAR_6[VAR_0];

 VAR_3 = FUNC_0();
 if ( VAR_3 < 3 ) {
  FUNC_2 ("usage: set <variable> <value>\n");
  return;
 }

 VAR_6[0] = 0;
 VAR_4 = 0;
 for ( VAR_2 = 2 ; VAR_2 < VAR_3 ; VAR_2++ ) {
  VAR_5 = FUNC_5 ( FUNC_1( VAR_2 ) + 1 );
  if ( VAR_4 + VAR_5 >= VAR_0 - 2 ) {
   break;
  }
  FUNC_4( VAR_6, FUNC_1( VAR_2 ) );
  if ( VAR_2 != VAR_3-1 ) {
   FUNC_4( VAR_6, " " );
  }
  VAR_4 += VAR_5;
 }
 FUNC_3 (FUNC_1(1), VAR_6, VAR_1);
}
