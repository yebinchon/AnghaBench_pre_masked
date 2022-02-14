
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int lastair_time; int gs; int inventory; int origin; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_11__ {int origin; } ;
typedef TYPE_2__ bot_goal_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int,TYPE_2__*,float) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ) ;

int FUNC_8(bot_state_t *VAR_5, int VAR_6, bot_goal_t *VAR_7, float VAR_8) {
 bot_goal_t VAR_9;


 if (VAR_5->lastair_time < FUNC_1() - 6) {





  if (FUNC_0(VAR_5, &VAR_9)) {
   FUNC_6(VAR_5->gs, &VAR_9);
   return VAR_4;
  }
  else {

   while(FUNC_3(VAR_5->gs, VAR_5->origin, VAR_5->inventory, VAR_6, VAR_7, VAR_8)) {
    FUNC_4(VAR_5->gs, &VAR_9);

    if (!(FUNC_2(VAR_9.origin) & (VAR_2|VAR_1|VAR_0))) {
     return VAR_4;
    }
    FUNC_5(VAR_5->gs);
   }
   FUNC_7(VAR_5->gs);
  }
 }
 return VAR_3;
}
