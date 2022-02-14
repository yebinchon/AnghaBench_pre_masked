
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; unsigned long lr; } ;
struct task_struct {TYPE_1__ thread; scalar_t__ pid; } ;
struct pt_regs {unsigned long spu; scalar_t__ r0; } ;


 struct pt_regs* FUNC_0 (struct task_struct*) ;

int FUNC_1(unsigned long VAR_0, unsigned long VAR_1,
 unsigned long VAR_2, struct task_struct *VAR_3, struct pt_regs *VAR_4)
{
 struct pt_regs *VAR_5 = FUNC_0(VAR_3);
 extern void FUNC_2(void);


 *VAR_5 = *VAR_4;

 VAR_5->spu = VAR_1;
 VAR_5->r0 = 0;
 VAR_4->r0 = VAR_3->pid;
 VAR_3->thread.sp = (unsigned long)VAR_5;
 VAR_3->thread.lr = (unsigned long)FUNC_2;

 return 0;
}
