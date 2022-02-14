
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * regs; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*,unsigned long) ;
 int FUNC_1 (struct task_struct*,unsigned long) ;

int FUNC_2(struct task_struct *VAR_4, int VAR_5, unsigned long VAR_6)
{
 if (VAR_4->thread.regs == ((void*)0))
  return -VAR_0;

 if (VAR_5 == VAR_2)
  return FUNC_0(VAR_4, VAR_6);
 if (VAR_5 == VAR_3)
  return FUNC_1(VAR_4, VAR_6);

 if (VAR_5 <= VAR_1) {
  ((unsigned long *)VAR_4->thread.regs)[VAR_5] = VAR_6;
  return 0;
 }
 return -VAR_0;
}
