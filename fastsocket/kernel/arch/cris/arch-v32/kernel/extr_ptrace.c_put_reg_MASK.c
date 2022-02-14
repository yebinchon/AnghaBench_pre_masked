
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long usp; } ;
struct task_struct {int pid; TYPE_1__ thread; } ;
struct TYPE_4__ {unsigned long erp; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ,unsigned int,unsigned long) ;
 TYPE_2__* FUNC_2 (struct task_struct*) ;

int FUNC_3(struct task_struct *VAR_4, unsigned int VAR_5, unsigned long VAR_6)
{
 if (VAR_5 <= VAR_0)
  ((unsigned long *)FUNC_2(VAR_4))[VAR_5] = VAR_6;
 else if (VAR_5 == VAR_3)
  VAR_4->thread.usp = VAR_6;
 else if (VAR_5 == VAR_2) {

  if (VAR_6 != FUNC_0(VAR_4))
   FUNC_2(VAR_4)->erp = VAR_6;
 } else if (VAR_5 <= VAR_1)
  return FUNC_1(VAR_4->pid, VAR_5, VAR_6);
 else
  return -1;
 return 0;
}
