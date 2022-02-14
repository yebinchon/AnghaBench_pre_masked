
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int uint64_t ;
typedef int dtrace_id_t ;
struct TYPE_2__ {int * t_dtrace_syscall_args; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint64_t
FUNC_4(void *VAR_2, dtrace_id_t VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
#pragma unused(arg,id,parg,aframes)
 uint64_t VAR_7 = 0;
 uint64_t *VAR_8 = ((void*)0);

 uthread_t VAR_9 = (uthread_t)FUNC_3(FUNC_2());

 if (VAR_9)
  VAR_8 = VAR_9->t_dtrace_syscall_args;
 if (!VAR_8)
  return(0);
 if (VAR_5 < 0 || VAR_5 >= VAR_1)
  return(0);

 FUNC_1(VAR_0);
 VAR_7 = VAR_8[VAR_5];
 FUNC_0(VAR_0);
 return (VAR_7);
}
