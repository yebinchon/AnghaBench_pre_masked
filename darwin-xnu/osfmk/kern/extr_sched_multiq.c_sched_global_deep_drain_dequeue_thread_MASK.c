
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
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {scalar_t__ count; } ;
struct TYPE_11__ {int runq; } ;
struct TYPE_10__ {int runq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int *,scalar_t__*) ;

__attribute__((used)) static thread_t
FUNC_5(entry_queue_t VAR_2)
{
 boolean_t VAR_3 = VAR_0;
 sched_entry_t VAR_4;
 group_runq_t VAR_5;
 thread_t VAR_6;
 integer_t VAR_7;
 sched_group_t VAR_8;

 FUNC_0(VAR_2->count > 0);

 VAR_4 = FUNC_1(VAR_2);

 VAR_8 = FUNC_3(VAR_4);
 VAR_5 = &VAR_8->runq;

 VAR_6 = FUNC_4(VAR_5, &VAR_7, &VAR_3);

 VAR_6->runq = VAR_1;

 if (VAR_3) {
  FUNC_2(VAR_2, VAR_4);
 }

 return VAR_6;
}
