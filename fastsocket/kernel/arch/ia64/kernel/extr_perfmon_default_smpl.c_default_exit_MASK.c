
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_2(struct task_struct *VAR_0, void *VAR_1, struct pt_regs *VAR_2)
{
 FUNC_0(("[%d] exit(%p)\n", FUNC_1(VAR_0), VAR_1));
 return 0;
}
