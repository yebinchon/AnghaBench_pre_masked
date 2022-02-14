
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* thread_call_t ;
typedef int thread_call_param_t ;
typedef TYPE_3__* thread_call_group_t ;
typedef int spl_t ;
typedef int boolean_t ;
struct TYPE_11__ {int pending_queue; } ;
struct TYPE_9__ {int param1; int * queue; int * func; } ;
struct TYPE_10__ {int tc_flags; TYPE_1__ tc_call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;

boolean_t
FUNC_5(
  thread_call_t VAR_2,
  thread_call_param_t VAR_3)
{
 boolean_t VAR_4 = VAR_1;
 thread_call_group_t VAR_5;

 FUNC_1(VAR_2->tc_call.func != ((void*)0));

 FUNC_1((VAR_2->tc_flags & VAR_0) == 0);

 VAR_5 = FUNC_4(VAR_2);

 spl_t VAR_6 = FUNC_2();

 if (VAR_2->tc_call.queue != &VAR_5->pending_queue) {
  VAR_4 = FUNC_0(VAR_2, VAR_5);
 }

 VAR_2->tc_call.param1 = VAR_3;

 FUNC_3(VAR_6);

 return (VAR_4);
}
