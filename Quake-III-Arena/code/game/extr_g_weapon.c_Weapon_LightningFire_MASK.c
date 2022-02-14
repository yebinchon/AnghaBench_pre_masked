
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_19__ {int normal; } ;
struct TYPE_20__ {int entityNum; int surfaceFlags; TYPE_3__ plane; int endpos; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_18__ {int number; int otherEntityNum; void* eventParm; int weapon; int origin2; } ;
struct TYPE_21__ {TYPE_2__ s; TYPE_1__* client; scalar_t__ takedamage; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_22__ {scalar_t__ time; } ;
struct TYPE_17__ {scalar_t__ invulnerabilityTime; int accuracy_hits; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*,TYPE_5__*,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,int ,int ,int ) ;
 TYPE_5__* FUNC_4 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_7__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (TYPE_4__*,int ,int *,int *,int ,int,int ) ;

void FUNC_12( gentity_t *VAR_13 ) {
 trace_t VAR_14;
 vec3_t VAR_15;



 gentity_t *VAR_16, *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_18 = 8 * VAR_12;

 VAR_20 = VAR_13->s.number;
 for (VAR_19 = 0; VAR_19 < 10; VAR_19++) {
  FUNC_8( VAR_11, VAR_4, VAR_8, VAR_15 );

  FUNC_11( &VAR_14, VAR_11, ((void*)0), ((void*)0), VAR_15, VAR_20, VAR_5 );
  if ( VAR_14.entityNum == VAR_0 ) {
   return;
  }

  VAR_16 = &VAR_9[ VAR_14.entityNum ];

  if ( VAR_16->takedamage) {
    FUNC_2( VAR_16, VAR_13, VAR_13, VAR_8, VAR_14.endpos,
     VAR_18, 0, VAR_6);

  }

  if ( VAR_16->takedamage && VAR_16->client ) {
   VAR_17 = FUNC_4( VAR_14.endpos, VAR_2 );
   VAR_17->s.otherEntityNum = VAR_16->s.number;
   VAR_17->s.eventParm = FUNC_0( VAR_14.plane.normal );
   VAR_17->s.weapon = VAR_13->s.weapon;
   if( FUNC_5( VAR_16, VAR_13 ) ) {
    VAR_13->client->accuracy_hits++;
   }
  } else if ( !( VAR_14.surfaceFlags & VAR_7 ) ) {
   VAR_17 = FUNC_4( VAR_14.endpos, VAR_3 );
   VAR_17->s.eventParm = FUNC_0( VAR_14.plane.normal );
  }

  break;
 }
}
