
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int s ;
struct TYPE_4__ {int * maxs; int * mins; int * origin; int number; int iteminfo; int flags; int entitynum; int areanum; } ;
struct TYPE_5__ {TYPE_1__ lastgoal_teamgoal; int lastgoal_teammate; int lastgoal_ltgtype; int lastgoal_decisionmaker; int client; } ;
typedef TYPE_2__ bot_state_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (char const*,char*,int) ;
 char* FUNC_2 (char*,int ) ;

void FUNC_3(bot_state_t *VAR_1) {
 char VAR_2[VAR_0];
 const char *VAR_3;

 VAR_3 = FUNC_2( "botsession%i", VAR_1->client );
 FUNC_1( VAR_3, VAR_2, sizeof(VAR_2) );

 FUNC_0(VAR_2,
   "%i %i %i %i %i %i %i %i"
   " %f %f %f"
   " %f %f %f"
   " %f %f %f",
  &VAR_1->lastgoal_decisionmaker,
  &VAR_1->lastgoal_ltgtype,
  &VAR_1->lastgoal_teammate,
  &VAR_1->lastgoal_teamgoal.areanum,
  &VAR_1->lastgoal_teamgoal.entitynum,
  &VAR_1->lastgoal_teamgoal.flags,
  &VAR_1->lastgoal_teamgoal.iteminfo,
  &VAR_1->lastgoal_teamgoal.number,
  &VAR_1->lastgoal_teamgoal.origin[0],
  &VAR_1->lastgoal_teamgoal.origin[1],
  &VAR_1->lastgoal_teamgoal.origin[2],
  &VAR_1->lastgoal_teamgoal.mins[0],
  &VAR_1->lastgoal_teamgoal.mins[1],
  &VAR_1->lastgoal_teamgoal.mins[2],
  &VAR_1->lastgoal_teamgoal.maxs[0],
  &VAR_1->lastgoal_teamgoal.maxs[1],
  &VAR_1->lastgoal_teamgoal.maxs[2]
  );
}
