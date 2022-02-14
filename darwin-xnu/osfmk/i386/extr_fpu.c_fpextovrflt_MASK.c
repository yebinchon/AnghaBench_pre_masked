
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xstate_t ;
typedef int thread_t ;
struct x86_fx_thread_state {int dummy; } ;
typedef TYPE_1__* pcb_t ;
typedef int boolean_t ;
struct TYPE_3__ {int lock; struct x86_fx_thread_state* ifps; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct x86_fx_thread_state*,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void
FUNC_14(void)
{
 thread_t VAR_5 = FUNC_4();
 pcb_t VAR_6;
 struct x86_fx_thread_state *VAR_7;
 boolean_t VAR_8;
 xstate_t VAR_9 = FUNC_5();

 VAR_8 = FUNC_10(VAR_1);

 if (FUNC_8())
  FUNC_11("FPU segment overrun exception  at interrupt context\n");
 if (FUNC_3() == VAR_4)
  FUNC_11("FPU segment overrun exception in kernel thread context\n");





 VAR_6 = FUNC_0(VAR_5);
 FUNC_12(&VAR_6->lock);
 VAR_7 = VAR_6->ifps;
 VAR_6->ifps = 0;
 FUNC_13(&VAR_6->lock);




 FUNC_2();
 FUNC_6();




 FUNC_1();

 (void)FUNC_10(VAR_8);

 if (VAR_7)
     FUNC_7(VAR_7, VAR_9);




 FUNC_9(VAR_0, VAR_3|VAR_2, 0);

}
