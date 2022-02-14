
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_37__ {int tfl; int enemy; int killedenemy_time; int thinktime; int check_time; scalar_t__ ltgtype; int nbg_time; double* ideal_viewangles; int flags; int weaponnum; int origin; int ms; scalar_t__ ltg_time; int gs; int client; scalar_t__ stand_time; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_38__ {int flags; int weapon; int movedir; int ideal_viewangles; scalar_t__ failure; } ;
typedef TYPE_2__ bot_moveresult_t ;
typedef int bot_goal_t ;
struct TYPE_39__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*,int) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int,int,int *) ;
 int FUNC_22 (TYPE_1__*) ;
 scalar_t__ FUNC_23 (TYPE_1__*,int,int *,int) ;
 int FUNC_24 (TYPE_1__*,int ) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*,int) ;
 int FUNC_27 (TYPE_1__*) ;
 scalar_t__ FUNC_28 (TYPE_1__*) ;
 int FUNC_29 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_30 (int ,double*) ;
 scalar_t__ FUNC_31 (int ) ;
 int FUNC_32 (int ,int ,int ) ;
 TYPE_4__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 double FUNC_33 () ;
 int FUNC_34 (int ) ;
 int FUNC_35 (TYPE_2__*,int ,int *,int) ;
 scalar_t__ FUNC_36 (int ,int *,int,int,int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ,double*) ;

int FUNC_41(bot_state_t *VAR_19)
{
 bot_goal_t VAR_20;
 vec3_t VAR_21, VAR_22;
 bot_moveresult_t VAR_23;
 int VAR_24;



 if (FUNC_20(VAR_19)) {
  FUNC_3(VAR_19, "seek ltg: observer");
  return VAR_17;
 }

 if (FUNC_18(VAR_19)) {
  FUNC_2(VAR_19, "seek ltg: intermission");
  return VAR_17;
 }

 if (FUNC_19(VAR_19)) {
  FUNC_4(VAR_19, "seek ltg: bot dead");
  return VAR_17;
 }

 if (FUNC_13(VAR_19)) {
  VAR_19->stand_time = FUNC_29() + FUNC_12(VAR_19);
  FUNC_6(VAR_19, "seek ltg: random chat");
  return VAR_17;
 }

 VAR_19->tfl = VAR_10;
 if (VAR_15.integer) VAR_19->tfl |= VAR_11;

 if (FUNC_17(VAR_19)) VAR_19->tfl |= VAR_12|VAR_14;

 if (FUNC_11(VAR_19)) {
  VAR_19->tfl |= VAR_13;
 }

 FUNC_22(VAR_19);

 VAR_19->enemy = -1;

 if (VAR_19->killedenemy_time > FUNC_29() - 2) {
  if (FUNC_33() < VAR_19->thinktime * 1) {
   FUNC_39(VAR_19->client);
  }
 }

 if (FUNC_15(VAR_19, -1)) {
  if (FUNC_28(VAR_19)) {

   FUNC_1(VAR_19, "seek ltg: found enemy");
   return VAR_17;
  }
  else {
   FUNC_38(VAR_19->ms);

   FUNC_34(VAR_19->gs);

   FUNC_0(VAR_19, "seek ltg: found enemy");
   return VAR_17;
  }
 }

 FUNC_26(VAR_19, VAR_17);

 if (!FUNC_21(VAR_19, VAR_19->tfl, VAR_17, &VAR_20)) {
  return VAR_18;
 }

 if (VAR_19->check_time < FUNC_29()) {
  VAR_19->check_time = FUNC_29() + 0.5;

  FUNC_27(VAR_19);

  if (VAR_19->ltgtype == VAR_4) VAR_24 = 400;
  else VAR_24 = 150;
  if (FUNC_23(VAR_19, VAR_19->tfl, &VAR_20, VAR_24)) {
   FUNC_38(VAR_19->ms);





   VAR_19->nbg_time = FUNC_29() + 4 + VAR_24 * 0.01;
   FUNC_5(VAR_19, "ltg seek: nbg");
   return VAR_17;
  }
 }

 if (FUNC_9(VAR_19, &VAR_20))
  return VAR_17;

 FUNC_25(VAR_19);

 FUNC_35(&VAR_23, VAR_19->ms, &VAR_20, VAR_19->tfl);

 if (VAR_23.failure) {

  FUNC_37(VAR_19->ms);

  VAR_19->ltg_time = 0;
 }

 FUNC_8(VAR_19, &VAR_23, VAR_18);

 FUNC_14(VAR_19, &VAR_23);

 if (VAR_23.flags & (VAR_6|VAR_5|VAR_8)) {
  FUNC_30(VAR_23.ideal_viewangles, VAR_19->ideal_viewangles);
 }

 else if (VAR_23.flags & VAR_9) {
  if (FUNC_33() < VAR_19->thinktime * 0.8) {
   FUNC_24(VAR_19, VAR_21);
   FUNC_32(VAR_21, VAR_19->origin, VAR_22);
   FUNC_40(VAR_22, VAR_19->ideal_viewangles);
   VAR_19->ideal_viewangles[2] *= 0.5;
  }
 }
 else if (!(VAR_19->flags & VAR_0)) {
  if (FUNC_36(VAR_19->ms, &VAR_20, VAR_19->tfl, 300, VAR_21)) {
   FUNC_32(VAR_21, VAR_19->origin, VAR_22);
   FUNC_40(VAR_22, VAR_19->ideal_viewangles);
  }

  else if (FUNC_31(VAR_23.movedir)) {
   FUNC_40(VAR_23.movedir, VAR_19->ideal_viewangles);
  }
  else if (FUNC_33() < VAR_19->thinktime * 0.8) {
   FUNC_24(VAR_19, VAR_21);
   FUNC_32(VAR_21, VAR_19->origin, VAR_22);
   FUNC_40(VAR_22, VAR_19->ideal_viewangles);
   VAR_19->ideal_viewangles[2] *= 0.5;
  }
  VAR_19->ideal_viewangles[2] *= 0.5;
 }

 if (VAR_23.flags & VAR_7) VAR_19->weaponnum = VAR_23.weapon;

 return VAR_18;
}
