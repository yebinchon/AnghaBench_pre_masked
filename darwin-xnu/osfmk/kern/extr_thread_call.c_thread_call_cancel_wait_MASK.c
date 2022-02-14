
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* thread_call_t ;
typedef int spl_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {TYPE_3__* thc_call; } ;
struct TYPE_12__ {TYPE_1__ thc_state; } ;
struct TYPE_10__ {int func; } ;
struct TYPE_11__ {int tc_flags; TYPE_2__ tc_call; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;

boolean_t
FUNC_8(thread_call_t VAR_3)
{
 if ((VAR_3->tc_flags & VAR_1) == 0)
  FUNC_4("thread_call_cancel_wait: can't wait on thread call whose storage I don't own");

 if (!FUNC_3())
  FUNC_4("unsafe thread_call_cancel_wait");

 if (FUNC_0()->thc_state.thc_call == VAR_3)
  FUNC_4("thread_call_cancel_wait: deadlock waiting on self from inside call: %p to function %p",
        VAR_3, VAR_3->tc_call.func);

 spl_t VAR_4 = FUNC_1();

 boolean_t VAR_5 = FUNC_5(VAR_3);

 if ((VAR_3->tc_flags & VAR_2) == VAR_2) {





  FUNC_7(VAR_3, VAR_4);

 } else {







  if (VAR_5 == VAR_0) {
   FUNC_6(VAR_3, VAR_4);

  } else {
   FUNC_2(VAR_4);
  }
 }

 return VAR_5;
}
