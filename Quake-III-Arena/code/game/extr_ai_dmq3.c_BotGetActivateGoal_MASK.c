
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int vec3_t ;
typedef int tmpmodel ;
typedef int targetname ;
typedef int target ;
typedef int model ;
typedef int classname ;
struct TYPE_25__ {int areanum; int tfl; int origin; TYPE_3__* activatestack; } ;
typedef TYPE_4__ bot_state_t ;
struct TYPE_23__ {scalar_t__ entitynum; int areanum; } ;
struct TYPE_26__ {int numareas; int* areas; int time; TYPE_2__ goal; } ;
typedef TYPE_5__ bot_activategoal_t ;
struct TYPE_27__ {int origin; int modelindex; } ;
typedef TYPE_6__ aas_entityinfo_t ;
struct TYPE_28__ {int contents; } ;
typedef TYPE_7__ aas_areainfo_t ;
struct TYPE_22__ {scalar_t__ entitynum; } ;
struct TYPE_24__ {int time; int start_time; TYPE_1__ goal; scalar_t__ inuse; } ;
struct TYPE_21__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int,TYPE_6__*) ;
 int FUNC_3 (TYPE_4__*,int,TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,int,TYPE_5__*) ;
 int FUNC_5 (int,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int,TYPE_5__*) ;
 int FUNC_7 (char*,int,char*,int ) ;
 int VAR_1 ;
 int FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*) ;
 TYPE_10__ VAR_5 ;
 int FUNC_12 (TYPE_5__*,int ,int) ;
 int VAR_6 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int,TYPE_7__*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int*,int) ;
 scalar_t__ FUNC_18 (int,char*,float*) ;
 int FUNC_19 (int,char*,int*) ;
 int FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int,char*,char*,int) ;
 int FUNC_22 (int,char*,int ) ;

int FUNC_23(bot_state_t *VAR_7, int VAR_8, bot_activategoal_t *VAR_9) {
 int VAR_10, VAR_11, VAR_12[10], VAR_13, VAR_14, VAR_15[VAR_2*2], VAR_16, VAR_17;
 char VAR_18[VAR_3], VAR_19[128];
 char VAR_20[128], VAR_21[128];
 float VAR_22;
 char VAR_23[10][128];
 aas_entityinfo_t VAR_24;
 aas_areainfo_t VAR_25;
 vec3_t VAR_26, VAR_27, VAR_28, VAR_29;

 FUNC_12(VAR_9, 0, sizeof(bot_activategoal_t));
 FUNC_2(VAR_8, &VAR_24);
 FUNC_7(VAR_18, sizeof( VAR_18 ), "*%d", VAR_24.modelindex);
 for (VAR_11 = FUNC_20(0); VAR_11; VAR_11 = FUNC_20(VAR_11)) {
  if (!FUNC_21(VAR_11, "model", VAR_19, sizeof(VAR_19))) continue;
  if (!FUNC_13(VAR_18, VAR_19)) break;
 }
 if (!VAR_11) {
  FUNC_0(VAR_4, "BotGetActivateGoal: no entity found with model %s\n", VAR_18);
  return 0;
 }
 FUNC_21(VAR_11, "classname", VAR_21, sizeof(VAR_21));
 if (!VAR_21) {
  FUNC_0(VAR_4, "BotGetActivateGoal: entity with model %s has no classname\n", VAR_18);
  return 0;
 }

 if (!FUNC_13(VAR_21, "func_door")) {
  if (FUNC_18(VAR_11, "health", &VAR_22)) {

   if (VAR_22) {
    FUNC_4(VAR_7, VAR_11, VAR_9);
    return VAR_11;
   }
  }

  FUNC_19(VAR_11, "spawnflags", &VAR_13);

  if ( VAR_13 & 1 )
   return 0;

  if (!FUNC_22(VAR_11, "origin", VAR_26)) {
   FUNC_9(VAR_26);
  }

  if (!FUNC_10(VAR_26, VAR_24.origin))
   return 0;

  FUNC_21(VAR_11, "model", VAR_18, sizeof(VAR_18));
  if (*VAR_18) {
   VAR_14 = FUNC_11(VAR_18+1);
   if (VAR_14) {
    FUNC_9(VAR_27);
    FUNC_5(VAR_14, VAR_1, 0, VAR_28, VAR_29);

    VAR_16 = FUNC_17(VAR_28, VAR_29, VAR_15, VAR_2*2);

    for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
     if (VAR_9->numareas >= VAR_2)
      break;
     if ( !FUNC_15(VAR_15[VAR_10]) ) {
      continue;
     }
     FUNC_14(VAR_15[VAR_10], &VAR_25);
     if (VAR_25.contents & VAR_0) {
      VAR_9->areas[VAR_9->numareas++] = VAR_15[VAR_10];
     }
    }

    for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
     if (VAR_9->numareas >= VAR_2)
      break;
     if ( FUNC_15(VAR_15[VAR_10]) ) {
      continue;
     }
     FUNC_14(VAR_15[VAR_10], &VAR_25);
     if (VAR_25.contents & VAR_0) {
      VAR_9->areas[VAR_9->numareas++] = VAR_15[VAR_10];
     }
    }
   }
  }
 }

 if (!FUNC_13(VAR_21, "func_button")) {
  return 0;
 }

 if (!FUNC_21(VAR_11, "targetname", VAR_23[0], sizeof(VAR_23[0]))) {
  if (VAR_5.integer) {
   FUNC_0(VAR_4, "BotGetActivateGoal: entity with model \"%s\" has no targetname\n", VAR_18);
  }
  return 0;
 }

 VAR_12[0] = FUNC_20(0);
 for (VAR_10 = 0; VAR_10 >= 0 && VAR_10 < 10;) {
  for (VAR_11 = VAR_12[VAR_10]; VAR_11; VAR_11 = FUNC_20(VAR_11)) {
   if (!FUNC_21(VAR_11, "target", VAR_20, sizeof(VAR_20))) continue;
   if (!FUNC_13(VAR_23[VAR_10], VAR_20)) {
    VAR_12[VAR_10] = FUNC_20(VAR_11);
    break;
   }
  }
  if (!VAR_11) {
   if (VAR_5.integer) {
    FUNC_0(VAR_4, "BotGetActivateGoal: no entity with target \"%s\"\n", VAR_23[VAR_10]);
   }
   VAR_10--;
   continue;
  }
  if (!FUNC_21(VAR_11, "classname", VAR_21, sizeof(VAR_21))) {
   if (VAR_5.integer) {
    FUNC_0(VAR_4, "BotGetActivateGoal: entity with target \"%s\" has no classname\n", VAR_23[VAR_10]);
   }
   continue;
  }

  if (!FUNC_13(VAR_21, "func_button")) {

   if (!FUNC_3(VAR_7, VAR_11, VAR_9))
    continue;

   if ( VAR_7->activatestack && VAR_7->activatestack->inuse &&
     VAR_7->activatestack->goal.entitynum == VAR_9->goal.entitynum &&
     VAR_7->activatestack->time > FUNC_8() &&
     VAR_7->activatestack->start_time < FUNC_8() - 2)
    continue;

   if ( FUNC_15(VAR_7->areanum) ) {

    FUNC_1( VAR_9, VAR_6 );

    VAR_17 = FUNC_16(VAR_7->areanum, VAR_7->origin, VAR_9->goal.areanum, VAR_7->tfl);

    if (!VAR_17) {
     continue;
    }
    VAR_9->time = FUNC_8() + VAR_17 * 0.01 + 5;
   }
   return VAR_11;
  }

  else if (!FUNC_13(VAR_21, "trigger_multiple")) {

   if (!FUNC_6(VAR_7, VAR_11, VAR_9))
    continue;

   if ( VAR_7->activatestack && VAR_7->activatestack->inuse &&
     VAR_7->activatestack->goal.entitynum == VAR_9->goal.entitynum &&
     VAR_7->activatestack->time > FUNC_8() &&
     VAR_7->activatestack->start_time < FUNC_8() - 2)
    continue;

   if ( FUNC_15(VAR_7->areanum) ) {

    FUNC_1( VAR_9, VAR_6 );

    VAR_17 = FUNC_16(VAR_7->areanum, VAR_7->origin, VAR_9->goal.areanum, VAR_7->tfl);

    if (!VAR_17) {
     continue;
    }
    VAR_9->time = FUNC_8() + VAR_17 * 0.01 + 5;
   }
   return VAR_11;
  }
  else if (!FUNC_13(VAR_21, "func_timer")) {

   continue;
  }

  else if (!FUNC_13(VAR_21, "target_relay") || !FUNC_13(VAR_21, "target_delay")) {
   if (FUNC_21(VAR_11, "targetname", VAR_23[VAR_10+1], sizeof(VAR_23[0]))) {
    VAR_10++;
    VAR_12[VAR_10] = FUNC_20(0);
   }
  }
 }



 return 0;
}
