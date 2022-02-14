
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long usp; } ;
struct task_struct {TYPE_1__ thread; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

inline long FUNC_1(struct task_struct *VAR_2, unsigned int VAR_3)
{




 if (VAR_3 == VAR_1)
  return VAR_2->thread.usp;
 else if (VAR_3 < VAR_0)
  return ((unsigned long *)FUNC_0(VAR_2))[VAR_3];
 else
  return 0;
}
