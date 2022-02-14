
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ t_dtrace_resumepid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(uint64_t VAR_2)
{
 if (VAR_1)
  return;

 if (FUNC_5(FUNC_4()) == 0) {
  FUNC_0(VAR_0);
  return;
 }
        uthread_t VAR_3 = (uthread_t)FUNC_3(FUNC_2());
 if (VAR_2 != 0 && VAR_3 && VAR_3->t_dtrace_resumepid == 0) {
  VAR_3->t_dtrace_resumepid = VAR_2;
  FUNC_1(FUNC_2());
 }
}
