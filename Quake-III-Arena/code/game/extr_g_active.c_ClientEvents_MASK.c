
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vec3_t ;
typedef int gitem_t ;
struct TYPE_18__ {int eType; } ;
struct TYPE_21__ {int count; TYPE_5__* client; int health; int spawnflags; int pain_debounce_time; TYPE_1__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_20__ {int eventSequence; int* events; int* powerups; int generic1; int * stats; int origin; } ;
struct TYPE_19__ {int sessionTeam; } ;
struct TYPE_22__ {int invulnerabilityTime; int portalID; TYPE_3__ ps; TYPE_2__ sess; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_25__ {int integer; } ;
struct TYPE_24__ {int integer; } ;
struct TYPE_23__ {int time; } ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_4__*,int *,int *,int *,int *,int,int ,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int) ;
 TYPE_8__ VAR_11 ;
 TYPE_7__ VAR_12 ;
 TYPE_6__ VAR_13 ;

void FUNC_11( gentity_t *VAR_14, int VAR_15 ) {
 int VAR_16, VAR_17;
 int VAR_18;
 gclient_t *VAR_19;
 int VAR_20;
 vec3_t VAR_21;
 vec3_t VAR_22, VAR_23;

 gitem_t *VAR_24;
 gentity_t *VAR_25;

 VAR_19 = VAR_14->client;

 if ( VAR_15 < VAR_19->ps.eventSequence - VAR_3 ) {
  VAR_15 = VAR_19->ps.eventSequence - VAR_3;
 }
 for ( VAR_16 = VAR_15 ; VAR_16 < VAR_19->ps.eventSequence ; VAR_16++ ) {
  VAR_18 = VAR_19->ps.events[ VAR_16 & (VAR_3-1) ];

  switch ( VAR_18 ) {
  case 134:
  case 135:
   if ( VAR_14->s.eType != VAR_1 ) {
    break;
   }
   if ( VAR_11.integer & VAR_0 ) {
    break;
   }
   if ( VAR_18 == 135 ) {
    VAR_20 = 10;
   } else {
    VAR_20 = 5;
   }
   FUNC_10 (VAR_21, 0, 0, 1);
   VAR_14->pain_debounce_time = VAR_13.time + 200;
   FUNC_6 (VAR_14, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_20, 0, VAR_4);
   break;

  case 133:
   FUNC_5( VAR_14 );
   break;

  case 132:

   VAR_24 = ((void*)0);
   VAR_17 = 0;

   if ( VAR_14->client->ps.powerups[ VAR_7 ] ) {
    VAR_24 = FUNC_1( VAR_7 );
    VAR_17 = VAR_7;
   } else if ( VAR_14->client->ps.powerups[ VAR_5 ] ) {
    VAR_24 = FUNC_1( VAR_5 );
    VAR_17 = VAR_5;
   } else if ( VAR_14->client->ps.powerups[ VAR_6 ] ) {
    VAR_24 = FUNC_1( VAR_6 );
    VAR_17 = VAR_6;
   }

   if ( VAR_24 ) {
    VAR_25 = FUNC_4( VAR_14, VAR_24, 0 );

    VAR_25->count = ( VAR_14->client->ps.powerups[ VAR_17 ] - VAR_13.time ) / 1000;
    if ( VAR_25->count < 1 ) {
     VAR_25->count = 1;
    }

    VAR_14->client->ps.powerups[ VAR_17 ] = 0;
   }
   FUNC_8( VAR_14->client->ps.origin, VAR_22, VAR_23 );
   FUNC_9( VAR_14, VAR_22, VAR_23 );
   break;

  case 131:
   VAR_14->health = VAR_14->client->ps.stats[VAR_8] + 25;

   break;
  default:
   break;
  }
 }

}
