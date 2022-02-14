
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct ia64_psr {int ss; } ;


 int VAR_0 ;
 struct ia64_psr* FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (struct task_struct*) ;

void
FUNC_3 (struct task_struct *VAR_1)
{
 struct ia64_psr *VAR_2 = FUNC_0(FUNC_2(VAR_1));

 FUNC_1(VAR_1, VAR_0);
 VAR_2->ss = 1;
}
