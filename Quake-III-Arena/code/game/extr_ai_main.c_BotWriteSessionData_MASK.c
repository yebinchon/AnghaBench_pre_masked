
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * maxs; int * mins; int * origin; int number; int iteminfo; int flags; int entitynum; int areanum; } ;
struct TYPE_5__ {int client; TYPE_1__ lastgoal_teamgoal; int lastgoal_teammate; int lastgoal_ltgtype; int lastgoal_decisionmaker; } ;
typedef TYPE_2__ bot_state_t ;


 int FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char*,int ,...) ;

void FUNC_2(bot_state_t *VAR_0) {
 const char *VAR_1;
 const char *VAR_2;

 VAR_1 = FUNC_1(
   "%i %i %i %i %i %i %i %i"
   " %f %f %f"
   " %f %f %f"
   " %f %f %f",
  VAR_0->lastgoal_decisionmaker,
  VAR_0->lastgoal_ltgtype,
  VAR_0->lastgoal_teammate,
  VAR_0->lastgoal_teamgoal.areanum,
  VAR_0->lastgoal_teamgoal.entitynum,
  VAR_0->lastgoal_teamgoal.flags,
  VAR_0->lastgoal_teamgoal.iteminfo,
  VAR_0->lastgoal_teamgoal.number,
  VAR_0->lastgoal_teamgoal.origin[0],
  VAR_0->lastgoal_teamgoal.origin[1],
  VAR_0->lastgoal_teamgoal.origin[2],
  VAR_0->lastgoal_teamgoal.mins[0],
  VAR_0->lastgoal_teamgoal.mins[1],
  VAR_0->lastgoal_teamgoal.mins[2],
  VAR_0->lastgoal_teamgoal.maxs[0],
  VAR_0->lastgoal_teamgoal.maxs[1],
  VAR_0->lastgoal_teamgoal.maxs[2]
  );

 VAR_2 = FUNC_1( "botsession%i", VAR_0->client );

 FUNC_0( VAR_2, VAR_1 );
}
