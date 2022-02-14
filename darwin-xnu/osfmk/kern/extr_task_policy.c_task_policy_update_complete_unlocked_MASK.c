
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef TYPE_2__* task_pend_token_t ;
struct TYPE_8__ {scalar_t__ tpt_update_coal_sfi; scalar_t__ tpt_update_live_donor; scalar_t__ tpt_update_watchers; scalar_t__ tpt_update_timers; scalar_t__ tpt_update_sockets; } ;
struct TYPE_7__ {int * coalition; int bsd_info; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;

void
FUNC_5(task_t VAR_3, task_pend_token_t VAR_4)
{






 if (VAR_4->tpt_update_timers)
  FUNC_2();






 if (VAR_4->tpt_update_live_donor)
  FUNC_4(VAR_3);
}
