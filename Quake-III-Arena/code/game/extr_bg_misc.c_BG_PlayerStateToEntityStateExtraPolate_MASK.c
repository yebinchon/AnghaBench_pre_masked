
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
struct TYPE_8__ {int trBase; int trType; } ;
struct TYPE_7__ {int trTime; int trDuration; int trDelta; int trBase; int trType; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_11 ;

void FUNC_2( playerState_t *VAR_12, entityState_t *VAR_13, int VAR_14, qboolean VAR_15 ) {
 int VAR_16;

 if ( VAR_12->pm_type == VAR_6 || VAR_12->pm_type == VAR_7 ) {
  VAR_13->eType = VAR_1;
 } else if ( VAR_12->stats[VAR_8] <= VAR_3 ) {
  VAR_13->eType = VAR_1;
 } else {
  VAR_13->eType = VAR_2;
 }

 VAR_13->number = VAR_12->clientNum;

 VAR_13->pos.trType = VAR_10;
 FUNC_1( VAR_12->origin, VAR_13->pos.trBase );
 if ( VAR_15 ) {
  FUNC_0( VAR_13->pos.trBase );
 }

 FUNC_1( VAR_12->velocity, VAR_13->pos.trDelta );

 VAR_13->pos.trTime = VAR_14;

 VAR_13->pos.trDuration = 50;

 VAR_13->apos.trType = VAR_9;
 FUNC_1( VAR_12->viewangles, VAR_13->apos.trBase );
 if ( VAR_15 ) {
  FUNC_0( VAR_13->apos.trBase );
 }

 VAR_13->angles2[VAR_11] = VAR_12->movementDir;
 VAR_13->legsAnim = VAR_12->legsAnim;
 VAR_13->torsoAnim = VAR_12->torsoAnim;
 VAR_13->clientNum = VAR_12->clientNum;

 VAR_13->eFlags = VAR_12->eFlags;
 if ( VAR_12->stats[VAR_8] <= 0 ) {
  VAR_13->eFlags |= VAR_0;
 } else {
  VAR_13->eFlags &= ~VAR_0;
 }

 if ( VAR_12->externalEvent ) {
  VAR_13->event = VAR_12->externalEvent;
  VAR_13->eventParm = VAR_12->externalEventParm;
 } else if ( VAR_12->entityEventSequence < VAR_12->eventSequence ) {
  int VAR_17;

  if ( VAR_12->entityEventSequence < VAR_12->eventSequence - VAR_5) {
   VAR_12->entityEventSequence = VAR_12->eventSequence - VAR_5;
  }
  VAR_17 = VAR_12->entityEventSequence & (VAR_5-1);
  VAR_13->event = VAR_12->events[ VAR_17 ] | ( ( VAR_12->entityEventSequence & 3 ) << 8 );
  VAR_13->eventParm = VAR_12->eventParms[ VAR_17 ];
  VAR_12->entityEventSequence++;
 }

 VAR_13->weapon = VAR_12->weapon;
 VAR_13->groundEntityNum = VAR_12->groundEntityNum;

 VAR_13->powerups = 0;
 for ( VAR_16 = 0 ; VAR_16 < VAR_4 ; VAR_16++ ) {
  if ( VAR_12->powerups[ VAR_16 ] ) {
   VAR_13->powerups |= 1 << VAR_16;
  }
 }

 VAR_13->loopSound = VAR_12->loopSound;
 VAR_13->generic1 = VAR_12->generic1;
}
