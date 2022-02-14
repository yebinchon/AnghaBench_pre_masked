
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* regs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_3__ {int msr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct task_struct *VAR_2)
{
 if (VAR_2->thread.regs) {
  FUNC_2();
  if (VAR_2->thread.regs->msr & VAR_0) {
   FUNC_1(VAR_2);
  }
  FUNC_3();
 }
}
