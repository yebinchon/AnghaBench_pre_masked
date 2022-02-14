
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


struct TYPE_16__ {TYPE_4__* client; scalar_t__ inuse; scalar_t__ health; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_18__ {int integer; } ;
struct TYPE_17__ {scalar_t__ time; scalar_t__ lastTeamLocationTime; } ;
struct TYPE_14__ {scalar_t__ sessionTeam; } ;
struct TYPE_12__ {scalar_t__ location; } ;
struct TYPE_13__ {scalar_t__ connected; TYPE_1__ teamState; } ;
struct TYPE_15__ {TYPE_3__ sess; TYPE_2__ pers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_6__ VAR_6 ;

void FUNC_2(void) {
 int VAR_7;
 gentity_t *VAR_8, *VAR_9;

 if (VAR_6.time - VAR_6.lastTeamLocationTime > VAR_2) {

  VAR_6.lastTeamLocationTime = VAR_6.time;

  for (VAR_7 = 0; VAR_7 < VAR_5.integer; VAR_7++) {
   VAR_9 = VAR_4 + VAR_7;

   if ( VAR_9->client->pers.connected != VAR_0 ) {
    continue;
   }

   if (VAR_9->inuse && (VAR_9->client->sess.sessionTeam == VAR_3 || VAR_9->client->sess.sessionTeam == VAR_1)) {
    VAR_8 = FUNC_0( VAR_9 );
    if (VAR_8)
     VAR_9->client->pers.teamState.location = VAR_8->health;
    else
     VAR_9->client->pers.teamState.location = 0;
   }
  }

  for (VAR_7 = 0; VAR_7 < VAR_5.integer; VAR_7++) {
   VAR_9 = VAR_4 + VAR_7;

   if ( VAR_9->client->pers.connected != VAR_0 ) {
    continue;
   }

   if (VAR_9->inuse && (VAR_9->client->sess.sessionTeam == VAR_3 || VAR_9->client->sess.sessionTeam == VAR_1)) {
    FUNC_1( VAR_9 );
   }
  }
 }
}
