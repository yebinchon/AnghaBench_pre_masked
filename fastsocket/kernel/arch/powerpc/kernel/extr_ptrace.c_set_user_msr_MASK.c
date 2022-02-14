
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* regs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_3__ {unsigned long msr; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(struct task_struct *VAR_1, unsigned long VAR_2)
{
 VAR_1->thread.regs->msr &= ~VAR_0;
 VAR_1->thread.regs->msr |= VAR_2 & VAR_0;
 return 0;
}
