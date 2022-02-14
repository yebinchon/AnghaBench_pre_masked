
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clientNum; } ;
typedef TYPE_1__ uiClientState_t ;
typedef int info ;
struct TYPE_5__ {int numBots; int * botNames; void* gametype; int * bots; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 char VAR_3 ;
 void* FUNC_3 (char*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_6( void ) {
 uiClientState_t VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 char VAR_9;
 char VAR_10;
 char VAR_11[VAR_2];

 for( VAR_8 = 0; VAR_8 < 9; VAR_8++ ) {
  VAR_4.bots[VAR_8] = VAR_4.botNames[VAR_8];
 }

 FUNC_4( &VAR_5 );

 FUNC_2( VAR_4.botNames[0], "Everyone", 16 );
 VAR_4.numBots = 1;

 FUNC_5( VAR_1, VAR_11, sizeof(VAR_11) );
 VAR_6 = FUNC_3( FUNC_0( VAR_11, "sv_maxclients" ) );
 VAR_4.gametype = FUNC_3( FUNC_0( VAR_11, "g_gametype" ) );

 for( VAR_8 = 0; VAR_8 < VAR_6 && VAR_4.numBots < 9; VAR_8++ ) {
  FUNC_5( VAR_0 + VAR_8, VAR_11, VAR_2 );

  VAR_9 = VAR_3;

  if( VAR_8 == VAR_5.clientNum ) {
   VAR_9 = *FUNC_0( VAR_11, "t" );
   continue;
  }

  VAR_7 = FUNC_3( FUNC_0( VAR_11, "skill" ) );
  if( !VAR_7 ) {
   continue;
  }

  VAR_10 = *FUNC_0( VAR_11, "t" );
  if( VAR_10 != VAR_9 ) {
   continue;
  }

  FUNC_2( VAR_4.botNames[VAR_4.numBots], FUNC_0( VAR_11, "n" ), 16 );
  FUNC_1( VAR_4.botNames[VAR_4.numBots] );
  VAR_4.numBots++;
 }
}
