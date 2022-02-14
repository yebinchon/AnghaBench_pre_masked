
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long pc; scalar_t__ fp; } ;
struct task_struct {TYPE_1__ thread; } ;


 scalar_t__ FUNC_0 (unsigned long) ;

unsigned long FUNC_1(struct task_struct *VAR_0)
{

 if (FUNC_0(VAR_0->thread.pc))
  return ((unsigned long *)VAR_0->thread.fp)[2];
 else
  return VAR_0->thread.pc;
}
