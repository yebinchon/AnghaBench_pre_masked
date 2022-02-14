
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int trace_t ;
struct TYPE_10__ {int angles; int origin; } ;
struct TYPE_14__ {int spawnflags; TYPE_1__ s; int target; TYPE_3__* client; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_13__ {scalar_t__ sessionTeam; } ;
struct TYPE_11__ {scalar_t__ pm_type; } ;
struct TYPE_12__ {TYPE_4__ sess; TYPE_2__ ps; } ;


 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;

void FUNC_3 (gentity_t *VAR_2, gentity_t *VAR_3, trace_t *VAR_4 ) {
 gentity_t *VAR_5;

 if ( !VAR_3->client ) {
  return;
 }
 if ( VAR_3->client->ps.pm_type == VAR_0 ) {
  return;
 }

 if ( ( VAR_2->spawnflags & 1 ) &&
  VAR_3->client->sess.sessionTeam != VAR_1 ) {
  return;
 }


 VAR_5 = FUNC_0( VAR_2->target );
 if (!VAR_5) {
  FUNC_1 ("Couldn't find teleporter destination\n");
  return;
 }

 FUNC_2( VAR_3, VAR_5->s.origin, VAR_5->s.angles );
}
