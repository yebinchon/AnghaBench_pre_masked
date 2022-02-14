
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_32__ {scalar_t__ enemy; scalar_t__ lastenemyareanum; int tfl; int chase_time; int check_time; double nbg_time; double* ideal_viewangles; int flags; scalar_t__ areanum; int weaponnum; int origin; int ms; scalar_t__ ltg_time; int lastenemyorigin; int viewangles; int eye; int entitynum; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_33__ {int flags; int weapon; int movedir; int ideal_viewangles; scalar_t__ failure; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_34__ {scalar_t__ entitynum; scalar_t__ areanum; double* origin; int maxs; int mins; } ;
typedef TYPE_3__ bot_goal_t ;
struct TYPE_35__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int,TYPE_3__*,float) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 int FUNC_21 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_22 (int ,double*) ;
 int FUNC_23 (int ,int,int,int) ;
 int FUNC_24 (int ,int ,int ) ;
 TYPE_8__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_25 (TYPE_2__*,int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_26 (int ,TYPE_3__*,int,int,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ,TYPE_3__*) ;
 int FUNC_30 (int ,double*) ;

int FUNC_31(bot_state_t *VAR_13)
{
 bot_goal_t VAR_14;
 vec3_t VAR_15, VAR_16;
 bot_moveresult_t VAR_17;
 float VAR_18;

 if (FUNC_15(VAR_13)) {
  FUNC_4(VAR_13, "battle chase: observer");
  return VAR_11;
 }

 if (FUNC_13(VAR_13)) {
  FUNC_3(VAR_13, "battle chase: intermission");
  return VAR_11;
 }

 if (FUNC_14(VAR_13)) {
  FUNC_5(VAR_13, "battle chase: bot dead");
  return VAR_11;
 }

 if (VAR_13->enemy < 0) {
  FUNC_6(VAR_13, "battle chase: no enemy");
  return VAR_11;
 }

 if (FUNC_10(VAR_13->entitynum, VAR_13->eye, VAR_13->viewangles, 360, VAR_13->enemy)) {
  FUNC_0(VAR_13, "battle chase");
  return VAR_11;
 }

 if (FUNC_11(VAR_13, -1)) {
  FUNC_0(VAR_13, "battle chase: better enemy");
  return VAR_11;
 }

 if (!VAR_13->lastenemyareanum) {
  FUNC_6(VAR_13, "battle chase: no enemy area");
  return VAR_11;
 }

 VAR_13->tfl = VAR_5;
 if (VAR_10.integer) VAR_13->tfl |= VAR_6;

 if (FUNC_12(VAR_13)) VAR_13->tfl |= VAR_7|VAR_9;

 if (FUNC_9(VAR_13)) {
  VAR_13->tfl |= VAR_8;
 }

 FUNC_16(VAR_13);

 VAR_14.entitynum = VAR_13->enemy;
 VAR_14.areanum = VAR_13->lastenemyareanum;
 FUNC_22(VAR_13->lastenemyorigin, VAR_14.origin);
 FUNC_23(VAR_14.mins, -8, -8, -8);
 FUNC_23(VAR_14.maxs, 8, 8, 8);

 if (FUNC_29(VAR_13->origin, &VAR_14)) VAR_13->chase_time = 0;

 if (!VAR_13->chase_time || VAR_13->chase_time < FUNC_21() - 10) {
  FUNC_6(VAR_13, "battle chase: time out");
  return VAR_11;
 }

 if (VAR_13->check_time < FUNC_21()) {
  VAR_13->check_time = FUNC_21() + 1;
  VAR_18 = 150;

  if (FUNC_17(VAR_13, VAR_13->tfl, &VAR_14, VAR_18)) {

   VAR_13->nbg_time = FUNC_21() + 0.1 * VAR_18 + 1;
   FUNC_28(VAR_13->ms);
   FUNC_1(VAR_13, "battle chase: nbg");
   return VAR_11;
  }
 }

 FUNC_19(VAR_13, VAR_13->enemy);

 FUNC_18(VAR_13);

 FUNC_25(&VAR_17, VAR_13->ms, &VAR_14, VAR_13->tfl);

 if (VAR_17.failure) {

  FUNC_27(VAR_13->ms);

  VAR_13->ltg_time = 0;
 }

 FUNC_7(VAR_13, &VAR_17, VAR_11);

 if (VAR_17.flags & (VAR_2|VAR_1|VAR_4)) {
  FUNC_22(VAR_17.ideal_viewangles, VAR_13->ideal_viewangles);
 }
 else if (!(VAR_13->flags & VAR_0)) {
  if (VAR_13->chase_time > FUNC_21() - 2) {
   FUNC_8(VAR_13);
  }
  else {
   if (FUNC_26(VAR_13->ms, &VAR_14, VAR_13->tfl, 300, VAR_15)) {
    FUNC_24(VAR_15, VAR_13->origin, VAR_16);
    FUNC_30(VAR_16, VAR_13->ideal_viewangles);
   }
   else {
    FUNC_30(VAR_17.movedir, VAR_13->ideal_viewangles);
   }
  }
  VAR_13->ideal_viewangles[2] *= 0.5;
 }

 if (VAR_17.flags & VAR_3) VAR_13->weaponnum = VAR_17.weapon;

 if (VAR_13->areanum == VAR_13->lastenemyareanum) VAR_13->chase_time = 0;

 if (FUNC_20(VAR_13)) {
  FUNC_2(VAR_13, "battle chase: wants to retreat");
  return VAR_12;
 }
 return VAR_12;
}
