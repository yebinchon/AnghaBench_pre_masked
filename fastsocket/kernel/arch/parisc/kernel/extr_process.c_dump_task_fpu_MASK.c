
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fr; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;
struct task_struct {TYPE_2__ thread; } ;
typedef int elf_fpregset_t ;


 int FUNC_0 (int *,int ,int) ;

int FUNC_1 (struct task_struct *VAR_0, elf_fpregset_t *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->thread.regs.fr, sizeof(*VAR_1));
 return 1;
}
