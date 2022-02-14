
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ clientNum; scalar_t__ damageEvent; scalar_t__* persistant; scalar_t__ viewheight; scalar_t__ damageCount; int damagePitch; int damageYaw; } ;
typedef TYPE_3__ playerState_t ;
struct TYPE_14__ {scalar_t__ duckChange; int time; int duckTime; TYPE_2__* snap; scalar_t__ mapRestart; int thisFrameTeleport; } ;
struct TYPE_11__ {scalar_t__ pm_type; } ;
struct TYPE_12__ {TYPE_1__ ps; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void FUNC_5( playerState_t *VAR_7, playerState_t *VAR_8 ) {

 if ( VAR_7->clientNum != VAR_8->clientNum ) {
  VAR_4.thisFrameTeleport = VAR_6;

  *VAR_8 = *VAR_7;
 }


 if ( VAR_7->damageEvent != VAR_8->damageEvent && VAR_7->damageCount ) {
  FUNC_3( VAR_7->damageYaw, VAR_7->damagePitch, VAR_7->damageCount );
 }


 if ( VAR_7->persistant[VAR_0] != VAR_8->persistant[VAR_0] ) {
  FUNC_4();
 }

 if ( VAR_4.mapRestart ) {
  FUNC_4();
  VAR_4.mapRestart = VAR_5;
 }

 if ( VAR_4.snap->ps.pm_type != VAR_2
  && VAR_7->persistant[VAR_1] != VAR_3 ) {
  FUNC_1( VAR_7, VAR_8 );
 }


 FUNC_0();


 FUNC_2( VAR_7, VAR_8 );


 if ( VAR_7->viewheight != VAR_8->viewheight ) {
  VAR_4.duckChange = VAR_7->viewheight - VAR_8->viewheight;
  VAR_4.duckTime = VAR_4.time;
 }
}
