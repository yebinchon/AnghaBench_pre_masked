
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int info ;
struct TYPE_13__ {int flags; } ;
struct TYPE_14__ {TYPE_5__ generic; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_12__ {TYPE_3__ generic; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_1__ generic; } ;
struct TYPE_16__ {int serverId; int numClients; int phase; int starttime; int numAwards; int won; int lastTier; int scoreboardtime; int menu; TYPE_6__ item_menu; TYPE_4__ item_next; TYPE_2__ item_again; scalar_t__ winnerSound; int * placeNames; } ;
struct TYPE_15__ {int realtime; scalar_t__ demoversion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 TYPE_8__ VAR_11 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (scalar_t__,int ) ;
 TYPE_7__ VAR_12 ;
 char* FUNC_15 (char*,int) ;

__attribute__((used)) static void FUNC_16( void ) {
 int VAR_13;
 int VAR_14;
 int VAR_15;
 char VAR_16[VAR_5];

 FUNC_13( VAR_3, VAR_16, sizeof(VAR_16) );
 VAR_14 = FUNC_8( FUNC_0( VAR_16, "sv_serverid" ) );
 if( VAR_14 != VAR_11.serverId ) {
  FUNC_3();
  return;
 }


 if ( VAR_11.numClients > 2 ) {
  FUNC_2( 510, 480 - 64 - VAR_6, VAR_11.placeNames[2], VAR_9, VAR_10 );
 }
 FUNC_2( 130, 480 - 64 - VAR_6, VAR_11.placeNames[1], VAR_9, VAR_10 );
 FUNC_2( 320, 480 - 64 - 2 * VAR_6, VAR_11.placeNames[0], VAR_9, VAR_10 );

 if( VAR_11.phase == 1 ) {
  VAR_13 = VAR_12.realtime - VAR_11.starttime;

  if( VAR_13 >= 1000 && VAR_11.winnerSound ) {
   FUNC_14( VAR_11.winnerSound, VAR_2 );
   VAR_11.winnerSound = 0;
  }

  if( VAR_13 < 5000 ) {
   return;
  }
  VAR_11.phase = 2;
  VAR_11.starttime = VAR_12.realtime;
 }


 if( VAR_11.phase == 2 ) {
  VAR_13 = VAR_12.realtime - VAR_11.starttime;
  if( VAR_13 >= ( VAR_11.numAwards * VAR_1 ) ) {

   if( VAR_13 < 5000 ) {
    return;
   }

   VAR_11.phase = 3;
   VAR_11.starttime = VAR_12.realtime;
  }
  else {
   FUNC_5( VAR_13 );
  }
 }


 if( VAR_11.phase == 3 ) {
  if( VAR_12.demoversion ) {
   if( VAR_11.won == 1 && FUNC_7( 8 )) {
    FUNC_10( "nextmap", "" );
    FUNC_9( VAR_4, "disconnect; cinematic demoEnd.RoQ\n" );
    return;
   }
  }
  else if( VAR_11.won > -1 && FUNC_7( VAR_11.won + 1 )) {
   if( VAR_11.won == VAR_11.lastTier ) {
    FUNC_10( "nextmap", "" );
    FUNC_9( VAR_4, "disconnect; cinematic end.RoQ\n" );
    return;
   }

   FUNC_11( "ui_spSelection", VAR_11.won * VAR_0 );
   FUNC_10( "nextmap", "levelselect" );
   FUNC_9( VAR_4, FUNC_15( "disconnect; cinematic tier%i.RoQ\n", VAR_11.won + 1 ) );
   return;
  }

  VAR_11.item_again.generic.flags &= ~VAR_7;
  VAR_11.item_next.generic.flags &= ~VAR_7;
  VAR_11.item_menu.generic.flags &= ~VAR_7;

  FUNC_4( VAR_11.numAwards );

  FUNC_1( &VAR_11.menu );
 }


 if( !FUNC_12( "ui_spScoreboard" ) ) {
  return;
 }

 VAR_13 = VAR_12.realtime - VAR_11.scoreboardtime;
 if( VAR_11.numClients <= 3 ) {
  VAR_15 = 0;
 }
 else {
  VAR_15 = VAR_13 / 1500 % (VAR_11.numClients + 2);
 }
 FUNC_6( VAR_15, 0 );
 FUNC_6( VAR_15 + 1, 0 + VAR_8 );
 FUNC_6( VAR_15 + 2, 0 + 2 * VAR_8 );
}
