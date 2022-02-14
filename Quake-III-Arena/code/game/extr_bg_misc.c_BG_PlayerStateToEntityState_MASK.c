
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_9__ {scalar_t__ pm_type; scalar_t__* stats; int externalEvent; int entityEventSequence; int eventSequence; int* events; int generic1; int loopSound; scalar_t__* powerups; int groundEntityNum; int weapon; int * eventParms; int externalEventParm; int eFlags; int clientNum; int torsoAnim; int legsAnim; int movementDir; int viewangles; int velocity; int origin; } ;
typedef TYPE_3__ playerState_t ;
struct TYPE_8__ {int trBase; void* trType; } ;
struct TYPE_7__ {int trDelta; int trBase; void* trType; } ;
struct TYPE_10__ {int event; int powerups; int generic1; int loopSound; int groundEntityNum; int weapon; int eventParm; int eFlags; int clientNum; int torsoAnim; int legsAnim; int * angles2; TYPE_2__ apos; TYPE_1__ pos; int number; void* eType; } ;
typedef TYPE_4__ entityState_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ) ;
 void* VAR_9 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_10 ;

void FUNC_2( playerState_t *VAR_11, entityState_t *VAR_12, qboolean VAR_13 ) {
 int VAR_14;

 if ( VAR_11->pm_type == VAR_6 || VAR_11->pm_type == VAR_7 ) {
  VAR_12->eType = VAR_1;
 } else if ( VAR_11->stats[VAR_8] <= VAR_3 ) {
  VAR_12->eType = VAR_1;
 } else {
  VAR_12->eType = VAR_2;
 }

 VAR_12->number = VAR_11->clientNum;

 VAR_12->pos.trType = VAR_9;
 FUNC_1( VAR_11->origin, VAR_12->pos.trBase );
 if ( VAR_13 ) {
  FUNC_0( VAR_12->pos.trBase );
 }

 FUNC_1( VAR_11->velocity, VAR_12->pos.trDelta );

 VAR_12->apos.trType = VAR_9;
 FUNC_1( VAR_11->viewangles, VAR_12->apos.trBase );
 if ( VAR_13 ) {
  FUNC_0( VAR_12->apos.trBase );
 }

 VAR_12->angles2[VAR_10] = VAR_11->movementDir;
 VAR_12->legsAnim = VAR_11->legsAnim;
 VAR_12->torsoAnim = VAR_11->torsoAnim;
 VAR_12->clientNum = VAR_11->clientNum;

 VAR_12->eFlags = VAR_11->eFlags;
 if ( VAR_11->stats[VAR_8] <= 0 ) {
  VAR_12->eFlags |= VAR_0;
 } else {
  VAR_12->eFlags &= ~VAR_0;
 }

 if ( VAR_11->externalEvent ) {
  VAR_12->event = VAR_11->externalEvent;
  VAR_12->eventParm = VAR_11->externalEventParm;
 } else if ( VAR_11->entityEventSequence < VAR_11->eventSequence ) {
  int VAR_15;

  if ( VAR_11->entityEventSequence < VAR_11->eventSequence - VAR_5) {
   VAR_11->entityEventSequence = VAR_11->eventSequence - VAR_5;
  }
  VAR_15 = VAR_11->entityEventSequence & (VAR_5-1);
  VAR_12->event = VAR_11->events[ VAR_15 ] | ( ( VAR_11->entityEventSequence & 3 ) << 8 );
  VAR_12->eventParm = VAR_11->eventParms[ VAR_15 ];
  VAR_11->entityEventSequence++;
 }

 VAR_12->weapon = VAR_11->weapon;
 VAR_12->groundEntityNum = VAR_11->groundEntityNum;

 VAR_12->powerups = 0;
 for ( VAR_14 = 0 ; VAR_14 < VAR_4 ; VAR_14++ ) {
  if ( VAR_11->powerups[ VAR_14 ] ) {
   VAR_12->powerups |= 1 << VAR_14;
  }
 }

 VAR_12->loopSound = VAR_11->loopSound;
 VAR_12->generic1 = VAR_11->generic1;
}
