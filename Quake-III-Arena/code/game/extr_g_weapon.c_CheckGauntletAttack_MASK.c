
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int vec3_t ;
struct TYPE_20__ {int normal; } ;
struct TYPE_26__ {int surfaceFlags; size_t entityNum; int endpos; TYPE_1__ plane; } ;
typedef TYPE_7__ trace_t ;
typedef int qboolean ;
struct TYPE_21__ {int weapon; int eventParm; int number; int otherEntityNum; } ;
struct TYPE_27__ {TYPE_6__* client; scalar_t__ takedamage; TYPE_2__ s; } ;
typedef TYPE_8__ gentity_t ;
struct TYPE_22__ {scalar_t__* powerups; int viewangles; } ;
struct TYPE_25__ {TYPE_5__* persistantPowerup; TYPE_3__ ps; } ;
struct TYPE_24__ {TYPE_4__* item; } ;
struct TYPE_23__ {scalar_t__ giTag; } ;
struct TYPE_19__ {int value; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_8__*,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (TYPE_8__*,TYPE_8__*,TYPE_8__*,int ,int ,int,int ,int ) ;
 TYPE_8__* FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int,int ,int ) ;
 int VAR_7 ;
 TYPE_8__* VAR_8 ;
 TYPE_10__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (TYPE_7__*,int ,int *,int *,int ,int ,int ) ;
 int VAR_15 ;

qboolean FUNC_8( gentity_t *VAR_16 ) {
 trace_t VAR_17;
 vec3_t VAR_18;
 gentity_t *VAR_19;
 gentity_t *VAR_20;
 int VAR_21;


 FUNC_0 (VAR_16->client->ps.viewangles, VAR_7, VAR_13, VAR_15);

 FUNC_1 ( VAR_16, VAR_7, VAR_13, VAR_15, VAR_10 );

 FUNC_6 (VAR_10, 32, VAR_7, VAR_18);

 FUNC_7 (&VAR_17, VAR_10, ((void*)0), ((void*)0), VAR_18, VAR_16->s.number, VAR_2);
 if ( VAR_17.surfaceFlags & VAR_6 ) {
  return VAR_11;
 }

 VAR_20 = &VAR_8[ VAR_17.entityNum ];


 if ( VAR_20->takedamage && VAR_20->client ) {
  VAR_19 = FUNC_5( VAR_17.endpos, VAR_0 );
  VAR_19->s.otherEntityNum = VAR_20->s.number;
  VAR_19->s.eventParm = FUNC_2( VAR_17.plane.normal );
  VAR_19->s.weapon = VAR_16->s.weapon;
 }

 if ( !VAR_20->takedamage) {
  return VAR_11;
 }

 if (VAR_16->client->ps.powerups[VAR_5] ) {
  FUNC_3( VAR_16, VAR_1, 0 );
  VAR_14 = VAR_9.value;
 } else {
  VAR_14 = 1;
 }






 VAR_21 = 50 * VAR_14;
 FUNC_4( VAR_20, VAR_16, VAR_16, VAR_7, VAR_17.endpos,
  VAR_21, 0, VAR_3 );

 return VAR_12;
}
