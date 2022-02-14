
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_40__ {scalar_t__ enemy; int tfl; float enemyvisible_time; int* lastenemyorigin; int lastenemyareanum; float check_time; float nbg_time; int* ideal_viewangles; int flags; int weaponnum; int origin; int ms; int character; scalar_t__ ltg_time; int viewangles; int eye; int entitynum; int gs; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_41__ {int flags; int* ideal_viewangles; int* movedir; int weapon; scalar_t__ failure; } ;
typedef TYPE_2__ bot_moveresult_t ;
typedef int bot_goal_t ;
struct TYPE_42__ {int* origin; } ;
typedef TYPE_3__ aas_entityinfo_t ;
struct TYPE_45__ {scalar_t__ entitynum; } ;
struct TYPE_44__ {scalar_t__ integer; } ;
struct TYPE_43__ {scalar_t__ entitynum; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_17 (int ,int ,int ,int,int) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 scalar_t__ FUNC_21 (TYPE_1__*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 scalar_t__ FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*,int,int,int *) ;
 int FUNC_25 (TYPE_1__*) ;
 scalar_t__ FUNC_26 (TYPE_1__*,int,int *,float) ;
 int FUNC_27 (int*) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*,int) ;
 int FUNC_30 (TYPE_1__*,int) ;
 scalar_t__ FUNC_31 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_32 (TYPE_3__*) ;
 float FUNC_33 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_34 (int*,int*) ;
 int FUNC_35 (int*,int ,int*) ;
 TYPE_7__ VAR_15 ;
 TYPE_6__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_5__ VAR_20 ;
 scalar_t__ FUNC_36 (int) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (TYPE_2__*,int ,int *,int) ;
 scalar_t__ FUNC_39 (int ,int *,int,int,int*) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int ) ;
 float FUNC_42 (int ,int ,int ,int) ;
 int FUNC_43 (int*,int*) ;

int FUNC_44(bot_state_t *VAR_21) {
 bot_goal_t VAR_22;
 aas_entityinfo_t VAR_23;
 bot_moveresult_t VAR_24;
 vec3_t VAR_25, VAR_26;
 float VAR_27, VAR_28;
 int VAR_29;

 if (FUNC_23(VAR_21)) {
  FUNC_5(VAR_21, "battle retreat: observer");
  return VAR_18;
 }

 if (FUNC_21(VAR_21)) {
  FUNC_4(VAR_21, "battle retreat: intermission");
  return VAR_18;
 }

 if (FUNC_22(VAR_21)) {
  FUNC_6(VAR_21, "battle retreat: bot dead");
  return VAR_18;
 }

 if (VAR_21->enemy < 0) {
  FUNC_7(VAR_21, "battle retreat: no enemy");
  return VAR_18;
 }

 FUNC_16(VAR_21->enemy, &VAR_23);
 if (FUNC_32(&VAR_23)) {
  FUNC_7(VAR_21, "battle retreat: enemy dead");
  return VAR_18;
 }

 if (FUNC_18(VAR_21, VAR_21->enemy)) {



 }

 VAR_21->tfl = VAR_11;
 if (VAR_16.integer) VAR_21->tfl |= VAR_12;

 if (FUNC_20(VAR_21)) VAR_21->tfl |= VAR_13|VAR_14;

 FUNC_25(VAR_21);

 FUNC_30(VAR_21, VAR_21->enemy);

 if (FUNC_31(VAR_21)) {

  FUNC_37(VAR_21->gs);

  FUNC_0(VAR_21, "battle retreat: wants to chase");
  return VAR_18;
 }

 if (FUNC_17(VAR_21->entitynum, VAR_21->eye, VAR_21->viewangles, 360, VAR_21->enemy)) {
  VAR_21->enemyvisible_time = FUNC_33();
  FUNC_34(VAR_23.origin, VAR_25);

  if (VAR_21->enemy >= VAR_5) {







  }

  VAR_29 = FUNC_27(VAR_25);
  if (VAR_29 && FUNC_36(VAR_29)) {
   FUNC_34(VAR_25, VAR_21->lastenemyorigin);
   VAR_21->lastenemyareanum = VAR_29;
  }
 }

 if (VAR_21->enemyvisible_time < FUNC_33() - 4) {
  FUNC_7(VAR_21, "battle retreat: lost enemy");
  return VAR_18;
 }

 else if (VAR_21->enemyvisible_time < FUNC_33()) {

  if (FUNC_18(VAR_21, -1)) {
   FUNC_1(VAR_21, "battle retreat: another enemy");
   return VAR_18;
  }
 }

 FUNC_29(VAR_21, VAR_19);

 FUNC_12(VAR_21);

 if (!FUNC_24(VAR_21, VAR_21->tfl, VAR_19, &VAR_22)) {
  FUNC_3(VAR_21, "battle retreat: no way out");
  return VAR_18;
 }

 if (VAR_21->check_time < FUNC_33()) {
  VAR_21->check_time = FUNC_33() + 1;
  VAR_28 = 150;
  if (FUNC_26(VAR_21, VAR_21->tfl, &VAR_22, VAR_28)) {
   FUNC_41(VAR_21->ms);

   VAR_21->nbg_time = FUNC_33() + VAR_28 / 100 + 1;
   FUNC_2(VAR_21, "battle retreat: nbg");
   return VAR_18;
  }
 }

 FUNC_28(VAR_21);

 FUNC_38(&VAR_24, VAR_21->ms, &VAR_22, VAR_21->tfl);

 if (VAR_24.failure) {

  FUNC_40(VAR_21->ms);

  VAR_21->ltg_time = 0;
 }

 FUNC_9(VAR_21, &VAR_24, VAR_18);

 FUNC_15(VAR_21);

 if (VAR_24.flags & (VAR_6|VAR_9)) {
  FUNC_34(VAR_24.ideal_viewangles, VAR_21->ideal_viewangles);
 }
 else if (!(VAR_24.flags & VAR_7)
    && !(VAR_21->flags & VAR_0) ) {
  VAR_27 = FUNC_42(VAR_21->character, VAR_1, 0, 1);

  if (VAR_27 > 0.3) {
   FUNC_11(VAR_21);
  }
  else {
   if (FUNC_39(VAR_21->ms, &VAR_22, VAR_21->tfl, 300, VAR_25)) {
    FUNC_35(VAR_25, VAR_21->origin, VAR_26);
    FUNC_43(VAR_26, VAR_21->ideal_viewangles);
   }
   else {
    FUNC_43(VAR_24.movedir, VAR_21->ideal_viewangles);
   }
   VAR_21->ideal_viewangles[2] *= 0.5;
  }
 }

 if (VAR_24.flags & VAR_8) VAR_21->weaponnum = VAR_24.weapon;

 FUNC_14(VAR_21);

 return VAR_19;
}
