
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int svFlags; } ;
struct TYPE_12__ {scalar_t__ number; } ;
struct TYPE_16__ {TYPE_4__ r; TYPE_3__* client; TYPE_1__ s; struct TYPE_16__* enemy; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {scalar_t__ time; } ;
struct TYPE_13__ {scalar_t__ sessionTeam; } ;
struct TYPE_14__ {scalar_t__ lastkilled_client; scalar_t__ lasthurt_mod; scalar_t__ rewardTime; TYPE_2__ sess; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_5__*,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__* VAR_11 ;
 TYPE_7__ VAR_12 ;
 TYPE_6__ VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_1( gentity_t *VAR_15 ) {
 gentity_t *VAR_16;
 int VAR_17;

 if (!VAR_15->client) {
  return;
 }


 if (VAR_15->enemy && VAR_15->enemy->client && VAR_15->enemy->client->lastkilled_client == VAR_15->s.number) {

  if (!(VAR_15->enemy->r.svFlags & VAR_5)) {
   FUNC_0( VAR_15, VAR_15->enemy, VAR_4, VAR_6, VAR_14 );
  }
  if (!(VAR_15->r.svFlags & VAR_5)) {
   FUNC_0( VAR_15, VAR_15, VAR_4, VAR_6, VAR_14 );
  }
  VAR_15->enemy = ((void*)0);
  return;
 }

 if (VAR_15->client->lastkilled_client >= 0 && VAR_15->client->lastkilled_client != VAR_15->s.number) {
  VAR_16 = VAR_11 + VAR_15->client->lastkilled_client;
  if (VAR_16->client) {

   if (VAR_16->client->lasthurt_mod == VAR_2) {
    if (!(VAR_16->r.svFlags & VAR_5)) {
     FUNC_0( VAR_15, VAR_16, VAR_4, VAR_7, VAR_14 );
    }
    if (!(VAR_15->r.svFlags & VAR_5)) {
     FUNC_0( VAR_15, VAR_15, VAR_4, VAR_7, VAR_14 );
    }
   } else {
    if (!(VAR_16->r.svFlags & VAR_5)) {
     FUNC_0( VAR_15, VAR_16, VAR_4, VAR_8, VAR_14 );
    }
    if (!(VAR_15->r.svFlags & VAR_5)) {
     FUNC_0( VAR_15, VAR_15, VAR_4, VAR_8, VAR_14 );
    }
   }
   VAR_15->client->lastkilled_client = -1;
   return;
  }
 }

 if (VAR_12.integer >= VAR_0) {

  for(VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
   VAR_16 = VAR_11 + VAR_17;
   if (VAR_16->client && VAR_16 != VAR_15 && VAR_16->client->sess.sessionTeam == VAR_15->client->sess.sessionTeam) {
    if (VAR_16->client->rewardTime > VAR_13.time) {
     if (!(VAR_16->r.svFlags & VAR_5)) {
      FUNC_0( VAR_15, VAR_16, VAR_4, VAR_9, VAR_14 );
     }
     if (!(VAR_15->r.svFlags & VAR_5)) {
      FUNC_0( VAR_15, VAR_15, VAR_4, VAR_9, VAR_14 );
     }
     return;
    }
   }
  }
 }


 FUNC_0( VAR_15, ((void*)0), VAR_3, VAR_10, VAR_14 );
}
