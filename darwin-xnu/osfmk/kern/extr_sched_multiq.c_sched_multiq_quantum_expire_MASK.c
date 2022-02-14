
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* sched_entry_t ;
typedef TYPE_3__* processor_t ;
typedef int processor_set_t ;
typedef int entry_queue_t ;
struct TYPE_10__ {int current_pri; int processor_set; } ;
struct TYPE_9__ {scalar_t__ runq; } ;
struct TYPE_8__ {int sched_group; TYPE_3__* last_processor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(thread_t VAR_3)
{
 if (VAR_2) {





  processor_t VAR_4 = VAR_3->last_processor;
  processor_set_t VAR_5 = VAR_4->processor_set;
  entry_queue_t VAR_6 = FUNC_2(VAR_4);

  FUNC_3(VAR_5);

  sched_entry_t VAR_7 = FUNC_1(VAR_3->sched_group, VAR_4->current_pri);

  if (VAR_7->runq == VAR_0) {
   FUNC_0(VAR_6, VAR_7, VAR_1);
  }

  FUNC_4(VAR_5);
 }
}
