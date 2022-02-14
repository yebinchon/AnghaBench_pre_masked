
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* sched_entry_t ;
typedef int * queue_t ;
typedef int integer_t ;
typedef TYPE_2__* entry_queue_t ;
struct TYPE_8__ {int * queues; } ;
struct TYPE_7__ {int sched_pri; int entry_links; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(
                          entry_queue_t VAR_2,
                          sched_entry_t VAR_3,
                          integer_t VAR_4)
{
 int VAR_5 = VAR_3->sched_pri;
 queue_t VAR_6 = &VAR_2->queues[VAR_5];







 if (VAR_4 & VAR_0)
  FUNC_2(VAR_6, &VAR_3->entry_links);
 else
  FUNC_1(VAR_6, &VAR_3->entry_links);
}
