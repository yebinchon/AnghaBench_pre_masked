
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


typedef int qboolean ;
struct TYPE_16__ {scalar_t__ client; } ;
struct TYPE_9__ {scalar_t__ pm_type; } ;
struct TYPE_15__ {int deferredPlayerLoading; scalar_t__* teamScores; int numScores; TYPE_8__* scores; TYPE_3__* snap; scalar_t__* killerName; int scoreFadeTime; TYPE_1__ predictedPlayerState; scalar_t__ showScores; scalar_t__ warmup; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_12__ {int scoreboardName; int scoreboardTime; int scoreboardPing; int scoreboardScore; } ;
struct TYPE_13__ {scalar_t__ gametype; TYPE_4__ media; } ;
struct TYPE_10__ {scalar_t__* persistant; scalar_t__ clientNum; } ;
struct TYPE_11__ {TYPE_2__ ps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,char*,float) ;
 int FUNC_1 (int,TYPE_8__*,float*,float,int) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int,int,float,scalar_t__) ;
 float* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__,float,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_7__ VAR_26 ;
 TYPE_6__ VAR_27 ;
 TYPE_5__ VAR_28 ;
 float* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 char* FUNC_9 (char*,scalar_t__,...) ;

qboolean FUNC_10( void ) {
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
 float VAR_39;
 float *VAR_40;
 char *VAR_41;
 int VAR_42;
 int VAR_43;
 int VAR_44, VAR_45;


 if ( VAR_27.integer ) {
  VAR_26.deferredPlayerLoading = 0;
  return VAR_31;
 }

 if ( VAR_28.gametype == VAR_3 && VAR_26.predictedPlayerState.pm_type == VAR_9 ) {
  VAR_26.deferredPlayerLoading = 0;
  return VAR_31;
 }


 if ( VAR_26.warmup && !VAR_26.showScores ) {
  return VAR_31;
 }

 if ( VAR_26.showScores || VAR_26.predictedPlayerState.pm_type == VAR_8 ||
   VAR_26.predictedPlayerState.pm_type == VAR_9 ) {
  VAR_39 = 1.0;
  VAR_40 = VAR_29;
 } else {
  VAR_40 = FUNC_5( VAR_26.scoreFadeTime, VAR_2 );

  if ( !VAR_40 ) {

   VAR_26.deferredPlayerLoading = 0;
   VAR_26.killerName[0] = 0;
   return VAR_31;
  }
  VAR_39 = *VAR_40;
 }



 if ( VAR_26.killerName[0] ) {
  VAR_41 = FUNC_9("Fragged by %s", *VAR_26.killerName );
  VAR_35 = FUNC_3( VAR_41 ) * VAR_1;
  VAR_33 = ( VAR_21 - VAR_35 ) / 2;
  VAR_34 = 40;
  FUNC_0( VAR_33, VAR_34, VAR_41, VAR_39 );
 }


 if ( VAR_28.gametype < VAR_4) {
  if (VAR_26.snap->ps.persistant[VAR_7] != VAR_25 ) {
   VAR_41 = FUNC_9("%s place with %i",
    FUNC_7( VAR_26.snap->ps.persistant[VAR_5] + 1 ),
    VAR_26.snap->ps.persistant[VAR_6] );
   VAR_35 = FUNC_3( VAR_41 ) * VAR_1;
   VAR_33 = ( VAR_21 - VAR_35 ) / 2;
   VAR_34 = 60;
   FUNC_0( VAR_33, VAR_34, VAR_41, VAR_39 );
  }
 } else {
  if ( VAR_26.teamScores[0] == VAR_26.teamScores[1] ) {
   VAR_41 = FUNC_9("Teams are tied at %i", VAR_26.teamScores[0] );
  } else if ( VAR_26.teamScores[0] >= VAR_26.teamScores[1] ) {
   VAR_41 = FUNC_9("Red leads %i to %i",VAR_26.teamScores[0], VAR_26.teamScores[1] );
  } else {
   VAR_41 = FUNC_9("Blue leads %i to %i",VAR_26.teamScores[1], VAR_26.teamScores[0] );
  }

  VAR_35 = FUNC_3( VAR_41 ) * VAR_1;
  VAR_33 = ( VAR_21 - VAR_35 ) / 2;
  VAR_34 = 60;
  FUNC_0( VAR_33, VAR_34, VAR_41, VAR_39 );
 }


 VAR_34 = VAR_10;

 FUNC_2( VAR_18 + (VAR_17 / 2), VAR_34, 64, 32, VAR_28.media.scoreboardScore );
 FUNC_2( VAR_16 - (VAR_17 / 2), VAR_34, 64, 32, VAR_28.media.scoreboardPing );
 FUNC_2( VAR_19 - (VAR_17 / 2), VAR_34, 64, 32, VAR_28.media.scoreboardTime );
 FUNC_2( VAR_14 - (VAR_17 / 2), VAR_34, 64, 32, VAR_28.media.scoreboardName );

 VAR_34 = VAR_20;


 if ( VAR_26.numScores > VAR_13 ) {
  VAR_42 = VAR_12;
  VAR_43 = VAR_11;
  VAR_44 = 8;
  VAR_45 = 16;
 } else {
  VAR_42 = VAR_13;
  VAR_43 = VAR_15;
  VAR_44 = 16;
  VAR_45 = 16;
 }

 VAR_30 = VAR_31;

 if ( VAR_28.gametype >= VAR_4 ) {



  VAR_34 += VAR_43/2;

  if ( VAR_26.teamScores[0] >= VAR_26.teamScores[1] ) {
   VAR_37 = FUNC_8( VAR_34, VAR_24, VAR_39, VAR_42, VAR_43 );
   FUNC_4( 0, VAR_34 - VAR_44, 640, VAR_37 * VAR_43 + VAR_45, 0.33f, VAR_24 );
   VAR_34 += (VAR_37 * VAR_43) + VAR_0;
   VAR_42 -= VAR_37;
   VAR_38 = FUNC_8( VAR_34, VAR_22, VAR_39, VAR_42, VAR_43 );
   FUNC_4( 0, VAR_34 - VAR_44, 640, VAR_38 * VAR_43 + VAR_45, 0.33f, VAR_22 );
   VAR_34 += (VAR_38 * VAR_43) + VAR_0;
   VAR_42 -= VAR_38;
  } else {
   VAR_37 = FUNC_8( VAR_34, VAR_22, VAR_39, VAR_42, VAR_43 );
   FUNC_4( 0, VAR_34 - VAR_44, 640, VAR_37 * VAR_43 + VAR_45, 0.33f, VAR_22 );
   VAR_34 += (VAR_37 * VAR_43) + VAR_0;
   VAR_42 -= VAR_37;
   VAR_38 = FUNC_8( VAR_34, VAR_24, VAR_39, VAR_42, VAR_43 );
   FUNC_4( 0, VAR_34 - VAR_44, 640, VAR_38 * VAR_43 + VAR_45, 0.33f, VAR_24 );
   VAR_34 += (VAR_38 * VAR_43) + VAR_0;
   VAR_42 -= VAR_38;
  }
  VAR_37 = FUNC_8( VAR_34, VAR_25, VAR_39, VAR_42, VAR_43 );
  VAR_34 += (VAR_37 * VAR_43) + VAR_0;

 } else {



  VAR_37 = FUNC_8( VAR_34, VAR_23, VAR_39, VAR_42, VAR_43 );
  VAR_34 += (VAR_37 * VAR_43) + VAR_0;
  VAR_38 = FUNC_8( VAR_34, VAR_25, VAR_39, VAR_42 - VAR_37, VAR_43 );
  VAR_34 += (VAR_38 * VAR_43) + VAR_0;
 }

 if (!VAR_30) {

  for ( VAR_36 = 0 ; VAR_36 < VAR_26.numScores ; VAR_36++ ) {
   if ( VAR_26.scores[VAR_36].client == VAR_26.snap->ps.clientNum ) {
    FUNC_1( VAR_34, &VAR_26.scores[VAR_36], VAR_40, VAR_39, VAR_43 == VAR_15 );
    break;
   }
  }
 }


 if ( ++VAR_26.deferredPlayerLoading > 10 ) {
  FUNC_6();
 }

 return VAR_32;
}
