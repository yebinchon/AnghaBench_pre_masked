
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bot_state_t ;
struct TYPE_8__ {int entitynum; } ;
struct TYPE_9__ {int inuse; int origin; TYPE_1__ goal; void* start_time; void* time; } ;
typedef TYPE_2__ bot_activategoal_t ;
struct TYPE_10__ {int origin; } ;
typedef TYPE_3__ aas_entityinfo_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 void* FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_6(bot_state_t *VAR_2, bot_activategoal_t *VAR_3) {
 aas_entityinfo_t VAR_4;

 VAR_3->inuse = VAR_1;
 if (!VAR_3->time)
  VAR_3->time = FUNC_4() + 10;
 VAR_3->start_time = FUNC_4();
 FUNC_2(VAR_3->goal.entitynum, &VAR_4);
 FUNC_5(VAR_4.origin, VAR_3->origin);

 if (FUNC_3(VAR_2, VAR_3)) {

  FUNC_0(VAR_2, "BotGoForActivateGoal");
  return VAR_1;
 }
 else {

  FUNC_1(VAR_3, VAR_1);
  return VAR_0;
 }
}
