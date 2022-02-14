
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct TYPE_2__ {int t_dtrace_stop; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 if (VAR_0)
  return;

        uthread_t VAR_1 = (uthread_t)FUNC_2(FUNC_1());
 if (VAR_1) {




  VAR_1->t_dtrace_stop = 1;
  FUNC_0(FUNC_1());
 }
}
