
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {int pc; int lr; int sp; scalar_t__ fp; } ;
struct pt_regs {int ARM_pc; int ARM_lr; int ARM_sp; scalar_t__ ARM_fp; } ;
struct frame_tail {int dummy; } ;


 int VAR_0 ;
 struct frame_tail* FUNC_0 (struct frame_tail*) ;
 int FUNC_1 (struct pt_regs* const) ;
 int FUNC_2 (struct stackframe*,int ,unsigned int*) ;

void FUNC_3(struct pt_regs * const VAR_1, unsigned int VAR_2)
{
 struct frame_tail *VAR_3 = ((struct frame_tail *) VAR_1->ARM_fp) - 1;

 if (!FUNC_1(VAR_1)) {
  struct stackframe VAR_4;
  VAR_4.fp = VAR_1->ARM_fp;
  VAR_4.sp = VAR_1->ARM_sp;
  VAR_4.lr = VAR_1->ARM_lr;
  VAR_4.pc = VAR_1->ARM_pc;
  FUNC_2(&VAR_4, VAR_0, &VAR_2);
  return;
 }

 while (VAR_2-- && VAR_3 && !((unsigned long) VAR_3 & 3))
  VAR_3 = FUNC_0(VAR_3);
}
