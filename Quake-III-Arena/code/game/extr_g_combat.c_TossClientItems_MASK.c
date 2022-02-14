
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int gitem_t ;
struct TYPE_12__ {int weapon; } ;
struct TYPE_17__ {int count; TYPE_5__* client; TYPE_1__ s; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {scalar_t__ time; } ;
struct TYPE_15__ {scalar_t__ weaponstate; int* stats; scalar_t__* powerups; scalar_t__* ammo; } ;
struct TYPE_13__ {int weapon; } ;
struct TYPE_14__ {TYPE_2__ cmd; } ;
struct TYPE_16__ {TYPE_4__ ps; TYPE_3__ pers; } ;


 int * FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 TYPE_6__* FUNC_2 (TYPE_6__*,int *,float) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_8__ VAR_7 ;
 TYPE_7__ VAR_8 ;

void FUNC_3( gentity_t *VAR_9 ) {
 gitem_t *VAR_10;
 int VAR_11;
 float VAR_12;
 int VAR_13;
 gentity_t *VAR_14;


 VAR_11 = VAR_9->s.weapon;





 if ( VAR_11 == VAR_5 || VAR_11 == VAR_4 ) {
  if ( VAR_9->client->ps.weaponstate == VAR_3 ) {
   VAR_11 = VAR_9->client->pers.cmd.weapon;
  }
  if ( !( VAR_9->client->ps.stats[VAR_2] & ( 1 << VAR_11 ) ) ) {
   VAR_11 = VAR_6;
  }
 }

 if ( VAR_11 > VAR_5 && VAR_11 != VAR_4 &&
  VAR_9->client->ps.ammo[ VAR_11 ] ) {

  VAR_10 = FUNC_1( VAR_11 );


  FUNC_2( VAR_9, VAR_10, 0 );
 }


 if ( VAR_7.integer != VAR_0 ) {
  VAR_12 = 45;
  for ( VAR_13 = 1 ; VAR_13 < VAR_1 ; VAR_13++ ) {
   if ( VAR_9->client->ps.powerups[ VAR_13 ] > VAR_8.time ) {
    VAR_10 = FUNC_0( VAR_13 );
    if ( !VAR_10 ) {
     continue;
    }
    VAR_14 = FUNC_2( VAR_9, VAR_10, VAR_12 );

    VAR_14->count = ( VAR_9->client->ps.powerups[ VAR_13 ] - VAR_8.time ) / 1000;
    if ( VAR_14->count < 1 ) {
     VAR_14->count = 1;
    }
    VAR_12 += 45;
   }
  }
 }
}
