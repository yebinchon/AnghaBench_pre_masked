
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* thread_call_t ;
typedef int spl_t ;
typedef int boolean_t ;
struct TYPE_7__ {TYPE_3__* thc_call; } ;
struct TYPE_10__ {TYPE_1__ thc_state; } ;
struct TYPE_8__ {int func; } ;
struct TYPE_9__ {int tc_flags; TYPE_2__ tc_call; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_3__*,int ) ;

boolean_t
FUNC_5(thread_call_t VAR_2)
{
 if ((VAR_2->tc_flags & VAR_0) == 0)
  FUNC_3("thread_call_wait_once: can't wait on thread call whose storage I don't own");

 if ((VAR_2->tc_flags & VAR_1) == 0)
  FUNC_3("thread_call_wait_once: can't wait_once on a non-once call");

 if (!FUNC_2())
  FUNC_3("unsafe thread_call_wait_once");

 if (FUNC_0()->thc_state.thc_call == VAR_2)
  FUNC_3("thread_call_wait_once: deadlock waiting on self from inside call: %p to function %p",
        VAR_2, VAR_2->tc_call.func);

 spl_t VAR_3 = FUNC_1();

 boolean_t VAR_4 = FUNC_4(VAR_2, VAR_3);


 return VAR_4;
}
