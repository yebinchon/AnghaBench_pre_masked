
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; } ;
struct task_struct {int pid; TYPE_1__ thread; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long FUNC_0 (int ,unsigned int) ;
 unsigned long FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

long FUNC_3(struct task_struct *VAR_4, unsigned int VAR_5)
{



 unsigned long VAR_6;

 if (VAR_5 <= VAR_0)
  VAR_6 = ((unsigned long *)FUNC_2(VAR_4))[VAR_5];
 else if (VAR_5 == VAR_3)
  VAR_6 = VAR_4->thread.usp;
 else if (VAR_5 == VAR_2)
  VAR_6 = FUNC_1(VAR_4);
 else if (VAR_5 <= VAR_1)
  VAR_6 = FUNC_0(VAR_4->pid, VAR_5);
 else
  VAR_6 = 0;

 return VAR_6;
}
