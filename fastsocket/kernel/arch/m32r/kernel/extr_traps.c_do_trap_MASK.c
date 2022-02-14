
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long error_code; int trap_no; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;
typedef int siginfo_t ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (char const*,struct pt_regs*,long) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (int,struct task_struct*) ;
 int FUNC_3 (int,int *,struct task_struct*) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

__attribute__((used)) static __inline__ void FUNC_5(int VAR_1, int VAR_2, const char * VAR_3,
 struct pt_regs * VAR_4, long VAR_5, siginfo_t *VAR_6)
{
 if (FUNC_4(VAR_4)) {

  struct task_struct *VAR_7 = VAR_0;
  VAR_7->thread.error_code = VAR_5;
  VAR_7->thread.trap_no = VAR_1;
  if (VAR_6)
   FUNC_3(VAR_2, VAR_6, VAR_7);
  else
   FUNC_2(VAR_2, VAR_7);
  return;
 } else {

  if (!FUNC_1(VAR_4))
   FUNC_0(VAR_3, VAR_4, VAR_5);
  return;
 }
}
