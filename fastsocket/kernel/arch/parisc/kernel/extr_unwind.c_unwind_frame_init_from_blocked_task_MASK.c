
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unwind_frame_info {int dummy; } ;
struct pt_regs {int kpc; int * iaoq; int ksp; int * gr; } ;
struct TYPE_2__ {struct pt_regs regs; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 struct pt_regs* FUNC_1 (int,int ) ;
 int FUNC_2 (struct unwind_frame_info*,struct task_struct*,struct pt_regs*) ;

void FUNC_3(struct unwind_frame_info *VAR_1, struct task_struct *VAR_2)
{
 struct pt_regs *VAR_3 = &VAR_2->thread.regs;
 struct pt_regs *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct pt_regs), VAR_0);
 if (!VAR_4)
  return;
 *VAR_4 = *VAR_3;
 VAR_4->gr[30] = VAR_3->ksp;
 VAR_4->iaoq[0] = VAR_3->kpc;
 FUNC_2(VAR_1, VAR_2, VAR_4);
 FUNC_0(VAR_4);
}
