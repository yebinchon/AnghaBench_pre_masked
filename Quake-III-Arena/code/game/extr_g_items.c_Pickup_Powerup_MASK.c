
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int vec3_t ;
struct TYPE_23__ {double fraction; } ;
typedef TYPE_7__ trace_t ;
struct TYPE_20__ {int trBase; } ;
struct TYPE_21__ {TYPE_4__ pos; } ;
struct TYPE_24__ {int count; TYPE_5__ s; TYPE_9__* client; TYPE_1__* item; } ;
typedef TYPE_8__ gentity_t ;
struct TYPE_22__ {int* powerups; scalar_t__* stats; int * persistant; int origin; int viewangles; } ;
struct TYPE_19__ {scalar_t__ sessionTeam; } ;
struct TYPE_18__ {scalar_t__ connected; } ;
struct TYPE_25__ {TYPE_6__ ps; TYPE_3__ sess; TYPE_2__ pers; } ;
typedef TYPE_9__ gclient_t ;
struct TYPE_17__ {size_t giTag; int quantity; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {int time; int maxclients; TYPE_9__* clients; } ;


 int FUNC_0 (int ,int ,int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_12__ VAR_8 ;
 TYPE_11__ VAR_9 ;
 int FUNC_4 (TYPE_7__*,int ,int *,int *,int ,int ,int ) ;

int FUNC_5( gentity_t *VAR_10, gentity_t *VAR_11 ) {
 int VAR_12;
 int VAR_13;
 gclient_t *VAR_14;

 if ( !VAR_11->client->ps.powerups[VAR_10->item->giTag] ) {


  VAR_11->client->ps.powerups[VAR_10->item->giTag] =
   VAR_9.time - ( VAR_9.time % 1000 );
 }

 if ( VAR_10->count ) {
  VAR_12 = VAR_10->count;
 } else {
  VAR_12 = VAR_10->item->quantity;
 }

 VAR_11->client->ps.powerups[VAR_10->item->giTag] += VAR_12 * 1000;


 for ( VAR_13 = 0 ; VAR_13 < VAR_9.maxclients ; VAR_13++ ) {
  vec3_t VAR_15;
  float VAR_16;
  vec3_t VAR_17;
  trace_t VAR_18;

  VAR_14 = &VAR_9.clients[VAR_13];
  if ( VAR_14 == VAR_11->client ) {
   continue;
  }
  if ( VAR_14->pers.connected == VAR_1 ) {
   continue;
  }
  if ( VAR_14->ps.stats[VAR_7] <= 0 ) {
   continue;
  }



   if ( VAR_8.integer >= VAR_3 && VAR_11->client->sess.sessionTeam == VAR_14->sess.sessionTeam ) {
      continue;
    }


  FUNC_3( VAR_10->s.pos.trBase, VAR_14->ps.origin, VAR_15 );
  VAR_16 = FUNC_2( VAR_15 );
  if ( VAR_16 > 192 ) {
   continue;
  }


  FUNC_0( VAR_14->ps.viewangles, VAR_17, ((void*)0), ((void*)0) );
  if ( FUNC_1( VAR_15, VAR_17 ) < 0.4 ) {
   continue;
  }


  FUNC_4( &VAR_18, VAR_14->ps.origin, ((void*)0), ((void*)0), VAR_10->s.pos.trBase, VAR_2, VAR_0 );
  if ( VAR_18.fraction != 1.0 ) {
   continue;
  }


  VAR_14->ps.persistant[VAR_4] ^= VAR_5;
 }
 return VAR_6;
}
