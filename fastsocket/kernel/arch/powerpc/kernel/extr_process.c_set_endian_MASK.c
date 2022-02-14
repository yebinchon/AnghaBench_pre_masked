
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pt_regs* regs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct task_struct *VAR_7, unsigned int VAR_8)
{
 struct pt_regs *VAR_9 = VAR_7->thread.regs;

 if ((VAR_8 == VAR_5 && !FUNC_0(VAR_1)) ||
     (VAR_8 == VAR_6 && !FUNC_0(VAR_0)))
  return -VAR_2;

 if (VAR_9 == ((void*)0))
  return -VAR_2;

 if (VAR_8 == VAR_4)
  VAR_9->msr &= ~VAR_3;
 else if (VAR_8 == VAR_5 || VAR_8 == VAR_6)
  VAR_9->msr |= VAR_3;
 else
  return -VAR_2;

 return 0;
}
