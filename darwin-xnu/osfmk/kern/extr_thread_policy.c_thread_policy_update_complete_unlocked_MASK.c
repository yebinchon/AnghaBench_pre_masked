
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef TYPE_3__* task_pend_token_t ;
struct TYPE_10__ {scalar_t__ tpt_update_thread_sfi; scalar_t__ tpt_update_throttle; scalar_t__ tpt_update_sockets; } ;
struct TYPE_9__ {int uthread; TYPE_1__* task; } ;
struct TYPE_8__ {int bsd_info; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(thread_t VAR_0, task_pend_token_t VAR_1)
{





 if (VAR_1->tpt_update_throttle)
  FUNC_1(VAR_0->uthread);

 if (VAR_1->tpt_update_thread_sfi)
  FUNC_2(VAR_0);
}
