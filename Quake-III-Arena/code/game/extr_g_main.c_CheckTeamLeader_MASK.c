
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int svFlags; } ;
struct TYPE_10__ {TYPE_1__ r; } ;
struct TYPE_9__ {int maxclients; TYPE_3__* clients; } ;
struct TYPE_7__ {int sessionTeam; void* teamLeader; } ;
struct TYPE_8__ {TYPE_2__ sess; } ;


 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_4__ VAR_2 ;
 void* VAR_3 ;

void FUNC_0( int VAR_4 ) {
 int VAR_5;

 for ( VAR_5 = 0 ; VAR_5 < VAR_2.maxclients ; VAR_5++ ) {
  if (VAR_2.clients[VAR_5].sess.sessionTeam != VAR_4)
   continue;
  if (VAR_2.clients[VAR_5].sess.teamLeader)
   break;
 }
 if (VAR_5 >= VAR_2.maxclients) {
  for ( VAR_5 = 0 ; VAR_5 < VAR_2.maxclients ; VAR_5++ ) {
   if (VAR_2.clients[VAR_5].sess.sessionTeam != VAR_4)
    continue;
   if (!(VAR_1[VAR_5].r.svFlags & VAR_0)) {
    VAR_2.clients[VAR_5].sess.teamLeader = VAR_3;
    break;
   }
  }
  for ( VAR_5 = 0 ; VAR_5 < VAR_2.maxclients ; VAR_5++ ) {
   if (VAR_2.clients[VAR_5].sess.sessionTeam != VAR_4)
    continue;
   VAR_2.clients[VAR_5].sess.teamLeader = VAR_3;
   break;
  }
 }
}
