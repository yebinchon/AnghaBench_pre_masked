
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nullstate ;
typedef int msg_t ;
typedef int entityState_t ;
struct TYPE_4__ {int dataCount; int* stringOffsets; scalar_t__ stringData; } ;
struct TYPE_6__ {int * entityBaselines; TYPE_1__ gameState; } ;
struct TYPE_5__ {void* checksumFeed; void* clientNum; void* serverCommandSequence; scalar_t__ connectPacketCount; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 int VAR_0 ;
 int FUNC_8 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int *,int) ;
 void* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_15 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_16( msg_t *VAR_10 ) {
 int VAR_11;
 entityState_t *VAR_12;
 int VAR_13;
 entityState_t VAR_14;
 int VAR_15;
 char *VAR_16;

 FUNC_6();

 VAR_6.connectPacketCount = 0;


 FUNC_0();


 VAR_6.serverCommandSequence = FUNC_13( VAR_10 );


 VAR_5.gameState.dataCount = 1;
 while ( 1 ) {
  VAR_15 = FUNC_11( VAR_10 );

  if ( VAR_15 == VAR_7 ) {
   break;
  }

  if ( VAR_15 == VAR_9 ) {
   int VAR_17;

   VAR_11 = FUNC_14( VAR_10 );
   if ( VAR_11 < 0 || VAR_11 >= VAR_2 ) {
    FUNC_3( VAR_0, "configstring > MAX_CONFIGSTRINGS" );
   }
   VAR_16 = FUNC_9( VAR_10 );
   VAR_17 = FUNC_15( VAR_16 );

   if ( VAR_17 + 1 + VAR_5.gameState.dataCount > VAR_3 ) {
    FUNC_3( VAR_0, "MAX_GAMESTATE_CHARS exceeded" );
   }


   VAR_5.gameState.stringOffsets[ VAR_11 ] = VAR_5.gameState.dataCount;
   FUNC_4( VAR_5.gameState.stringData + VAR_5.gameState.dataCount, VAR_16, VAR_17 + 1 );
   VAR_5.gameState.dataCount += VAR_17 + 1;
  } else if ( VAR_15 == VAR_8 ) {
   VAR_13 = FUNC_10( VAR_10, VAR_1 );
   if ( VAR_13 < 0 || VAR_13 >= VAR_4 ) {
    FUNC_3( VAR_0, "Baseline number out of range: %i", VAR_13 );
   }
   FUNC_5 (&VAR_14, 0, sizeof(VAR_14));
   VAR_12 = &VAR_5.entityBaselines[ VAR_13 ];
   FUNC_12( VAR_10, &VAR_14, VAR_12, VAR_13 );
  } else {
   FUNC_3( VAR_0, "CL_ParseGamestate: bad command byte" );
  }
 }

 VAR_6.clientNum = FUNC_13(VAR_10);

 VAR_6.checksumFeed = FUNC_13( VAR_10 );


 FUNC_2();


  FUNC_8( VAR_6.checksumFeed );



 FUNC_1();


 FUNC_7( "cl_paused", "0" );
}
