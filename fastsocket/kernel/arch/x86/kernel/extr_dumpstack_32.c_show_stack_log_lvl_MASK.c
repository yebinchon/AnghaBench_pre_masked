
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct task_struct*,struct pt_regs*,unsigned long*,char*) ;
 int FUNC_3 () ;

void
FUNC_4(struct task_struct *VAR_2, struct pt_regs *VAR_3,
     unsigned long *VAR_4, char *VAR_5)
{
 unsigned long *VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0)) {
  if (VAR_2)
   VAR_4 = (unsigned long *)VAR_2->thread.sp;
  else
   VAR_4 = (unsigned long *)&VAR_4;
 }

 VAR_6 = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (FUNC_0(VAR_6))
   break;
  if (VAR_7 && ((VAR_7 % VAR_0) == 0))
   FUNC_1("\n%s", VAR_5);
  FUNC_1(" %08lx", *VAR_6++);
  FUNC_3();
 }
 FUNC_1("\n");
 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
