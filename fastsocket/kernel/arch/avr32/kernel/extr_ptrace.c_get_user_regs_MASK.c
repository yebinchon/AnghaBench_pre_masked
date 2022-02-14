
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static struct pt_regs *FUNC_1(struct task_struct *VAR_1)
{
 return (struct pt_regs *)((unsigned long)FUNC_0(VAR_1) +
      VAR_0 - sizeof(struct pt_regs));
}
