
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_context {unsigned long r14; scalar_t__ r15; } ;
struct thread_info {struct cpu_context cpu_context; } ;
struct task_struct {scalar_t__ stack; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

unsigned long FUNC_1(struct task_struct *VAR_0)
{
 struct cpu_context *VAR_1 =
  &(((struct thread_info *)(VAR_0->stack))->cpu_context);


 if (FUNC_0(VAR_1->r15))
  return (unsigned long)VAR_1->r15;
 else
  return VAR_1->r14;
}
