
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int teamLeader; int losses; int wins; int spectatorClient; int spectatorState; int spectatorTime; int sessionTeam; } ;
struct TYPE_7__ {TYPE_1__ sess; } ;
typedef TYPE_2__ gclient_t ;
struct TYPE_8__ {int clients; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char*,TYPE_2__*,...) ;

void FUNC_2( gclient_t *VAR_1 ) {
 const char *VAR_2;
 const char *VAR_3;

 VAR_2 = FUNC_1("%i %i %i %i %i %i %i",
  VAR_1->sess.sessionTeam,
  VAR_1->sess.spectatorTime,
  VAR_1->sess.spectatorState,
  VAR_1->sess.spectatorClient,
  VAR_1->sess.wins,
  VAR_1->sess.losses,
  VAR_1->sess.teamLeader
  );

 VAR_3 = FUNC_1( "session%i", VAR_1 - VAR_0.clients );

 FUNC_0( VAR_3, VAR_2 );
}
