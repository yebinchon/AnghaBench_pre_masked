
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ltgtype; int camp_time; int* inventory; int ordered; int origin; int areanum; int character; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_11__ {int areanum; } ;
typedef TYPE_2__ bot_goal_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 float FUNC_4 () ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int,TYPE_2__*) ;
 float FUNC_7 (int ,int ,int ,int) ;

int FUNC_8(bot_state_t *VAR_18) {
 float VAR_19;
 int VAR_20, VAR_21, VAR_22;
 bot_goal_t VAR_23, VAR_24;

 VAR_19 = FUNC_7(VAR_18->character, VAR_0, 0, 1);
 if (VAR_19 < 0.1) return VAR_16;

 if (VAR_18->ltgtype == VAR_14 ||
   VAR_18->ltgtype == VAR_13 ||
   VAR_18->ltgtype == VAR_9 ||
   VAR_18->ltgtype == VAR_10 ||
   VAR_18->ltgtype == VAR_12 ||
   VAR_18->ltgtype == VAR_7 ||
   VAR_18->ltgtype == VAR_8 ||
   VAR_18->ltgtype == VAR_11) {
  return VAR_16;
 }

 if (VAR_18->camp_time > FUNC_2() - 60 + 300 * (1-VAR_19)) return VAR_16;

 if (FUNC_4() > VAR_19) {
  VAR_18->camp_time = FUNC_2();
  return VAR_16;
 }

 if (FUNC_0(VAR_18) < 50) return VAR_16;

 if ((VAR_18->inventory[VAR_4] <= 0 || VAR_18->inventory[VAR_5 < 10]) &&
  (VAR_18->inventory[VAR_3] <= 0 || VAR_18->inventory[VAR_6] < 10) &&
  (VAR_18->inventory[VAR_1] <= 0 || VAR_18->inventory[VAR_2] < 10)) {
  return VAR_16;
 }

 VAR_22 = 99999;
 for (VAR_20 = FUNC_6(0, &VAR_23); VAR_20; VAR_20 = FUNC_6(VAR_20, &VAR_23)) {
  VAR_21 = FUNC_5(VAR_18->areanum, VAR_18->origin, VAR_23.areanum, VAR_15);
  if (VAR_21 && VAR_21 < VAR_22) {
   VAR_22 = VAR_21;
   FUNC_3(&VAR_24, &VAR_23, sizeof(bot_goal_t));
  }
 }
 if (VAR_22 > 150) return VAR_16;

 FUNC_1(VAR_18, &VAR_24);
 VAR_18->ordered = VAR_16;

 return VAR_17;
}
