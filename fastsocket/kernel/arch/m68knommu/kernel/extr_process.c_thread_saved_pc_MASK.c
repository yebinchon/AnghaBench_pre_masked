
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ksp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct switch_stack {unsigned long retpc; scalar_t__ a6; } ;


 scalar_t__ FUNC_0 (unsigned long) ;

unsigned long FUNC_1(struct task_struct *VAR_0)
{
 struct switch_stack *VAR_1 = (struct switch_stack *)VAR_0->thread.ksp;


 if (FUNC_0(VAR_1->retpc))
  return ((unsigned long *)VAR_1->a6)[1];
 else
  return VAR_1->retpc;
}
