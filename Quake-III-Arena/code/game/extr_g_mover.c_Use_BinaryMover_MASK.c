
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int trDuration; int trTime; } ;
struct TYPE_12__ {TYPE_1__ pos; int loopSound; } ;
struct TYPE_13__ {int flags; scalar_t__ moverState; int nextthink; int wait; scalar_t__ sound2to1; TYPE_2__ s; scalar_t__ sound1to2; struct TYPE_13__* teammaster; int soundLoop; struct TYPE_13__* activator; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_14__ {int time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int) ;
 TYPE_5__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*,int ) ;

void FUNC_3( gentity_t *VAR_8, gentity_t *VAR_9, gentity_t *VAR_10 ) {
 int VAR_11;
 int VAR_12;


 if ( VAR_8->flags & VAR_1 ) {
  FUNC_3( VAR_8->teammaster, VAR_9, VAR_10 );
  return;
 }

 VAR_8->activator = VAR_10;

 if ( VAR_8->moverState == VAR_4 ) {


  FUNC_1( VAR_8, VAR_2, VAR_6.time + 50 );


  if ( VAR_8->sound1to2 ) {
   FUNC_0( VAR_8, VAR_0, VAR_8->sound1to2 );
  }


  VAR_8->s.loopSound = VAR_8->soundLoop;


  if ( VAR_8->teammaster == VAR_8 || !VAR_8->teammaster ) {
   FUNC_2( VAR_8, VAR_7 );
  }
  return;
 }


 if ( VAR_8->moverState == VAR_5 ) {
  VAR_8->nextthink = VAR_6.time + VAR_8->wait;
  return;
 }


 if ( VAR_8->moverState == VAR_3 ) {
  VAR_11 = VAR_8->s.pos.trDuration;
  VAR_12 = VAR_6.time - VAR_8->s.pos.trTime;
  if ( VAR_12 > VAR_11 ) {
   VAR_12 = VAR_11;
  }

  FUNC_1( VAR_8, VAR_2, VAR_6.time - ( VAR_11 - VAR_12 ) );

  if ( VAR_8->sound1to2 ) {
   FUNC_0( VAR_8, VAR_0, VAR_8->sound1to2 );
  }
  return;
 }


 if ( VAR_8->moverState == VAR_2 ) {
  VAR_11 = VAR_8->s.pos.trDuration;
  VAR_12 = VAR_6.time - VAR_8->s.pos.trTime;
  if ( VAR_12 > VAR_11 ) {
   VAR_12 = VAR_11;
  }

  FUNC_1( VAR_8, VAR_3, VAR_6.time - ( VAR_11 - VAR_12 ) );

  if ( VAR_8->sound2to1 ) {
   FUNC_0( VAR_8, VAR_0, VAR_8->sound2to1 );
  }
  return;
 }
}
