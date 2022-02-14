
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_call_param_t ;
typedef TYPE_1__* thread_call_group_t ;
typedef int * thread_call_func_t ;
typedef int spl_t ;
typedef int boolean_t ;
struct TYPE_4__ {int * delayed_queues; int pending_queue; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_3 ;

boolean_t
FUNC_4(
  thread_call_func_t VAR_4,
  thread_call_param_t VAR_5,
  boolean_t VAR_6)
{
 boolean_t VAR_7;

 FUNC_1(VAR_4 != ((void*)0));

 spl_t VAR_8 = FUNC_2();


 thread_call_group_t VAR_9 = &VAR_3[VAR_2];

 if (VAR_6) {

  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_9, VAR_6, &VAR_9->pending_queue) |
           FUNC_0(VAR_4, VAR_5, VAR_9, VAR_6, &VAR_9->delayed_queues[VAR_0]) |
           FUNC_0(VAR_4, VAR_5, VAR_9, VAR_6, &VAR_9->delayed_queues[VAR_1]);
 } else {

  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_9, VAR_6, &VAR_9->pending_queue) ||
           FUNC_0(VAR_4, VAR_5, VAR_9, VAR_6, &VAR_9->delayed_queues[VAR_0]) ||
           FUNC_0(VAR_4, VAR_5, VAR_9, VAR_6, &VAR_9->delayed_queues[VAR_1]);
 }

 FUNC_3(VAR_8);

 return (VAR_7);
}
