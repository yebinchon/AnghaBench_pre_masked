
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (struct task_struct*,int ,unsigned long) ;

void
FUNC_3(struct task_struct *VAR_3)
{
 unsigned long VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0) & ~VAR_2;
 FUNC_2(VAR_3, VAR_0, VAR_4);
 FUNC_2(VAR_3, VAR_1, 0);


 FUNC_0(VAR_3->pid);
}
