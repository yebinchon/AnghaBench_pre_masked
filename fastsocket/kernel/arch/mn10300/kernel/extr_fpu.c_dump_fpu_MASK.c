
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fpu_state; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;
typedef int elf_fpregset_t ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct task_struct*) ;

int FUNC_3(struct pt_regs *VAR_1, elf_fpregset_t *VAR_2)
{
 struct task_struct *VAR_3 = VAR_0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3);
  FUNC_1(VAR_2, &VAR_3->thread.fpu_state, sizeof(*VAR_2));
 }

 return VAR_4;
}
