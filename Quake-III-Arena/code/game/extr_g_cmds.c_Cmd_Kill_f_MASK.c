
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int health; TYPE_3__* client; int flags; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_10__ {int* stats; } ;
struct TYPE_9__ {scalar_t__ sessionTeam; } ;
struct TYPE_11__ {TYPE_2__ ps; TYPE_1__ sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*,TYPE_4__*,int,int ) ;

void FUNC_1( gentity_t *VAR_4 ) {
 if ( VAR_4->client->sess.sessionTeam == VAR_3 ) {
  return;
 }
 if (VAR_4->health <= 0) {
  return;
 }
 VAR_4->flags &= ~VAR_0;
 VAR_4->client->ps.stats[VAR_2] = VAR_4->health = -999;
 FUNC_0 (VAR_4, VAR_4, VAR_4, 100000, VAR_1);
}
