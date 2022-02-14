
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int svFlags; int contents; } ;
struct TYPE_11__ {int trBase; } ;
struct TYPE_12__ {void* eventParm; TYPE_2__ pos; int eFlags; } ;
struct TYPE_14__ {scalar_t__ nextthink; TYPE_4__ r; TYPE_3__ s; scalar_t__ speed; TYPE_1__* item; struct TYPE_14__* teamchain; struct TYPE_14__* teammaster; scalar_t__ team; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_10__ {scalar_t__ giType; scalar_t__ giTag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,int ) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 TYPE_5__* FUNC_3 (int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_5__*) ;

void FUNC_6( gentity_t *VAR_10 ) {

 if (VAR_10->team) {
  gentity_t *VAR_11;
  int VAR_12;
  int VAR_13;

  if ( !VAR_10->teammaster ) {
   FUNC_1( "RespawnItem: bad teammaster");
  }
  VAR_11 = VAR_10->teammaster;

  for (VAR_12 = 0, VAR_10 = VAR_11; VAR_10; VAR_10 = VAR_10->teamchain, VAR_12++)
   ;

  VAR_13 = FUNC_4() % VAR_12;

  for (VAR_12 = 0, VAR_10 = VAR_11; VAR_12 < VAR_13; VAR_10 = VAR_10->teamchain, VAR_12++)
   ;
 }

 VAR_10->r.contents = VAR_0;
 VAR_10->s.eFlags &= ~VAR_1;
 VAR_10->r.svFlags &= ~VAR_9;
 FUNC_5 (VAR_10);

 if ( VAR_10->item->giType == VAR_7 ) {

  gentity_t *VAR_14;


  if (VAR_10->speed) {
   VAR_14 = FUNC_3( VAR_10->s.pos.trBase, VAR_2 );
  }
  else {
   VAR_14 = FUNC_3( VAR_10->s.pos.trBase, VAR_3 );
  }
  VAR_14->s.eventParm = FUNC_2( "sound/items/poweruprespawn.wav" );
  VAR_14->r.svFlags |= VAR_8;
 }

 if ( VAR_10->item->giType == VAR_6 && VAR_10->item->giTag == VAR_5 ) {

  gentity_t *VAR_15;


  if (VAR_10->speed) {
   VAR_15 = FUNC_3( VAR_10->s.pos.trBase, VAR_2 );
  }
  else {
   VAR_15 = FUNC_3( VAR_10->s.pos.trBase, VAR_3 );
  }
  VAR_15->s.eventParm = FUNC_2( "sound/items/kamikazerespawn.wav" );
  VAR_15->r.svFlags |= VAR_8;
 }


 FUNC_0( VAR_10, VAR_4, 0 );

 VAR_10->nextthink = 0;
}
