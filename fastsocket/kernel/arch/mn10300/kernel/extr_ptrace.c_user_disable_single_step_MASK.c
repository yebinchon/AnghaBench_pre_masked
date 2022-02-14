
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int epsw; } ;
struct user {TYPE_1__ regs; } ;
struct task_struct {int dummy; } ;


 long VAR_0 ;
 long FUNC_0 (struct task_struct*,unsigned long) ;
 int FUNC_1 (struct task_struct*,unsigned long,long) ;

void FUNC_2(struct task_struct *VAR_1)
{

 struct user *VAR_2 = ((void*)0);
 long VAR_3;

 VAR_3 = FUNC_0(VAR_1, (unsigned long) &VAR_2->regs.epsw);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_1, (unsigned long) &VAR_2->regs.epsw, VAR_3);

}
