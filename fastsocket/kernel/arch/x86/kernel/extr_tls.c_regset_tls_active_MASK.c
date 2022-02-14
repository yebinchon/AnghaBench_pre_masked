
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regset {int dummy; } ;
struct thread_struct {int * tls_array; } ;
struct task_struct {struct thread_struct thread; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(struct task_struct *VAR_1,
        const struct user_regset *VAR_2)
{
 struct thread_struct *VAR_3 = &VAR_1->thread;
 int VAR_4 = VAR_0;
 while (VAR_4 > 0 && FUNC_0(&VAR_3->tls_array[VAR_4 - 1]))
  --VAR_4;
 return VAR_4;
}
