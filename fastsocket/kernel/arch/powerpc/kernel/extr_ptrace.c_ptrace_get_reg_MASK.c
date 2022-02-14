
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * regs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct task_struct*) ;

unsigned long FUNC_1(struct task_struct *VAR_2, int VAR_3)
{
 if (VAR_2->thread.regs == ((void*)0))
  return -VAR_0;

 if (VAR_3 == VAR_1)
  return FUNC_0(VAR_2);

 if (VAR_3 < (sizeof(struct pt_regs) / sizeof(unsigned long)))
  return ((unsigned long *)VAR_2->thread.regs)[VAR_3];

 return -VAR_0;
}
