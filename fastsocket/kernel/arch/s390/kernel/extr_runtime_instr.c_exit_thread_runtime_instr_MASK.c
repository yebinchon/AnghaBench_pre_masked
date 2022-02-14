
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ri_cb; scalar_t__ ri_signum; } ;
struct task_struct {TYPE_1__ thread; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

void FUNC_2(void)
{
 struct task_struct *VAR_1 = VAR_0;

 if (!VAR_1->thread.ri_cb)
  return;
 FUNC_0();
 FUNC_1(VAR_1->thread.ri_cb);
 VAR_1->thread.ri_signum = 0;
 VAR_1->thread.ri_cb = ((void*)0);
}
