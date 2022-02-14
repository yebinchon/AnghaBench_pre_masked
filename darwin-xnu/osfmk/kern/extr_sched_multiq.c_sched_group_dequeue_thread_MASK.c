
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* sched_group_t ;
typedef int integer_t ;
typedef int * group_runq_t ;
typedef int entry_queue_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int runq; } ;
struct TYPE_7__ {int runq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 (int *,int *,scalar_t__*) ;

__attribute__((used)) static thread_t
FUNC_3(
                           entry_queue_t VAR_2,
                           sched_group_t VAR_3)
{
 group_runq_t VAR_4 = &VAR_3->runq;
 boolean_t VAR_5 = VAR_0;
 thread_t VAR_6;
 integer_t VAR_7;

 VAR_6 = FUNC_2(VAR_4, &VAR_7, &VAR_5);

 VAR_6->runq = VAR_1;

 if (VAR_5) {
  FUNC_0(VAR_2, FUNC_1(VAR_3, VAR_7));
 }

 return VAR_6;
}
