
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct stacktrace_ops {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_3__ {int (* dump ) (struct task_struct*,struct pt_regs*,unsigned long*,struct stacktrace_ops const*,void*) ;int list; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct task_struct*,struct pt_regs*,unsigned long*,struct stacktrace_ops const*,void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_6(struct task_struct *VAR_4, struct pt_regs *VAR_5,
    unsigned long *VAR_6, const struct stacktrace_ops *VAR_7,
    void *VAR_8)
{
 unsigned long VAR_9;
 if (VAR_1) {
  FUNC_3(&VAR_3, VAR_9);


  if (VAR_1 && !FUNC_1(&VAR_2)) {
   FUNC_0(&VAR_0->list);
   VAR_0 = FUNC_2();

   VAR_1 = 0;
  }

  FUNC_4(&VAR_3, VAR_9);
 }

 VAR_0->dump(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
