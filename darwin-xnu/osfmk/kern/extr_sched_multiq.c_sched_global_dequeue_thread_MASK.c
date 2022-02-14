
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* sched_group_t ;
typedef int sched_entry_t ;
typedef int integer_t ;
typedef int * group_runq_t ;
typedef TYPE_3__* entry_queue_t ;
typedef int boolean_t ;
struct TYPE_12__ {scalar_t__ count; } ;
struct TYPE_11__ {int runq; } ;
struct TYPE_10__ {int runq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static thread_t
FUNC_5(entry_queue_t VAR_3)
{
 boolean_t VAR_4 = VAR_0;
 sched_entry_t VAR_5;
 group_runq_t VAR_6;
 thread_t VAR_7;
 integer_t VAR_8;
 sched_group_t VAR_9;

 FUNC_0(VAR_3->count > 0);

 VAR_5 = FUNC_1(VAR_3);

 VAR_9 = FUNC_3(VAR_5);
 VAR_6 = &VAR_9->runq;

 VAR_7 = FUNC_4(VAR_6, &VAR_8, &VAR_4);

 VAR_7->runq = VAR_1;

 if (!VAR_4) {
  FUNC_2(VAR_3, VAR_5, VAR_2);
 }

 return VAR_7;
}
