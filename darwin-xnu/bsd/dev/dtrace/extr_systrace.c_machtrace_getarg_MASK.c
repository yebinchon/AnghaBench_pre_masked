
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ syscall_arg_t ;
typedef int dtrace_id_t ;
struct TYPE_2__ {scalar_t__ t_dtrace_syscall_args; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint64_t
FUNC_4(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
#pragma unused(arg,id,parg,aframes)
 uint64_t VAR_6 = 0;
 syscall_arg_t *VAR_7 = (syscall_arg_t *)((void*)0);

 uthread_t VAR_8 = (uthread_t)FUNC_3(FUNC_2());

 if (VAR_8)
  VAR_7 = (syscall_arg_t *)VAR_8->t_dtrace_syscall_args;

 if (!VAR_7)
  return(0);

 FUNC_1(VAR_0);

 VAR_6 = (uint64_t)*(VAR_7+VAR_4);
 FUNC_0(VAR_0);
 return (VAR_6);
}
