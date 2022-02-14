
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int trace_t ;
typedef int trace ;
typedef scalar_t__ qboolean ;
struct TYPE_21__ {int classname; } ;
typedef TYPE_5__ gitem_t ;
struct TYPE_20__ {int origin; } ;
struct TYPE_19__ {int currentOrigin; } ;
struct TYPE_22__ {int health; scalar_t__ inuse; int classname; TYPE_4__ s; TYPE_3__ r; TYPE_2__* client; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_17__ {int* stats; int* ammo; int * persistant; } ;
struct TYPE_18__ {TYPE_1__ ps; } ;


 TYPE_5__* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_6__*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* FUNC_5 () ;
 int FUNC_6 (TYPE_6__*,TYPE_5__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_8 (TYPE_6__*,TYPE_6__*,int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *,int ,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_11 (gentity_t *VAR_14)
{
 char *VAR_15;
 gitem_t *VAR_16;
 int VAR_17;
 qboolean VAR_18;
 gentity_t *VAR_19;
 trace_t VAR_20;

 if ( !FUNC_1( VAR_14 ) ) {
  return;
 }

 VAR_15 = FUNC_2( 1 );

 if (FUNC_7(VAR_15, "all") == 0)
  VAR_18 = VAR_13;
 else
  VAR_18 = VAR_12;

 if (VAR_18 || FUNC_7( VAR_15, "health") == 0)
 {
  VAR_14->health = VAR_14->client->ps.stats[VAR_7];
  if (!VAR_18)
   return;
 }

 if (VAR_18 || FUNC_7(VAR_15, "weapons") == 0)
 {
  VAR_14->client->ps.stats[VAR_8] = (1 << VAR_11) - 1 -
   ( 1 << VAR_9 ) - ( 1 << VAR_10 );
  if (!VAR_18)
   return;
 }

 if (VAR_18 || FUNC_7(VAR_15, "ammo") == 0)
 {
  for ( VAR_17 = 0 ; VAR_17 < VAR_0 ; VAR_17++ ) {
   VAR_14->client->ps.ammo[VAR_17] = 999;
  }
  if (!VAR_18)
   return;
 }

 if (VAR_18 || FUNC_7(VAR_15, "armor") == 0)
 {
  VAR_14->client->ps.stats[VAR_6] = 200;

  if (!VAR_18)
   return;
 }

 if (FUNC_7(VAR_15, "excellent") == 0) {
  VAR_14->client->ps.persistant[VAR_3]++;
  return;
 }
 if (FUNC_7(VAR_15, "impressive") == 0) {
  VAR_14->client->ps.persistant[VAR_5]++;
  return;
 }
 if (FUNC_7(VAR_15, "gauntletaward") == 0) {
  VAR_14->client->ps.persistant[VAR_4]++;
  return;
 }
 if (FUNC_7(VAR_15, "defend") == 0) {
  VAR_14->client->ps.persistant[VAR_2]++;
  return;
 }
 if (FUNC_7(VAR_15, "assist") == 0) {
  VAR_14->client->ps.persistant[VAR_1]++;
  return;
 }


 if ( !VAR_18 ) {
  VAR_16 = FUNC_0 (VAR_15);
  if (!VAR_16) {
   return;
  }

  VAR_19 = FUNC_5();
  FUNC_9( VAR_14->r.currentOrigin, VAR_19->s.origin );
  VAR_19->classname = VAR_16->classname;
  FUNC_6 (VAR_19, VAR_16);
  FUNC_3(VAR_19 );
  FUNC_10( &VAR_20, 0, sizeof( VAR_20 ) );
  FUNC_8 (VAR_19, VAR_14, &VAR_20);
  if (VAR_19->inuse) {
   FUNC_4( VAR_19 );
  }
 }
}
