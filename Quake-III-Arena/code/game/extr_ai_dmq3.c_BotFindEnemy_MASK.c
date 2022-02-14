
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_19__ {int fraction; scalar_t__ ent; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_20__ {scalar_t__ lasthealth; scalar_t__* inventory; int client; scalar_t__ enemy; int enemysight_time; int enemysuicide; int enemyvisible_time; scalar_t__ entitynum; scalar_t__ enemydeath_time; int origin; int viewangles; int eye; int character; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_21__ {scalar_t__ entitynum; int origin; } ;
typedef TYPE_3__ bot_goal_t ;
struct TYPE_22__ {scalar_t__ number; int angles; int origin; int valid; } ;
typedef TYPE_4__ aas_entityinfo_t ;


 int FUNC_0 (TYPE_1__*,int ,int *,int *,int*,int,int ) ;
 int FUNC_1 (int,TYPE_4__*) ;
 float FUNC_2 (scalar_t__,int ,int ,float,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int FUNC_12 () ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_13 (int ,int,int*) ;
 int VAR_5 ;
 float FUNC_14 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_15 (int ,int*) ;
 float FUNC_16 (int*) ;
 int FUNC_17 (int ,int ,int*) ;
 TYPE_3__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__ VAR_14 ;
 float FUNC_18 (int ,int ,int ,int) ;
 int FUNC_19 (int*,int*) ;

int FUNC_20(bot_state_t *VAR_15, int VAR_16) {
 int VAR_17, VAR_18;
 float VAR_19, VAR_20, VAR_21, VAR_22;
 float VAR_23, VAR_24;
 aas_entityinfo_t VAR_25, VAR_26;
 vec3_t VAR_27, VAR_28;

 VAR_20 = FUNC_18(VAR_15->character, VAR_0, 0, 1);
 VAR_21 = FUNC_18(VAR_15->character, VAR_1, 0, 1);

 VAR_18 = VAR_15->lasthealth > VAR_15->inventory[VAR_4];

 VAR_15->lasthealth = VAR_15->inventory[VAR_4];

 if (VAR_16 >= 0) {
  FUNC_1(VAR_16, &VAR_26);
  if (FUNC_7(&VAR_26)) return VAR_12;
  FUNC_17(VAR_26.origin, VAR_15->origin, VAR_27);
  VAR_24 = FUNC_16(VAR_27);
 }
 else {
  VAR_24 = 0;
 }
 for (VAR_17 = 0; VAR_17 < VAR_11 && VAR_17 < VAR_5; VAR_17++) {

  if (VAR_17 == VAR_15->client) continue;

  if (VAR_17 == VAR_16) continue;

  FUNC_1(VAR_17, &VAR_25);

  if (!VAR_25.valid) continue;

  if (FUNC_9(&VAR_25) || VAR_25.number == VAR_15->entitynum) continue;

  if (FUNC_10(&VAR_25) && !FUNC_11(&VAR_25)) {
   continue;
  }

  if (VAR_21 < 0.5 && FUNC_8(&VAR_25)) continue;

  if (VAR_10 > FUNC_12() - 3) {
   FUNC_17(VAR_25.origin, VAR_9, VAR_27);
   if (FUNC_16(VAR_27) < FUNC_14(70)) continue;
  }

  FUNC_17(VAR_25.origin, VAR_15->origin, VAR_27);
  VAR_23 = FUNC_16(VAR_27);

  if (!FUNC_7(&VAR_25))
  {

   if (VAR_16 >= 0 && VAR_23 > VAR_24) continue;
  }

  if (VAR_23 > FUNC_14(900.0 + VAR_20 * 4000.0)) continue;

  if (FUNC_3(VAR_15, VAR_17)) continue;

  if (VAR_16 < 0 && (VAR_18 || FUNC_11(&VAR_25)))
   VAR_19 = 360;
  else
   VAR_19 = 90 + 90 - (90 - (VAR_23 > FUNC_14(810) ? FUNC_14(810) : VAR_23) / (810 * 9));

  VAR_22 = FUNC_2(VAR_15->entitynum, VAR_15->eye, VAR_15->viewangles, VAR_19, VAR_17);
  if (VAR_22 <= 0) continue;

  if (VAR_16 < 0 && VAR_23 > FUNC_14(100) && !VAR_18 && !FUNC_11(&VAR_25))
  {

   FUNC_17(VAR_15->origin, VAR_25.origin, VAR_27);
   FUNC_19(VAR_27, VAR_28);

   if (!FUNC_13(VAR_25.angles, 90, VAR_28)) {

    FUNC_5(VAR_15, VAR_17);

    if (FUNC_6(VAR_15)) continue;
   }
  }

  VAR_15->enemy = VAR_25.number;
  if (VAR_16 >= 0) VAR_15->enemysight_time = FUNC_12() - 2;
  else VAR_15->enemysight_time = FUNC_12();
  VAR_15->enemysuicide = VAR_12;
  VAR_15->enemydeath_time = 0;
  VAR_15->enemyvisible_time = FUNC_12();
  return VAR_13;
 }
 return VAR_12;
}
