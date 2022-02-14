
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* mm; } ;
struct pt_regs {unsigned long ip; int cs; } ;
struct desc_struct {int d; } ;
struct TYPE_3__ {unsigned long size; int lock; struct desc_struct* ldt; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct desc_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

unsigned long FUNC_5(struct task_struct *VAR_2, struct pt_regs *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_3->ip;
 VAR_5 = VAR_3->cs & 0xffff;
 if (FUNC_4(VAR_3)) {
  VAR_4 = (VAR_4 & 0xffff) + (VAR_5 << 4);
  return VAR_4;
 }







 if ((VAR_5 & VAR_1) == VAR_0) {
  struct desc_struct *VAR_6;
  unsigned long VAR_7;

  VAR_5 &= ~7UL;

  FUNC_1(&VAR_2->mm->context.lock);
  if (FUNC_3((VAR_5 >> 3) >= VAR_2->mm->context.size))
   VAR_4 = -1L;
  else {
   VAR_6 = VAR_2->mm->context.ldt + VAR_5;
   VAR_7 = FUNC_0(VAR_6);


   if (!VAR_6->d)
    VAR_4 &= 0xffff;
   VAR_4 += VAR_7;
  }
  FUNC_2(&VAR_2->mm->context.lock);
 }

 return VAR_4;
}
