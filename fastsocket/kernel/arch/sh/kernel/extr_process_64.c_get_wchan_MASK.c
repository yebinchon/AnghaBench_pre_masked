
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct task_struct*) ;

unsigned long FUNC_2(struct task_struct *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2 || VAR_2 == VAR_1 || VAR_2->state == VAR_0)
  return 0;




 VAR_3 = FUNC_1(VAR_2);
 return VAR_3;
}
