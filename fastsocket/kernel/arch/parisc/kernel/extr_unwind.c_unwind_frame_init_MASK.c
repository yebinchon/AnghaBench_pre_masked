
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_frame_info {int ip; int sp; int r31; int rp; struct task_struct* t; } ;
struct task_struct {scalar_t__ pid; } ;
struct pt_regs {int * gr; int * iaoq; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (struct unwind_frame_info*,int ,int) ;

void FUNC_2(struct unwind_frame_info *VAR_0, struct task_struct *VAR_1,
         struct pt_regs *VAR_2)
{
 FUNC_1(VAR_0, 0, sizeof(struct unwind_frame_info));
 VAR_0->t = VAR_1;
 VAR_0->sp = VAR_2->gr[30];
 VAR_0->ip = VAR_2->iaoq[0];
 VAR_0->rp = VAR_2->gr[2];
 VAR_0->r31 = VAR_2->gr[31];

 FUNC_0("(%d) Start unwind from sp=%08lx ip=%08lx\n",
     VAR_1 ? (int)VAR_1->pid : -1, VAR_0->sp, VAR_0->ip);
}
