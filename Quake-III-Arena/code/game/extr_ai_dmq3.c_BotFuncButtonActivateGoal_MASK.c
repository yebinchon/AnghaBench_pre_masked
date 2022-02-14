
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int model ;
struct TYPE_9__ {double fraction; int ent; } ;
typedef TYPE_2__ bsp_trace_t ;
struct TYPE_10__ {scalar_t__* origin; int areanum; int entitynum; int eye; } ;
typedef TYPE_3__ bot_state_t ;
struct TYPE_8__ {int entitynum; scalar_t__* origin; int areanum; scalar_t__* mins; scalar_t__* maxs; scalar_t__ flags; scalar_t__ number; } ;
struct TYPE_11__ {int shoot; scalar_t__* target; TYPE_1__ goal; } ;
typedef TYPE_4__ bot_activategoal_t ;


 int FUNC_0 (TYPE_2__*,int ,int *,int *,scalar_t__*,int ,int ) ;
 int FUNC_1 (int,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,float,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__*,double,scalar_t__*) ;
 int FUNC_8 (scalar_t__*,int,int,int) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (char*) ;
 float FUNC_11 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,char*,float*) ;
 int FUNC_14 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_15 (scalar_t__*,scalar_t__*,int*,scalar_t__**,int) ;
 int FUNC_16 (int,char*,char*,int) ;

int FUNC_17(bot_state_t *VAR_5, int VAR_6, bot_activategoal_t *VAR_7) {
 int VAR_8, VAR_9[10], VAR_10, VAR_11, VAR_12;
 char VAR_13[128];
 float VAR_14, VAR_15, VAR_16, VAR_17;
 vec3_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24[10];
 vec3_t VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 vec3_t VAR_30 = {1, 1, 1}, VAR_31 = {-1, -1, -1};
 bsp_trace_t VAR_32;

 VAR_7->shoot = VAR_3;
 FUNC_4(VAR_7->target);

 FUNC_16(VAR_6, "model", VAR_13, sizeof(VAR_13));
 if (!*VAR_13)
  return VAR_3;
 VAR_11 = FUNC_10(VAR_13+1);
 if (!VAR_11)
  return VAR_3;
 FUNC_4(VAR_23);
 VAR_12 = FUNC_1(VAR_11, VAR_0, 0, VAR_21, VAR_22);

 FUNC_13(VAR_6, "lip", &VAR_14);
 if (!VAR_14) VAR_14 = 4;

 FUNC_13(VAR_6, "angle", &VAR_17);
 FUNC_8(VAR_23, 0, VAR_17, 0);
 FUNC_2(VAR_23, VAR_25);

 FUNC_9(VAR_22, VAR_21, VAR_18);

 FUNC_3(VAR_21, VAR_22, VAR_26);
 FUNC_7(VAR_26, 0.5, VAR_26);

 VAR_15 = FUNC_11(VAR_25[0]) * VAR_18[0] + FUNC_11(VAR_25[1]) * VAR_18[1] + FUNC_11(VAR_25[2]) * VAR_18[2];
 VAR_15 *= 0.5;

 FUNC_13(VAR_6, "health", &VAR_16);

 if (VAR_16) {

  FUNC_6(VAR_26, -VAR_15, VAR_25, VAR_27);

  FUNC_5(VAR_27, VAR_7->target);
  VAR_7->shoot = VAR_4;

  FUNC_0(&VAR_32, VAR_5->eye, ((void*)0), ((void*)0), VAR_27, VAR_5->entitynum, VAR_1);

  if (VAR_32.fraction >= 1.0 || VAR_32.ent == VAR_12) {

   VAR_7->goal.entitynum = VAR_12;
   VAR_7->goal.number = 0;
   VAR_7->goal.flags = 0;
   FUNC_5(VAR_5->origin, VAR_7->goal.origin);
   VAR_7->goal.areanum = VAR_5->areanum;
   FUNC_8(VAR_7->goal.mins, -8, -8, -8);
   FUNC_8(VAR_7->goal.maxs, 8, 8, 8);

   return VAR_4;
  }
  else {


   FUNC_14(VAR_2, VAR_28, VAR_29);
   for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
    if (VAR_25[VAR_8] < 0) VAR_15 += FUNC_11(VAR_25[VAR_8]) * FUNC_11(VAR_29[VAR_8]);
    else VAR_15 += FUNC_11(VAR_25[VAR_8]) * FUNC_11(VAR_28[VAR_8]);
   }

   FUNC_6(VAR_26, -VAR_15, VAR_25, VAR_27);

   FUNC_5(VAR_27, VAR_19);
   VAR_19[2] += 24;
   FUNC_5(VAR_19, VAR_20);
   VAR_20[2] -= 512;
   VAR_10 = FUNC_15(VAR_19, VAR_20, VAR_9, VAR_24, 10);

   for (VAR_8 = VAR_10-1; VAR_8 >= 0; VAR_8--) {
    if (FUNC_12(VAR_9[VAR_8])) {
     break;
    }
   }
   if (VAR_8 < 0) {

   }
   if (VAR_8 >= 0) {

    FUNC_5(VAR_24[VAR_8], VAR_7->goal.origin);
    VAR_7->goal.areanum = VAR_9[VAR_8];
    FUNC_8(VAR_7->goal.mins, 8, 8, 8);
    FUNC_8(VAR_7->goal.maxs, -8, -8, -8);

    for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
    {
     if (VAR_25[VAR_8] < 0) VAR_7->goal.maxs[VAR_8] += FUNC_11(VAR_25[VAR_8]) * FUNC_11(VAR_31[VAR_8]);
     else VAR_7->goal.mins[VAR_8] += FUNC_11(VAR_25[VAR_8]) * FUNC_11(VAR_30[VAR_8]);
    }

    VAR_7->goal.entitynum = VAR_12;
    VAR_7->goal.number = 0;
    VAR_7->goal.flags = 0;
    return VAR_4;
   }
  }
  return VAR_3;
 }
 else {

  FUNC_14(VAR_2, VAR_28, VAR_29);
  for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
   if (VAR_25[VAR_8] < 0) VAR_15 += FUNC_11(VAR_25[VAR_8]) * FUNC_11(VAR_29[VAR_8]);
   else VAR_15 += FUNC_11(VAR_25[VAR_8]) * FUNC_11(VAR_28[VAR_8]);
  }

  FUNC_6(VAR_26, -VAR_15, VAR_25, VAR_27);

  FUNC_5(VAR_27, VAR_19);
  VAR_19[2] += 24;
  FUNC_5(VAR_19, VAR_20);
  VAR_20[2] -= 100;
  VAR_10 = FUNC_15(VAR_19, VAR_20, VAR_9, ((void*)0), 10);

  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   if (FUNC_12(VAR_9[VAR_8])) {
    break;
   }
  }
  if (VAR_8 < VAR_10) {

   FUNC_5(VAR_26, VAR_7->goal.origin);
   VAR_7->goal.areanum = VAR_9[VAR_8];
   FUNC_9(VAR_21, VAR_26, VAR_7->goal.mins);
   FUNC_9(VAR_22, VAR_26, VAR_7->goal.maxs);

   for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
   {
    if (VAR_25[VAR_8] < 0) VAR_7->goal.maxs[VAR_8] += FUNC_11(VAR_25[VAR_8]) * FUNC_11(VAR_31[VAR_8]);
    else VAR_7->goal.mins[VAR_8] += FUNC_11(VAR_25[VAR_8]) * FUNC_11(VAR_30[VAR_8]);
   }

   VAR_7->goal.entitynum = VAR_12;
   VAR_7->goal.number = 0;
   VAR_7->goal.flags = 0;
   return VAR_4;
  }
 }
 return VAR_3;
}
