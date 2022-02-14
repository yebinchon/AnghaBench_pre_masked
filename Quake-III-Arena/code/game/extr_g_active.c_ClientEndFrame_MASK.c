
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


struct TYPE_18__ {int eFlags; } ;
struct TYPE_21__ {size_t health; TYPE_2__* client; TYPE_15__ s; } ;
typedef TYPE_3__ gentity_t ;
typedef int clientPersistant_t ;
struct TYPE_26__ {scalar_t__* powerups; size_t* stats; scalar_t__ pm_type; int commandTime; int viewangles; } ;
struct TYPE_25__ {size_t giTag; } ;
struct TYPE_24__ {scalar_t__ integer; } ;
struct TYPE_23__ {int integer; } ;
struct TYPE_22__ {scalar_t__ time; scalar_t__ intermissiontime; } ;
struct TYPE_19__ {scalar_t__ sessionTeam; } ;
struct TYPE_20__ {scalar_t__ invulnerabilityTime; int lastCmdTime; TYPE_9__ ps; int pers; TYPE_1__ sess; } ;


 int FUNC_0 (TYPE_9__*,TYPE_15__*,int ) ;
 int FUNC_1 (TYPE_9__*,TYPE_15__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int ) ;
 TYPE_7__* VAR_11 ;
 TYPE_6__ VAR_12 ;
 TYPE_5__* VAR_13 ;
 TYPE_4__ VAR_14 ;
 int VAR_15 ;

void FUNC_8( gentity_t *VAR_16 ) {
 int VAR_17;
 clientPersistant_t *VAR_18;

 if ( VAR_16->client->sess.sessionTeam == VAR_10 ) {
  FUNC_6( VAR_16 );
  return;
 }

 VAR_18 = &VAR_16->client->pers;


 for ( VAR_17 = 0 ; VAR_17 < VAR_1 ; VAR_17++ ) {
  if ( VAR_16->client->ps.powerups[ VAR_17 ] < VAR_14.time ) {
   VAR_16->client->ps.powerups[ VAR_17 ] = 0;
  }
 }
 if ( VAR_14.intermissiontime ) {
  return;
 }


 FUNC_4 (VAR_16);


 FUNC_3 (VAR_16);


 if ( VAR_14.time - VAR_16->client->lastCmdTime > 1000 ) {
  VAR_16->s.eFlags |= VAR_0;
 } else {
  VAR_16->s.eFlags &= ~VAR_0;
 }

 VAR_16->client->ps.stats[VAR_8] = VAR_16->health;

 FUNC_2 (VAR_16);


 if (VAR_12.integer) {
  FUNC_1( &VAR_16->client->ps, &VAR_16->s, VAR_16->client->ps.commandTime, VAR_15 );
 }
 else {
  FUNC_0( &VAR_16->client->ps, &VAR_16->s, VAR_15 );
 }
 FUNC_5( &VAR_16->client->ps );




}
