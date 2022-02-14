
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct switch_stack {int fp; } ;
typedef int elf_fpreg_t ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

int
FUNC_2(elf_fpreg_t *VAR_0, struct task_struct *VAR_1)
{
 struct switch_stack *VAR_2 = (struct switch_stack *)FUNC_1(VAR_1) - 1;
 FUNC_0(VAR_0, VAR_2->fp, 32 * 8);
 return 1;
}
