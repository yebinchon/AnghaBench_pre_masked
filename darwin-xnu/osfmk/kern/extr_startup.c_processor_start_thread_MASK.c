
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef int thread_continue_t ;
typedef TYPE_1__* processor_t ;
struct TYPE_3__ {scalar_t__ idle_thread; } ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(void *VAR_1)
{
 processor_t VAR_2 = FUNC_0();
 thread_t VAR_3 = FUNC_1();

 FUNC_2(VAR_1);





 if (VAR_3 == VAR_2->idle_thread)
  FUNC_3((thread_continue_t)VAR_0);

 FUNC_4(VAR_3);

}
