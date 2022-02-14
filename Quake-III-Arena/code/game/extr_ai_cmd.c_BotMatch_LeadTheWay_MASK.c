
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int teammate ;
typedef int netname ;
struct TYPE_15__ {scalar_t__ entitynum; } ;
struct TYPE_14__ {int entitynum; int areanum; int maxs; int mins; int origin; } ;
struct TYPE_16__ {int client; int lead_teammate; int leadmessage_time; scalar_t__ leadvisible_time; scalar_t__ lead_time; int cs; TYPE_2__ teamgoal; TYPE_1__ lead_teamgoal; } ;
typedef TYPE_3__ bot_state_t ;
struct TYPE_17__ {int subtype; } ;
typedef TYPE_4__ bot_match_t ;
struct TYPE_18__ {int origin; scalar_t__ valid; } ;
typedef TYPE_5__ aas_entityinfo_t ;


 int FUNC_0 (TYPE_3__*,char*,char*,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (TYPE_4__*,int ,char*,int) ;

void FUNC_14(bot_state_t *VAR_8, bot_match_t *VAR_9) {
 aas_entityinfo_t VAR_10;
 char VAR_11[VAR_1], VAR_12[VAR_1];
 int VAR_13, VAR_14, VAR_15;

 if (!FUNC_8()) return;

 if (!FUNC_1(VAR_8, VAR_9)) return;

 if (VAR_9->subtype & VAR_3) {

  FUNC_13(VAR_9, VAR_4, VAR_12, sizeof(VAR_12));
  VAR_13 = FUNC_6(VAR_12);

  if (VAR_13 == VAR_8->client) {
   VAR_15 = VAR_6;
  }
  else if (!FUNC_4(VAR_8, VAR_13)) {

   return;
  }
  else {
   VAR_15 = VAR_7;
  }
 }
 else {

  FUNC_13(VAR_9, VAR_2, VAR_11, sizeof(VAR_11));
  VAR_13 = FUNC_5(VAR_11);
  VAR_15 = VAR_6;
 }

 if (VAR_13 < 0) {
  FUNC_0(VAR_8, "whois", VAR_11, ((void*)0));
  FUNC_12(VAR_8->cs, VAR_8->client, VAR_0);
  return;
 }

 VAR_8->lead_teamgoal.entitynum = -1;
 FUNC_2(VAR_13, &VAR_10);

 if (VAR_10.valid) {
  VAR_14 = FUNC_3(VAR_10.origin);
  if (VAR_14) {
   VAR_8->lead_teamgoal.entitynum = VAR_13;
   VAR_8->lead_teamgoal.areanum = VAR_14;
   FUNC_9(VAR_10.origin, VAR_8->lead_teamgoal.origin);
   FUNC_10(VAR_8->lead_teamgoal.mins, -8, -8, -8);
   FUNC_10(VAR_8->lead_teamgoal.maxs, 8, 8, 8);
  }
 }

 if (VAR_8->teamgoal.entitynum < 0) {
  if (VAR_15) FUNC_0(VAR_8, "whereis", VAR_12, ((void*)0));
  else FUNC_0(VAR_8, "whereareyou", VAR_11, ((void*)0));
  FUNC_12(VAR_8->cs, VAR_8->client, VAR_0);
  return;
 }
 VAR_8->lead_teammate = VAR_13;
 VAR_8->lead_time = FUNC_7() + VAR_5;
 VAR_8->leadvisible_time = 0;
 VAR_8->leadmessage_time = -(FUNC_7() + 2 * FUNC_11());
}
