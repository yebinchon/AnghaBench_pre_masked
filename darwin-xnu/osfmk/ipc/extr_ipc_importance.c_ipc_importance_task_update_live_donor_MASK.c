
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_2__* task_t ;
typedef TYPE_3__* ipc_importance_task_t ;
typedef int iit_update_type_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int iit_donor; int iit_transitions; TYPE_2__* iit_task; } ;
struct TYPE_10__ {int tep_live_donor; } ;
struct TYPE_11__ {TYPE_1__ effective_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int,int ,int ,scalar_t__,int ) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;

void
FUNC_9(ipc_importance_task_t VAR_9)
{
 uint32_t VAR_10;
 boolean_t VAR_11;
 boolean_t VAR_12;
 task_t VAR_13;

 FUNC_2(VAR_9 != ((void*)0));





 if (!FUNC_5(VAR_9)) {
  return;
 }

 FUNC_3();


 VAR_13 = VAR_9->iit_task;
 if (VAR_8 == VAR_13) {
  FUNC_7();
  return;
 }
 VAR_11 = FUNC_4(VAR_9);


 VAR_10 = VAR_13->effective_policy.tep_live_donor;
 VAR_9->iit_donor = VAR_10;

 VAR_12 = FUNC_4(VAR_9);


 if (VAR_11 != VAR_12) {
  iit_update_type_t VAR_14;


  if (0 == VAR_11) {
   VAR_9->iit_transitions++;
   VAR_14 = VAR_4;
  } else {
   VAR_14 = VAR_3;
  }
  FUNC_6(VAR_9, VAR_14, VAR_2);
 }







 FUNC_7();
}
