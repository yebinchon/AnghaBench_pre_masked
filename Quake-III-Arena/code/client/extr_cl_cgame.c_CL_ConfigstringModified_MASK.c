
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* stringData; int* stringOffsets; int dataCount; } ;
typedef TYPE_1__ gameState_t ;
struct TYPE_5__ {TYPE_1__ gameState; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

void FUNC_9( void ) {
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8;
 char *VAR_9;
 gameState_t VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6( FUNC_2(1) );
 if ( VAR_8 < 0 || VAR_8 >= VAR_2 ) {
  FUNC_3( VAR_1, "configstring > MAX_CONFIGSTRINGS" );
 }

 VAR_6 = FUNC_1(2);

 VAR_5 = VAR_4.gameState.stringData + VAR_4.gameState.stringOffsets[ VAR_8 ];
 if ( !FUNC_7( VAR_5, VAR_6 ) ) {
  return;
 }


 VAR_10 = VAR_4.gameState;

 FUNC_5( &VAR_4.gameState, 0, sizeof( VAR_4.gameState ) );


 VAR_4.gameState.dataCount = 1;

 for ( VAR_7 = 0 ; VAR_7 < VAR_2 ; VAR_7++ ) {
  if ( VAR_7 == VAR_8 ) {
   VAR_9 = VAR_6;
  } else {
   VAR_9 = VAR_10.stringData + VAR_10.stringOffsets[ VAR_7 ];
  }
  if ( !VAR_9[0] ) {
   continue;
  }

  VAR_11 = FUNC_8( VAR_9 );

  if ( VAR_11 + 1 + VAR_4.gameState.dataCount > VAR_3 ) {
   FUNC_3( VAR_1, "MAX_GAMESTATE_CHARS exceeded" );
  }


  VAR_4.gameState.stringOffsets[ VAR_7 ] = VAR_4.gameState.dataCount;
  FUNC_4( VAR_4.gameState.stringData + VAR_4.gameState.dataCount, VAR_9, VAR_11 + 1 );
  VAR_4.gameState.dataCount += VAR_11 + 1;
 }

 if ( VAR_8 == VAR_0 ) {

  FUNC_0();
 }

}
