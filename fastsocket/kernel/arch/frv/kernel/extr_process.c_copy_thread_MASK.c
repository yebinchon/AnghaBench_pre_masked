
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; unsigned long pc; int user; struct pt_regs* frame0; scalar_t__ lr; scalar_t__ fp; struct task_struct* curr; struct pt_regs* frame; } ;
struct task_struct {TYPE_1__ thread; int * clear_child_tid; int set_child_tid; } ;
struct pt_regs {unsigned long sp; unsigned long gr15; unsigned long gr29; unsigned long gr12; struct pt_regs* next_frame; scalar_t__ gr8; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pt_regs* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

int FUNC_3(unsigned long VAR_5,
  unsigned long VAR_6, unsigned long VAR_7,
  struct task_struct *VAR_8, struct pt_regs *VAR_9)
{
 struct pt_regs *VAR_10, *VAR_11, *VAR_12;

 VAR_12 = VAR_3;
 VAR_10 = (struct pt_regs *)
  (FUNC_1(VAR_8) + VAR_2 - VAR_1);
 VAR_11 = VAR_10;


 *VAR_10 = *VAR_12;

 VAR_10->gr8 = 0;
 VAR_10->sp = VAR_6;
 VAR_10->next_frame = ((void*)0);


 if (VAR_9 != VAR_12) {
  VAR_11--;
  *VAR_11 = *VAR_9;
  VAR_11->sp = (unsigned long) VAR_10;
  VAR_11->next_frame = VAR_10;
  VAR_11->gr15 = (unsigned long) FUNC_2(VAR_8);
  VAR_11->gr29 = (unsigned long) VAR_8;
 }

 VAR_8->set_child_tid = *(VAR_8->clear_child_tid = ((void*)0));

 VAR_8->thread.frame = VAR_11;
 VAR_8->thread.curr = VAR_8;
 VAR_8->thread.sp = (unsigned long) VAR_11;
 VAR_8->thread.fp = 0;
 VAR_8->thread.lr = 0;
 VAR_8->thread.pc = (unsigned long) VAR_4;
 VAR_8->thread.frame0 = VAR_10;


 if (VAR_5 & VAR_0)
  VAR_11->gr29 = VAR_11->gr12;

 FUNC_0(VAR_8->thread.user);

 return 0;
}
