
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int spawnflags; int (* use ) (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;int target; TYPE_1__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_14__ {scalar_t__ sessionTeam; } ;
struct TYPE_13__ {TYPE_2__ sess; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;

void FUNC_3 (gentity_t *VAR_2, gentity_t *VAR_3, gentity_t *VAR_4) {
 if ( ( VAR_2->spawnflags & 1 ) && VAR_4->client
  && VAR_4->client->sess.sessionTeam != VAR_1 ) {
  return;
 }
 if ( ( VAR_2->spawnflags & 2 ) && VAR_4->client
  && VAR_4->client->sess.sessionTeam != VAR_0 ) {
  return;
 }
 if ( VAR_2->spawnflags & 4 ) {
  gentity_t *VAR_5;

  VAR_5 = FUNC_0( VAR_2->target );
  if ( VAR_5 && VAR_5->use ) {
   VAR_5->use( VAR_5, VAR_2, VAR_4 );
  }
  return;
 }
 FUNC_1 (VAR_2, VAR_4);
}
