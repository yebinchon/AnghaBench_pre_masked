
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bots ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (char*,char*) ;
 float FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*,float,int) ;

__attribute__((used)) static void FUNC_5( char *VAR_6, int VAR_7 ) {
 char *VAR_8;
 char *VAR_9;
 float VAR_10;
 int VAR_11;
 char VAR_12[VAR_2];

 VAR_3 = ((void*)0);
 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);

 VAR_10 = FUNC_2( "g_spSkill" );
 if( VAR_10 < 1 ) {
  FUNC_1( "g_spSkill", "1" );
  VAR_10 = 1;
 }
 else if ( VAR_10 > 5 ) {
  FUNC_1( "g_spSkill", "5" );
  VAR_10 = 5;
 }

 FUNC_0( VAR_12, VAR_6, sizeof(VAR_12) );
 VAR_9 = &VAR_12[0];
 VAR_11 = VAR_7;
 while( *VAR_9 ) {

  while( *VAR_9 && *VAR_9 == ' ' ) {
   VAR_9++;
  }
  if( !VAR_9 ) {
   break;
  }


  VAR_8 = VAR_9;


  while( *VAR_9 && *VAR_9 != ' ' ) {
   VAR_9++;
  }
  if( *VAR_9 ) {
   *VAR_9++ = 0;
  }



  FUNC_3( VAR_1, FUNC_4("addbot %s %f free %i\n", VAR_8, VAR_10, VAR_11) );

  VAR_11 += VAR_0;
 }
}
