
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int teamname ;
typedef int orientation_t ;
struct TYPE_12__ {scalar_t__ team; char* modelName; char* skinName; char* headModelName; char* headSkinName; void* deferred; void** sounds; void* newAnims; scalar_t__ torsoModel; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_17__ {int string; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_11__ {int clientNum; scalar_t__ eType; } ;
struct TYPE_15__ {TYPE_1__ currentState; } ;
struct TYPE_14__ {int string; } ;
struct TYPE_13__ {scalar_t__ gametype; TYPE_2__* clientinfo; } ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (TYPE_2__*,char*,char*,char*,char*,char*) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ VAR_10 ;
 TYPE_7__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 char** VAR_13 ;
 TYPE_5__* VAR_14 ;
 TYPE_4__ VAR_15 ;
 TYPE_3__ VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ,int ,int,char*) ;
 void* FUNC_6 (int ,void*) ;
 int FUNC_7 (char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_8( clientInfo_t *VAR_19 ) {
 const char *VAR_20, *VAR_21;
 int VAR_22, VAR_23;
 const char *VAR_24;
 int VAR_25;
 char VAR_26[VAR_9];

 VAR_26[0] = 0;
 VAR_23 = VAR_18;
 if ( !FUNC_1( VAR_19, VAR_19->modelName, VAR_19->skinName, VAR_19->headModelName, VAR_19->headSkinName, VAR_26 ) ) {
  if ( VAR_12.integer ) {
   FUNC_0( "CG_RegisterClientModelname( %s, %s, %s, %s %s ) failed", VAR_19->modelName, VAR_19->skinName, VAR_19->headModelName, VAR_19->headSkinName, VAR_26 );
  }


  if( VAR_16.gametype >= VAR_6) {

   if( VAR_19->team == VAR_10 ) {
    FUNC_3(VAR_26, VAR_0, sizeof(VAR_26) );
   } else {
    FUNC_3(VAR_26, VAR_2, sizeof(VAR_26) );
   }
   if ( !FUNC_1( VAR_19, VAR_4, VAR_19->skinName, VAR_3, VAR_19->skinName, VAR_26 ) ) {
    FUNC_0( "DEFAULT_TEAM_MODEL / skin (%s/%s) failed to register", VAR_4, VAR_19->skinName );
   }
  } else {
   if ( !FUNC_1( VAR_19, VAR_1, "default", VAR_1, "default", VAR_26 ) ) {
    FUNC_0( "DEFAULT_MODEL (%s) failed to register", VAR_1 );
   }
  }
  VAR_23 = VAR_17;
 }

 VAR_19->newAnims = VAR_17;
 if ( VAR_19->torsoModel ) {
  orientation_t VAR_27;

  if ( FUNC_5( &VAR_27, VAR_19->torsoModel, 0, 0, 1, "tag_flag" ) ) {
   VAR_19->newAnims = VAR_18;
  }
 }


 VAR_20 = VAR_19->modelName;
 VAR_21 = (VAR_16.gametype >= VAR_6) ? VAR_4 : VAR_1;

 for ( VAR_22 = 0 ; VAR_22 < VAR_7 ; VAR_22++ ) {
  VAR_24 = VAR_13[VAR_22];
  if ( !VAR_24 ) {
   break;
  }
  VAR_19->sounds[VAR_22] = 0;

  if (VAR_23) {
   VAR_19->sounds[VAR_22] = FUNC_6( FUNC_7("sound/player/%s/%s", VAR_20, VAR_24 + 1), VAR_17 );
  }
  if ( !VAR_19->sounds[VAR_22] ) {
   VAR_19->sounds[VAR_22] = FUNC_6( FUNC_7("sound/player/%s/%s", VAR_21, VAR_24 + 1), VAR_17 );
  }
 }

 VAR_19->deferred = VAR_17;



 VAR_25 = VAR_19 - VAR_16.clientinfo;
 for ( VAR_22 = 0 ; VAR_22 < VAR_8 ; VAR_22++ ) {
  if ( VAR_14[VAR_22].currentState.clientNum == VAR_25
   && VAR_14[VAR_22].currentState.eType == VAR_5 ) {
   FUNC_2( &VAR_14[VAR_22] );
  }
 }
}
