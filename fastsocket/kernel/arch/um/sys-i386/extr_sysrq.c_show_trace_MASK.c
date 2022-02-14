
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct task_struct* VAR_1 ;
 int FUNC_2 (struct thread_info*,unsigned long*,unsigned long) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct task_struct* VAR_2, unsigned long * VAR_3)
{
 unsigned long VAR_4;
 struct thread_info *VAR_5;


 if (!VAR_3) {
  VAR_3 = (unsigned long*) &VAR_3;
  FUNC_3("show_trace: got NULL stack, implicit assumption task == current");
  FUNC_1(1);
 }

 if (!VAR_2)
  VAR_2 = VAR_1;

 if (VAR_2 != VAR_1) {
  VAR_4 = (unsigned long) FUNC_0(VAR_2);
 } else {
  asm ("movl %%ebp, %0" : "=r" (VAR_4) : );
 }

 VAR_5 = (struct thread_info *)
  ((unsigned long)VAR_3 & (~(VAR_0 - 1)));
 FUNC_2(VAR_5, VAR_3, VAR_4);

 FUNC_3("\n");
}
