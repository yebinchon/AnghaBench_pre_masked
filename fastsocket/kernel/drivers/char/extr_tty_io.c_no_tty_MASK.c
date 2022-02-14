
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct TYPE_2__ {scalar_t__ leader; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 () ;

void FUNC_4(void)
{
 struct task_struct *VAR_1 = VAR_0;
 FUNC_1();
 if (VAR_1->signal->leader)
  FUNC_0(0);
 FUNC_3();
 FUNC_2(VAR_1);
}
