
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int team_t ;
typedef int spectatorState_t ;
typedef int s ;
typedef int qboolean ;
struct TYPE_6__ {int teamLeader; int spectatorState; int sessionTeam; int losses; int wins; int spectatorClient; int spectatorTime; } ;
struct TYPE_7__ {TYPE_1__ sess; } ;
typedef TYPE_2__ gclient_t ;
struct TYPE_8__ {int clients; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (char*,char*,int*,int *,int*,int *,int *,int *,int*) ;
 int FUNC_1 (char const*,char*,int) ;
 char* FUNC_2 (char*,TYPE_2__*) ;

void FUNC_3( gclient_t *VAR_2 ) {
 char VAR_3[VAR_0];
 const char *VAR_4;


 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2( "session%i", VAR_2 - VAR_1.clients );
 FUNC_1( VAR_4, VAR_3, sizeof(VAR_3) );

 FUNC_0( VAR_3, "%i %i %i %i %i %i %i",
  &VAR_7,
  &VAR_2->sess.spectatorTime,
  &VAR_6,
  &VAR_2->sess.spectatorClient,
  &VAR_2->sess.wins,
  &VAR_2->sess.losses,
  &VAR_5
  );


 VAR_2->sess.sessionTeam = (team_t)VAR_7;
 VAR_2->sess.spectatorState = (spectatorState_t)VAR_6;
 VAR_2->sess.teamLeader = (qboolean)VAR_5;
}
