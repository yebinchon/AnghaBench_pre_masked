
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; scalar_t__ esp0; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static inline long FUNC_1(struct task_struct *VAR_2, int VAR_3)
{
 unsigned long *VAR_4;

 if (VAR_3 == VAR_0)
  VAR_4 = &VAR_2->thread.usp;
 else if (VAR_3 < FUNC_0(VAR_1))
  VAR_4 = (unsigned long *)(VAR_2->thread.esp0 + VAR_1[VAR_3]);
 else
  return 0;
 return *VAR_4;
}
