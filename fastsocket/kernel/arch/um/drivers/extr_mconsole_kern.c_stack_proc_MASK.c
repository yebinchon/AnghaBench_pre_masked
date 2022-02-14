
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct task_struct* saved_task; } ;
struct task_struct {TYPE_1__ thread; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct task_struct*,struct task_struct*,struct task_struct*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct task_struct *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 VAR_3->thread.saved_task = VAR_2;
 FUNC_0(VAR_2, VAR_3, VAR_2);
}
