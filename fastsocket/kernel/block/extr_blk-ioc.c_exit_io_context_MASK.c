
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct io_context* io_context; } ;
struct io_context {TYPE_1__* aic; int nr_tasks; } ;
struct TYPE_2__ {int (* exit ) (TYPE_1__*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct io_context*) ;
 int FUNC_2 (struct io_context*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;

void FUNC_6(struct task_struct *VAR_0)
{
 struct io_context *VAR_1;

 FUNC_4(VAR_0);
 VAR_1 = VAR_0->io_context;
 VAR_0->io_context = ((void*)0);
 FUNC_5(VAR_0);

 if (FUNC_0(&VAR_1->nr_tasks)) {
  if (VAR_1->aic && VAR_1->aic->exit)
   VAR_1->aic->exit(VAR_1->aic);
  FUNC_1(VAR_1);

 }
 FUNC_2(VAR_1);
}
