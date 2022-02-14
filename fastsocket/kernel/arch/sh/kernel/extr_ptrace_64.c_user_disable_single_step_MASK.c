
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pt_regs* uregs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int sr; } ;


 int VAR_0 ;

void FUNC_0(struct task_struct *VAR_1)
{
 struct pt_regs *VAR_2 = VAR_1->thread.uregs;

 VAR_2->sr &= ~VAR_0;
}
