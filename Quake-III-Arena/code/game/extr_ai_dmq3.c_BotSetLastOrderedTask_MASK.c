
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ lastgoal_ltgtype; scalar_t__ redflagstatus; scalar_t__ blueflagstatus; int ordered; scalar_t__ ltgtype; int origin; int areanum; scalar_t__ teamgoal_time; int lastgoal_teammate; int teammate; int lastgoal_teamgoal; int teamgoal; int lastgoal_decisionmaker; int decisionmaker; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_13__ {int areanum; } ;
typedef TYPE_2__ bot_goal_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int ,int ,int ) ;

int FUNC_9(bot_state_t *VAR_8) {

 if (VAR_5 == VAR_0) {

  if ( VAR_8->lastgoal_ltgtype == VAR_2 ) {
   if ( FUNC_4(VAR_8) == VAR_3 ) {
    if ( VAR_8->redflagstatus == 0 ) {
     VAR_8->lastgoal_ltgtype = 0;
    }
   }
   else {
    if ( VAR_8->blueflagstatus == 0 ) {
     VAR_8->lastgoal_ltgtype = 0;
    }
   }
  }
 }

 if ( VAR_8->lastgoal_ltgtype ) {
  VAR_8->decisionmaker = VAR_8->lastgoal_decisionmaker;
  VAR_8->ordered = VAR_7;
  VAR_8->ltgtype = VAR_8->lastgoal_ltgtype;
  FUNC_7(&VAR_8->teamgoal, &VAR_8->lastgoal_teamgoal, sizeof(bot_goal_t));
  VAR_8->teammate = VAR_8->lastgoal_teammate;
  VAR_8->teamgoal_time = FUNC_6() + 300;
  FUNC_3(VAR_8);

  if ( VAR_5 == VAR_0 ) {
   if ( VAR_8->ltgtype == VAR_1 ) {
    bot_goal_t *VAR_9, *VAR_10;
    int VAR_11, VAR_12;

    VAR_9 = FUNC_5(VAR_8);
    VAR_10 = FUNC_0(VAR_8);
    VAR_11 = FUNC_8(VAR_8->areanum, VAR_8->origin, VAR_9->areanum, VAR_4);
    VAR_12 = FUNC_8(VAR_8->areanum, VAR_8->origin, VAR_10->areanum, VAR_4);

    if (VAR_12 > VAR_11) {

     FUNC_1(VAR_8, FUNC_2(VAR_8));
    }
   }
  }
  return VAR_7;
 }
 return VAR_6;
}
