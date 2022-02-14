
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regset {int n; } ;
struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;

int FUNC_1(struct task_struct *VAR_0, const struct user_regset *VAR_1)
{
 return FUNC_0(VAR_0) ? VAR_1->n : 0;
}
