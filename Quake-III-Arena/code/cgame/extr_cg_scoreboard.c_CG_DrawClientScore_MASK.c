
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int string ;
struct TYPE_13__ {size_t client; int ping; int time; int score; } ;
typedef TYPE_4__ score_t ;
typedef scalar_t__ qboolean ;
struct TYPE_14__ {int powerups; int botSkill; int handicap; scalar_t__ teamTask; scalar_t__ team; int name; int losses; int wins; } ;
typedef TYPE_5__ clientInfo_t ;
struct TYPE_17__ {TYPE_2__* snap; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_12__ {int defendShader; int assaultShader; int * botSkillShaders; } ;
struct TYPE_15__ {size_t maxclients; scalar_t__ gametype; TYPE_3__ media; TYPE_5__* clientinfo; } ;
struct TYPE_10__ {size_t clientNum; scalar_t__* persistant; int* stats; } ;
struct TYPE_11__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,char*,float) ;
 int FUNC_1 (int,int,char*,float*) ;
 int FUNC_2 (int,int,int,int,int ,int ) ;
 int FUNC_3 (int,int,int,int,size_t,int*) ;
 int FUNC_4 (int,int,int,int,int ) ;
 int FUNC_5 (int,int,char*,float*) ;
 int FUNC_6 (int,int,int,int,float*) ;
 int FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*,int,char*,int,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_9 (int*) ;
 size_t VAR_24 ;
 TYPE_8__ VAR_25 ;
 TYPE_7__ VAR_26 ;
 TYPE_6__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static void FUNC_10( int VAR_31, score_t *VAR_32, float *VAR_33, float VAR_34, qboolean VAR_35 ) {
 char VAR_36[1024];
 vec3_t VAR_37;
 clientInfo_t *VAR_38;
 int VAR_39, VAR_40;

 if ( VAR_32->client < 0 || VAR_32->client >= VAR_27.maxclients ) {
  FUNC_7( "Bad score->client: %i\n", VAR_32->client );
  return;
 }

 VAR_38 = &VAR_27.clientinfo[VAR_32->client];

 VAR_39 = VAR_11 + (VAR_13 / 2);
 VAR_40 = VAR_12 + (VAR_13 / 2);


 if ( VAR_38->powerups & ( 1 << VAR_8 ) ) {
  if( VAR_35 ) {
   FUNC_2( VAR_39, VAR_31 - ( 32 - VAR_0 ) / 2, 32, 32, VAR_21, VAR_29 );
  }
  else {
   FUNC_2( VAR_39, VAR_31, 16, 16, VAR_21, VAR_29 );
  }
 } else if ( VAR_38->powerups & ( 1 << VAR_9 ) ) {
  if( VAR_35 ) {
   FUNC_2( VAR_39, VAR_31 - ( 32 - VAR_0 ) / 2, 32, 32, VAR_22, VAR_29 );
  }
  else {
   FUNC_2( VAR_39, VAR_31, 16, 16, VAR_22, VAR_29 );
  }
 } else if ( VAR_38->powerups & ( 1 << VAR_7 ) ) {
  if( VAR_35 ) {
   FUNC_2( VAR_39, VAR_31 - ( 32 - VAR_0 ) / 2, 32, 32, VAR_20, VAR_29 );
  }
  else {
   FUNC_2( VAR_39, VAR_31, 16, 16, VAR_20, VAR_29 );
  }
 } else {
  if ( VAR_38->botSkill > 0 && VAR_38->botSkill <= 5 ) {
   if ( VAR_26.integer ) {
    if( VAR_35 ) {
     FUNC_4( VAR_39, VAR_31 - ( 32 - VAR_0 ) / 2, 32, 32, VAR_27.media.botSkillShaders[ VAR_38->botSkill - 1 ] );
    }
    else {
     FUNC_4( VAR_39, VAR_31, 16, 16, VAR_27.media.botSkillShaders[ VAR_38->botSkill - 1 ] );
    }
   }
  } else if ( VAR_38->handicap < 100 ) {
   FUNC_8( VAR_36, sizeof( VAR_36 ), "%i", VAR_38->handicap );
   if ( VAR_27.gametype == VAR_3 )
    FUNC_5( VAR_39, VAR_31 - VAR_15/2, VAR_36, VAR_33 );
   else
    FUNC_5( VAR_39, VAR_31, VAR_36, VAR_33 );
  }


  if ( VAR_27.gametype == VAR_3 ) {
   FUNC_8( VAR_36, sizeof( VAR_36 ), "%i/%i", VAR_38->wins, VAR_38->losses );
   if( VAR_38->handicap < 100 && !VAR_38->botSkill ) {
    FUNC_5( VAR_39, VAR_31 + VAR_15/2, VAR_36, VAR_33 );
   }
   else {
    FUNC_5( VAR_39, VAR_31, VAR_36, VAR_33 );
   }
  }
 }


 FUNC_9( VAR_37 );
 VAR_37[VAR_24] = 180;
 if( VAR_35 ) {
  FUNC_3( VAR_40, VAR_31 - ( VAR_4 - VAR_0 ) / 2, VAR_4, VAR_4,
   VAR_32->client, VAR_37 );
 }
 else {
  FUNC_3( VAR_40, VAR_31, 16, 16, VAR_32->client, VAR_37 );
 }
 if ( VAR_32->ping == -1 ) {
  FUNC_8(VAR_36, sizeof(VAR_36),
   " connecting    %s", VAR_38->name);
 } else if ( VAR_38->team == VAR_23 ) {
  FUNC_8(VAR_36, sizeof(VAR_36),
   " SPECT %3i %4i %s", VAR_32->ping, VAR_32->time, VAR_38->name);
 } else {
  FUNC_8(VAR_36, sizeof(VAR_36),
   "%5i %4i %4i %s", VAR_32->score, VAR_32->ping, VAR_32->time, VAR_38->name);
 }


 if ( VAR_32->client == VAR_25.snap->ps.clientNum ) {
  float VAR_41[4];
  int VAR_42;

  VAR_28 = VAR_30;

  if ( VAR_25.snap->ps.persistant[VAR_6] == VAR_23
   || VAR_27.gametype >= VAR_2 ) {
   VAR_42 = -1;
  } else {
   VAR_42 = VAR_25.snap->ps.persistant[VAR_5] & ~VAR_10;
  }
  if ( VAR_42 == 0 ) {
   VAR_41[0] = 0;
   VAR_41[1] = 0;
   VAR_41[2] = 0.7f;
  } else if ( VAR_42 == 1 ) {
   VAR_41[0] = 0.7f;
   VAR_41[1] = 0;
   VAR_41[2] = 0;
  } else if ( VAR_42 == 2 ) {
   VAR_41[0] = 0.7f;
   VAR_41[1] = 0.7f;
   VAR_41[2] = 0;
  } else {
   VAR_41[0] = 0.7f;
   VAR_41[1] = 0.7f;
   VAR_41[2] = 0.7f;
  }

  VAR_41[3] = VAR_34 * 0.7;
  FUNC_6( VAR_14 + VAR_1 + (VAR_13 / 2), VAR_31,
   640 - VAR_14 - VAR_1, VAR_0+1, VAR_41 );
 }

 FUNC_0( VAR_14 + (VAR_13 / 2), VAR_31, VAR_36, VAR_34 );


 if ( VAR_25.snap->ps.stats[ VAR_16 ] & ( 1 << VAR_32->client ) ) {
  FUNC_1( VAR_39, VAR_31, "READY", VAR_33 );
 }
}
