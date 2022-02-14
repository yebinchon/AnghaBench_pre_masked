
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ team; int name; scalar_t__ infoValid; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_8__ {int warmup; int warmupCount; int time; } ;
struct TYPE_5__ {int count3Sound; int count2Sound; int count1Sound; } ;
struct TYPE_7__ {scalar_t__ gametype; int maxclients; TYPE_1__ media; TYPE_2__* clientinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char const*,float) ;
 int FUNC_1 (int,int,char const*,int ,int ,int ,int,int,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,int,float,int ,char const*,int ,int ,int ) ;
 int FUNC_4 (char const*,float,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_4__ VAR_12 ;
 TYPE_3__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (char*,int,...) ;

__attribute__((used)) static void FUNC_7( void ) {
 int VAR_17;
 int VAR_18;
 int VAR_19;
 float VAR_20;
 clientInfo_t *VAR_21, *VAR_22;
 int VAR_23;
 const char *VAR_24;

 VAR_18 = VAR_12.warmup;
 if ( !VAR_18 ) {
  return;
 }

 if ( VAR_18 < 0 ) {
  VAR_24 = "Waiting for players";
  VAR_17 = FUNC_2( VAR_24 ) * VAR_0;
  FUNC_0(320 - VAR_17 / 2, 24, VAR_24, 1.0F);
  VAR_12.warmupCount = 0;
  return;
 }

 if (VAR_13.gametype == VAR_9) {

  VAR_21 = ((void*)0);
  VAR_22 = ((void*)0);
  for ( VAR_19 = 0 ; VAR_19 < VAR_13.maxclients ; VAR_19++ ) {
   if ( VAR_13.clientinfo[VAR_19].infoValid && VAR_13.clientinfo[VAR_19].team == VAR_11 ) {
    if ( !VAR_21 ) {
     VAR_21 = &VAR_13.clientinfo[VAR_19];
    } else {
     VAR_22 = &VAR_13.clientinfo[VAR_19];
    }
   }
  }

  if ( VAR_21 && VAR_22 ) {
   VAR_24 = FUNC_6( "%s vs %s", VAR_21->name, VAR_22->name );




   VAR_17 = FUNC_2( VAR_24 );
   if ( VAR_17 > 640 / VAR_2 ) {
    VAR_23 = 640 / VAR_17;
   } else {
    VAR_23 = VAR_2;
   }
   FUNC_1( 320 - VAR_17 * VAR_23/2, 20,VAR_24, VAR_14,
     VAR_15, VAR_16, VAR_23, (int)(VAR_23 * 1.5f), 0 );

  }
 } else {
  if ( VAR_13.gametype == VAR_5 ) {
   VAR_24 = "Free For All";
  } else if ( VAR_13.gametype == VAR_8 ) {
   VAR_24 = "Team Deathmatch";
  } else if ( VAR_13.gametype == VAR_4 ) {
   VAR_24 = "Capture the Flag";
  } else {
   VAR_24 = "";
  }




  VAR_17 = FUNC_2( VAR_24 );
  if ( VAR_17 > 640 / VAR_2 ) {
   VAR_23 = 640 / VAR_17;
  } else {
   VAR_23 = VAR_2;
  }
  FUNC_1( 320 - VAR_17 * VAR_23/2, 25,VAR_24, VAR_14,
    VAR_15, VAR_16, VAR_23, (int)(VAR_23 * 1.1f), 0 );

 }

 VAR_18 = ( VAR_18 - VAR_12.time ) / 1000;
 if ( VAR_18 < 0 ) {
  VAR_12.warmup = 0;
  VAR_18 = 0;
 }
 VAR_24 = FUNC_6( "Starts in: %i", VAR_18 + 1 );
 if ( VAR_18 != VAR_12.warmupCount ) {
  VAR_12.warmupCount = VAR_18;
  switch ( VAR_18 ) {
  case 0:
   FUNC_5( VAR_13.media.count1Sound, VAR_1 );
   break;
  case 1:
   FUNC_5( VAR_13.media.count2Sound, VAR_1 );
   break;
  case 2:
   FUNC_5( VAR_13.media.count3Sound, VAR_1 );
   break;
  default:
   break;
  }
 }
 VAR_20 = 0.45f;
 switch ( VAR_12.warmupCount ) {
 case 0:
  VAR_23 = 28;
  VAR_20 = 0.54f;
  break;
 case 1:
  VAR_23 = 24;
  VAR_20 = 0.51f;
  break;
 case 2:
  VAR_23 = 20;
  VAR_20 = 0.48f;
  break;
 default:
  VAR_23 = 16;
  VAR_20 = 0.45f;
  break;
 }





 VAR_17 = FUNC_2( VAR_24 );
 FUNC_1( 320 - VAR_17 * VAR_23/2, 70, VAR_24, VAR_14,
   VAR_15, VAR_16, VAR_23, (int)(VAR_23 * 1.5), 0 );

}
