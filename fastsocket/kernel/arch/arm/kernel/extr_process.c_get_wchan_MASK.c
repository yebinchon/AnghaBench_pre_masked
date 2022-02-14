
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; } ;
struct stackframe {unsigned long pc; scalar_t__ lr; int sp; int fp; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct task_struct*) ;
 unsigned long FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct stackframe*) ;

unsigned long FUNC_5(struct task_struct *VAR_2)
{
 struct stackframe VAR_3;
 int VAR_4 = 0;
 if (!VAR_2 || VAR_2 == VAR_1 || VAR_2->state == VAR_0)
  return 0;

 VAR_3.fp = FUNC_1(VAR_2);
 VAR_3.sp = FUNC_3(VAR_2);
 VAR_3.lr = 0;
 VAR_3.pc = FUNC_2(VAR_2);
 do {
  int VAR_5 = FUNC_4(&VAR_3);
  if (VAR_5 < 0)
   return 0;
  if (!FUNC_0(VAR_3.pc))
   return VAR_3.pc;
 } while (VAR_4 ++ < 16);
 return 0;
}
