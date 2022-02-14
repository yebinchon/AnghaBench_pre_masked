
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ thread_continue_t ;
typedef TYPE_2__* processor_t ;
struct TYPE_7__ {TYPE_1__* next_thread; TYPE_1__* idle_thread; } ;
struct TYPE_6__ {void* parameter; scalar_t__ continuation; } ;


 TYPE_1__* VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

void
FUNC_2(void *VAR_2)
{
 processor_t VAR_3 = FUNC_0();
 thread_t VAR_4;





 if (VAR_3->next_thread == VAR_0) {
  VAR_4 = VAR_3->idle_thread;
  VAR_4->continuation = (thread_continue_t)VAR_1;
  VAR_4->parameter = VAR_2;
 }
 else {
  VAR_4 = VAR_3->next_thread;
  VAR_3->next_thread = VAR_0;
 }

 FUNC_1(VAR_4);

}
