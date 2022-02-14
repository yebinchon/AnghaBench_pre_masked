
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int maxclients; TYPE_3__* clients; } ;
struct TYPE_6__ {scalar_t__ connected; int netname; } ;
struct TYPE_5__ {int sessionTeam; scalar_t__ teamLeader; } ;
struct TYPE_7__ {TYPE_2__ pers; TYPE_1__ sess; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 TYPE_4__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(int VAR_4, int VAR_5) {
 int VAR_6;

 if ( VAR_1.clients[VAR_5].pers.connected == VAR_0 ) {
  FUNC_1(VAR_4, FUNC_2("print \"%s is not connected\n\"", VAR_1.clients[VAR_5].pers.netname) );
  return;
 }
 if (VAR_1.clients[VAR_5].sess.sessionTeam != VAR_4) {
  FUNC_1(VAR_4, FUNC_2("print \"%s is not on the team anymore\n\"", VAR_1.clients[VAR_5].pers.netname) );
  return;
 }
 for ( VAR_6 = 0 ; VAR_6 < VAR_1.maxclients ; VAR_6++ ) {
  if (VAR_1.clients[VAR_6].sess.sessionTeam != VAR_4)
   continue;
  if (VAR_1.clients[VAR_6].sess.teamLeader) {
   VAR_1.clients[VAR_6].sess.teamLeader = VAR_2;
   FUNC_0(VAR_6);
  }
 }
 VAR_1.clients[VAR_5].sess.teamLeader = VAR_3;
 FUNC_0( VAR_5 );
 FUNC_1(VAR_4, FUNC_2("print \"%s is the new team leader\n\"", VAR_1.clients[VAR_5].pers.netname) );
}
