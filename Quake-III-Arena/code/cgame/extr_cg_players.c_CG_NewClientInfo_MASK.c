
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int qboolean ;
typedef int newInfo ;
typedef int modelStr ;
struct TYPE_11__ {char const* name; char const* redTeam; char const* blueTeam; char const* modelName; char const* skinName; char const* headModelName; char const* headSkinName; int infoValid; int deferred; void* teamLeader; void* teamTask; void* team; void* losses; void* wins; void* handicap; void* botSkill; int color2; int color1; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_16__ {int loading; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ gametype; TYPE_1__* clientinfo; } ;


 int FUNC_0 (char const*,int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_6 (char const*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char const*,char const*,int) ;
 void* FUNC_8 (char const*) ;
 TYPE_7__ VAR_5 ;
 TYPE_6__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_10 (char const*,char) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 () ;

void FUNC_13( int VAR_12 ) {
 clientInfo_t *VAR_13;
 clientInfo_t VAR_14;
 const char *VAR_15;
 const char *VAR_16;
 char *VAR_17;

 VAR_13 = &VAR_9.clientinfo[VAR_12];

 VAR_15 = FUNC_1( VAR_12 + VAR_0 );
 if ( !VAR_15[0] ) {
  FUNC_9( VAR_13, 0, sizeof( *VAR_13 ) );
  return;
 }



 FUNC_9( &VAR_14, 0, sizeof( VAR_14 ) );


 VAR_16 = FUNC_6(VAR_15, "n");
 FUNC_7( VAR_14.name, VAR_16, sizeof( VAR_14.name ) );


 VAR_16 = FUNC_6( VAR_15, "c1" );
 FUNC_0( VAR_16, VAR_14.color1 );

 VAR_16 = FUNC_6( VAR_15, "c2" );
 FUNC_0( VAR_16, VAR_14.color2 );


 VAR_16 = FUNC_6( VAR_15, "skill" );
 VAR_14.botSkill = FUNC_8( VAR_16 );


 VAR_16 = FUNC_6( VAR_15, "hc" );
 VAR_14.handicap = FUNC_8( VAR_16 );


 VAR_16 = FUNC_6( VAR_15, "w" );
 VAR_14.wins = FUNC_8( VAR_16 );


 VAR_16 = FUNC_6( VAR_15, "l" );
 VAR_14.losses = FUNC_8( VAR_16 );


 VAR_16 = FUNC_6( VAR_15, "t" );
 VAR_14.team = FUNC_8( VAR_16 );


 VAR_16 = FUNC_6( VAR_15, "tt" );
 VAR_14.teamTask = FUNC_8(VAR_16);


 VAR_16 = FUNC_6( VAR_15, "tl" );
 VAR_14.teamLeader = FUNC_8(VAR_16);

 VAR_16 = FUNC_6( VAR_15, "g_redteam" );
 FUNC_7(VAR_14.redTeam, VAR_16, VAR_4);

 VAR_16 = FUNC_6( VAR_15, "g_blueteam" );
 FUNC_7(VAR_14.blueTeam, VAR_16, VAR_4);


 VAR_16 = FUNC_6( VAR_15, "model" );
 if ( VAR_8.integer ) {


  char VAR_18[VAR_3];
  char *VAR_19;

  if( VAR_9.gametype >= VAR_2 ) {
   FUNC_7( VAR_14.modelName, VAR_1, sizeof( VAR_14.modelName ) );
   FUNC_7( VAR_14.skinName, "default", sizeof( VAR_14.skinName ) );
  } else {
   FUNC_11( "model", VAR_18, sizeof( VAR_18 ) );
   if ( ( VAR_19 = FUNC_10( VAR_18, '/' ) ) == ((void*)0)) {
    VAR_19 = "default";
   } else {
    *VAR_19++ = 0;
   }

   FUNC_7( VAR_14.skinName, VAR_19, sizeof( VAR_14.skinName ) );
   FUNC_7( VAR_14.modelName, VAR_18, sizeof( VAR_14.modelName ) );
  }

  if ( VAR_9.gametype >= VAR_2 ) {

   VAR_17 = FUNC_10( VAR_16, '/' );
   if ( VAR_17 ) {
    FUNC_7( VAR_14.skinName, VAR_17 + 1, sizeof( VAR_14.skinName ) );
   }
  }
 } else {
  FUNC_7( VAR_14.modelName, VAR_16, sizeof( VAR_14.modelName ) );

  VAR_17 = FUNC_10( VAR_14.modelName, '/' );
  if ( !VAR_17 ) {

   FUNC_7( VAR_14.skinName, "default", sizeof( VAR_14.skinName ) );
  } else {
   FUNC_7( VAR_14.skinName, VAR_17 + 1, sizeof( VAR_14.skinName ) );

   *VAR_17 = 0;
  }
 }


 VAR_16 = FUNC_6( VAR_15, "hmodel" );
 if ( VAR_8.integer ) {


  char VAR_20[VAR_3];
  char *VAR_21;

  if( VAR_9.gametype >= VAR_2 ) {
   FUNC_7( VAR_14.headModelName, VAR_1, sizeof( VAR_14.headModelName ) );
   FUNC_7( VAR_14.headSkinName, "default", sizeof( VAR_14.headSkinName ) );
  } else {
   FUNC_11( "headmodel", VAR_20, sizeof( VAR_20 ) );
   if ( ( VAR_21 = FUNC_10( VAR_20, '/' ) ) == ((void*)0)) {
    VAR_21 = "default";
   } else {
    *VAR_21++ = 0;
   }

   FUNC_7( VAR_14.headSkinName, VAR_21, sizeof( VAR_14.headSkinName ) );
   FUNC_7( VAR_14.headModelName, VAR_20, sizeof( VAR_14.headModelName ) );
  }

  if ( VAR_9.gametype >= VAR_2 ) {

   VAR_17 = FUNC_10( VAR_16, '/' );
   if ( VAR_17 ) {
    FUNC_7( VAR_14.headSkinName, VAR_17 + 1, sizeof( VAR_14.headSkinName ) );
   }
  }
 } else {
  FUNC_7( VAR_14.headModelName, VAR_16, sizeof( VAR_14.headModelName ) );

  VAR_17 = FUNC_10( VAR_14.headModelName, '/' );
  if ( !VAR_17 ) {

   FUNC_7( VAR_14.headSkinName, "default", sizeof( VAR_14.headSkinName ) );
  } else {
   FUNC_7( VAR_14.headSkinName, VAR_17 + 1, sizeof( VAR_14.headSkinName ) );

   *VAR_17 = 0;
  }
 }



 if ( !FUNC_4( &VAR_14 ) ) {
  qboolean VAR_22;

  VAR_22 = FUNC_12() < 4000000;


  if ( VAR_22 || (VAR_7.integer && !VAR_6.integer && !VAR_5.loading ) ) {

   FUNC_5( &VAR_14 );

   if ( VAR_22 ) {
    FUNC_3( "Memory is low.  Using deferred model.\n" );
    VAR_14.deferred = VAR_10;
   }
  } else {
   FUNC_2( &VAR_14 );
  }
 }


 VAR_14.infoValid = VAR_11;
 *VAR_13 = VAR_14;
}
