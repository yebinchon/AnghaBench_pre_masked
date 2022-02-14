
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {scalar_t__ trType; } ;
struct TYPE_14__ {scalar_t__ number; int groundEntityNum; TYPE_10__ apos; TYPE_10__ pos; } ;
struct TYPE_12__ {scalar_t__ trType; } ;
struct TYPE_13__ {TYPE_1__ pos; } ;
struct TYPE_16__ {int lerpOrigin; TYPE_3__ currentState; int lerpAngles; scalar_t__ interpolate; TYPE_2__ nextState; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_18__ {int time; TYPE_4__* snap; TYPE_5__ predictedPlayerEntity; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_15__ {int serverTime; } ;


 int FUNC_0 (TYPE_10__*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;

__attribute__((used)) static void FUNC_3( centity_t *VAR_5 ) {


 if ( !VAR_4.integer ) {

  if ( VAR_5->currentState.number < VAR_0 ) {
   VAR_5->currentState.pos.trType = VAR_1;
   VAR_5->nextState.pos.trType = VAR_1;
  }
 }

 if ( VAR_5->interpolate && VAR_5->currentState.pos.trType == VAR_1 ) {
  FUNC_2( VAR_5 );
  return;
 }



 if ( VAR_5->interpolate && VAR_5->currentState.pos.trType == VAR_2 &&
           VAR_5->currentState.number < VAR_0) {
  FUNC_2( VAR_5 );
  return;
 }


 FUNC_0( &VAR_5->currentState.pos, VAR_3.time, VAR_5->lerpOrigin );
 FUNC_0( &VAR_5->currentState.apos, VAR_3.time, VAR_5->lerpAngles );



 if ( VAR_5 != &VAR_3.predictedPlayerEntity ) {
  FUNC_1( VAR_5->lerpOrigin, VAR_5->currentState.groundEntityNum,
  VAR_3.snap->serverTime, VAR_3.time, VAR_5->lerpOrigin );
 }
}
