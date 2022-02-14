
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiter {struct task_struct* task; int list; } ;
struct task_struct {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct waiter *VAR_0)
{
 struct task_struct *VAR_1;

 FUNC_0(&VAR_0->list);
 VAR_1 = VAR_0->task;
 FUNC_1();
 VAR_0->task = ((void*)0);
 FUNC_2(VAR_1);
}
