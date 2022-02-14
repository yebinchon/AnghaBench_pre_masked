
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arenaKey ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;

void FUNC_8( int VAR_1, int VAR_2 ) {
 int VAR_3;
 int VAR_4;
 char VAR_5[16];
 char VAR_6[VAR_0];


 if( VAR_2 < 1 || VAR_2 > 8 ) {
  return;
 }


 VAR_3 = (int)FUNC_6( "g_spSkill" );
 if( VAR_3 < 1 || VAR_3 > 5 ) {
  return;
 }


 FUNC_5( FUNC_7( "g_spScores%i", VAR_3 ), VAR_6, VAR_0 );


 FUNC_0( VAR_5, sizeof( VAR_5 ), "l%i", VAR_1 );
 VAR_4 = FUNC_3( FUNC_2( VAR_6, VAR_5 ) );
 if( VAR_4 && VAR_4 <= VAR_2 ) {
  return;
 }


 FUNC_1( VAR_6, VAR_5, FUNC_7( "%i", VAR_2 ) );
 FUNC_4( FUNC_7( "g_spScores%i", VAR_3 ), VAR_6 );
}
