
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* sched_group_t ;
typedef int integer_t ;
typedef int entry_queue_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int * entries; int runq; } ;
struct TYPE_7__ {int sched_pri; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(
                           entry_queue_t VAR_2,
                           sched_group_t VAR_3,
                           thread_t VAR_4,
                           integer_t VAR_5)
{







 int VAR_6 = VAR_4->sched_pri;

 boolean_t VAR_7 = FUNC_4(&VAR_3->runq, VAR_4, VAR_6, VAR_5);

 if (VAR_7) {




  FUNC_1(VAR_2, &VAR_3->entries[VAR_6], VAR_5);
 } else if (VAR_5 & VAR_0) {

  FUNC_0(VAR_2, &VAR_3->entries[VAR_6], VAR_5);
 }
}
