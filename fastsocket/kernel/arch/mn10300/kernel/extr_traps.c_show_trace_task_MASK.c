
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*) ;

void FUNC_1(struct task_struct *VAR_1)
{
 unsigned long VAR_2 = VAR_1->thread.sp;


 if ((VAR_2 ^ (unsigned long) VAR_1) & (VAR_0 << 1))
  return;

 FUNC_0((unsigned long *) VAR_2);
}
