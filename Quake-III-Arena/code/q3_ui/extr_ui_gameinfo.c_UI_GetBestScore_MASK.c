
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arenaKey ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (char*,int) ;

void FUNC_5( int VAR_2, int *VAR_3, int *VAR_4 ) {
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 char VAR_9[16];
 char VAR_10[VAR_0];

 if( !VAR_3 || !VAR_4 ) {
  return;
 }

 if( VAR_2 < 0 || VAR_2 > VAR_1 ) {
  return;
 }

 VAR_7 = 0;
 VAR_8 = 0;

 for( VAR_5 = 1; VAR_5 <= 5; VAR_5++ ) {
  FUNC_3( FUNC_4( "g_spScores%i", VAR_5 ), VAR_10, VAR_0 );

  FUNC_0( VAR_9, sizeof( VAR_9 ), "l%i", VAR_2 );
  VAR_6 = FUNC_2( FUNC_1( VAR_10, VAR_9 ) );

  if( VAR_6 < 1 || VAR_6 > 8 ) {
   continue;
  }

  if( !VAR_7 || VAR_6 <= VAR_7 ) {
   VAR_7 = VAR_6;
   VAR_8 = VAR_5;
  }
 }

 *VAR_3 = VAR_7;
 *VAR_4 = VAR_8;
}
