
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long fp; struct pt_regs* frame0; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (unsigned long) ;

unsigned long FUNC_1(struct task_struct *VAR_2)
{
 struct pt_regs *VAR_3;
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;
 if (!VAR_2 || VAR_2 == VAR_1 || VAR_2->state == VAR_0)
  return 0;

 VAR_6 = (unsigned long) (VAR_2 + 1);
 VAR_4 = VAR_2->thread.fp;
 VAR_3 = VAR_2->thread.frame0;

 do {
  if (VAR_4 < VAR_6 || VAR_4 >= (unsigned long) VAR_3 || VAR_4 & 3)
   return 0;

  VAR_5 = ((unsigned long *) VAR_4)[2];


  if (!FUNC_0(VAR_5))
   return VAR_5;

  VAR_4 = *(unsigned long *) VAR_4;
 } while (VAR_7++ < 16);

 return 0;
}
