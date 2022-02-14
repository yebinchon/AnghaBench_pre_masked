
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ t_dtrace_sig; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(uint64_t VAR_3)
{
 if (VAR_2)
  return;

 if (VAR_3 >= VAR_1) {
  FUNC_0(VAR_0);
  return;
 }






 uthread_t VAR_4 = (uthread_t)FUNC_3(FUNC_2());

 if (VAR_4 && VAR_4->t_dtrace_sig == 0) {
  VAR_4->t_dtrace_sig = VAR_3;
  FUNC_1(FUNC_2());
 }
}
