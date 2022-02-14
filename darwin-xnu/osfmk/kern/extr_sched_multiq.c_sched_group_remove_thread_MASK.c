
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* sched_group_t ;
typedef int sched_entry_t ;
typedef int integer_t ;
typedef int entry_queue_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int runq; } ;
struct TYPE_10__ {int sched_pri; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(
                          entry_queue_t VAR_1,
                          sched_group_t VAR_2,
                          thread_t VAR_3)
{
 integer_t VAR_4 = VAR_3->sched_pri;
 sched_entry_t VAR_5 = FUNC_4(VAR_2, VAR_4);
 boolean_t VAR_6 = FUNC_5(&VAR_2->runq, VAR_3, VAR_4);

 if (VAR_6) {
  FUNC_1(VAR_1, VAR_5);
 }







}
