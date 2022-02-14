
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_5__ {scalar_t__ last_made_runnable_time; scalar_t__ last_run_time; int sched_pri; } ;


 int FUNC_0 (int ,uintptr_t,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void
FUNC_4(thread_t VAR_3, bool VAR_4)
{
 FUNC_1(VAR_3->last_made_runnable_time != VAR_1);

 if (VAR_3->last_run_time > VAR_3->last_made_runnable_time) {
  return;
 }

 uint64_t VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 > VAR_2) {
  FUNC_0(VAR_0, (uintptr_t)FUNC_3(VAR_3),
    VAR_3->sched_pri, VAR_4 ? 1 : 0);
 }
}
