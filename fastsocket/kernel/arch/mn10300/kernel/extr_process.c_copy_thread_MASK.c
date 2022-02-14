
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long a3; unsigned long sp; unsigned long pc; unsigned long wchan; unsigned long usp; struct pt_regs* __frame; struct pt_regs* uregs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct pt_regs {unsigned long sp; unsigned long e2; struct pt_regs* next; int epsw; } ;
struct TYPE_8__ {unsigned long d3; } ;
struct TYPE_5__ {struct pt_regs* uregs; } ;
struct TYPE_7__ {TYPE_1__ thread; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

int FUNC_1(unsigned long VAR_6,
  unsigned long VAR_7, unsigned long VAR_8,
  struct task_struct *VAR_9, struct pt_regs *VAR_10)
{
 struct pt_regs *VAR_11, *VAR_12, *VAR_13;
 unsigned long VAR_14;

 VAR_13 = VAR_4->thread.uregs;

 VAR_14 = (unsigned long) FUNC_0(VAR_9) + VAR_2;


 VAR_14 -= sizeof(struct pt_regs);
 VAR_11 = (struct pt_regs *) VAR_14;

 VAR_9->thread.uregs = VAR_11;
 *VAR_11 = *VAR_13;
 VAR_11->sp = VAR_7;
 VAR_11->epsw &= ~VAR_1;

 VAR_14 -= 12;


 if (VAR_6 & VAR_0)
  VAR_11->e2 = VAR_3->d3;


 VAR_12 = VAR_11;
 if (VAR_10 != VAR_13) {
  VAR_14 -= sizeof(struct pt_regs);
  VAR_12 = (struct pt_regs *) VAR_14;
  *VAR_12 = *VAR_10;
  VAR_12->sp = VAR_7;
  VAR_12->next = VAR_11;




  VAR_14 -= 12;
 }


 VAR_9->thread.__frame = VAR_12;
 VAR_9->thread.a3 = (unsigned long) VAR_12;
 VAR_9->thread.sp = VAR_14;
 VAR_9->thread.pc = (unsigned long) VAR_5;
 VAR_9->thread.wchan = (unsigned long) VAR_5;
 VAR_9->thread.usp = VAR_7;

 return 0;
}
