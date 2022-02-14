
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int startsolid; } ;
typedef TYPE_1__ trace_t ;
typedef int qboolean ;
struct TYPE_12__ {scalar_t__ eType; scalar_t__ solid; int modelindex; } ;
typedef TYPE_2__ entityState_t ;
typedef int clipHandle_t ;
struct TYPE_13__ {TYPE_2__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_16__ {scalar_t__* stats; scalar_t__ pm_type; scalar_t__ jumppad_frame; scalar_t__ pmove_framecount; scalar_t__ jumppad_ent; int origin; } ;
struct TYPE_15__ {TYPE_9__ predictedPlayerState; int hyperspace; } ;
struct TYPE_14__ {int maxs; int mins; } ;


 int FUNC_0 (TYPE_9__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 TYPE_6__ VAR_9 ;
 TYPE_3__** VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_12;
 trace_t VAR_13;
 entityState_t *VAR_14;
 clipHandle_t VAR_15;
 centity_t *VAR_16;
 qboolean VAR_17;


 if ( VAR_7.predictedPlayerState.stats[VAR_6] <= 0 ) {
  return;
 }

 VAR_17 = ( VAR_7.predictedPlayerState.pm_type == VAR_4 );

 if ( VAR_7.predictedPlayerState.pm_type != VAR_3 && !VAR_17 ) {
  return;
 }

 for ( VAR_12 = 0 ; VAR_12 < VAR_8 ; VAR_12++ ) {
  VAR_16 = VAR_10[ VAR_12 ];
  VAR_14 = &VAR_16->currentState;

  if ( VAR_14->eType == VAR_0 && !VAR_17 ) {
   FUNC_1( VAR_16 );
   continue;
  }

  if ( VAR_14->solid != VAR_5 ) {
   continue;
  }

  VAR_15 = FUNC_3( VAR_14->modelindex );
  if ( !VAR_15 ) {
   continue;
  }

  FUNC_2( &VAR_13, VAR_7.predictedPlayerState.origin, VAR_7.predictedPlayerState.origin,
   VAR_9.mins, VAR_9.maxs, VAR_15, -1 );

  if ( !VAR_13.startsolid ) {
   continue;
  }

  if ( VAR_14->eType == VAR_2 ) {
   VAR_7.hyperspace = VAR_11;
  } else if ( VAR_14->eType == VAR_1 ) {
   FUNC_0( &VAR_7.predictedPlayerState, VAR_14 );
  }
 }


 if ( VAR_7.predictedPlayerState.jumppad_frame != VAR_7.predictedPlayerState.pmove_framecount ) {
  VAR_7.predictedPlayerState.jumppad_frame = 0;
  VAR_7.predictedPlayerState.jumppad_ent = 0;
 }
}
