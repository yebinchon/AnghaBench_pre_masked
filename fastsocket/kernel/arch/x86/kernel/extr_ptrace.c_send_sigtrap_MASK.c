
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct siginfo {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct pt_regs*,int,int,struct siginfo*) ;
 int FUNC_1 (int ,struct siginfo*,struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_1, struct pt_regs *VAR_2,
      int VAR_3, int VAR_4)
{
 struct siginfo VAR_5;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5);

 FUNC_1(VAR_0, &VAR_5, VAR_1);
}
