
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_nice; int task; } ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(struct proc *VAR_0)
{
 (void)FUNC_0(VAR_0->task, -VAR_0->p_nice);
}
