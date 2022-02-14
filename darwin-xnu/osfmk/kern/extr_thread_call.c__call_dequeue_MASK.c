
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_call_t ;
typedef TYPE_2__* thread_call_group_t ;
typedef int queue_head_t ;
typedef int boolean_t ;
struct TYPE_7__ {int pending_count; int pending_queue; int * delayed_queues; } ;
struct TYPE_6__ {int tc_finish_count; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static __inline__ boolean_t
FUNC_3(
 thread_call_t VAR_2,
 thread_call_group_t VAR_3)
{
 queue_head_t *VAR_4;

 VAR_4 = FUNC_2(FUNC_0(VAR_2));

 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_4 == &VAR_3->pending_queue ||
         VAR_4 == &VAR_3->delayed_queues[VAR_0] ||
         VAR_4 == &VAR_3->delayed_queues[VAR_1]);

  VAR_2->tc_finish_count++;
  if (VAR_4 == &VAR_3->pending_queue)
   VAR_3->pending_count--;
 }

 return (VAR_4 != ((void*)0));
}
