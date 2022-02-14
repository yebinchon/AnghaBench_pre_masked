
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int pid; } ;
struct TYPE_2__ {int watch_mutex; int transaction_mutex; int response_mutex; int request_mutex; int reply_waitq; int reply_lock; int reply_list; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct task_struct* FUNC_5 (int ,int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

int FUNC_9(void)
{
 int VAR_4;
 struct task_struct *VAR_5;

 FUNC_0(&VAR_3.reply_list);
 FUNC_7(&VAR_3.reply_lock);
 FUNC_4(&VAR_3.reply_waitq);

 FUNC_6(&VAR_3.request_mutex);
 FUNC_6(&VAR_3.response_mutex);
 FUNC_3(&VAR_3.transaction_mutex);
 FUNC_3(&VAR_3.watch_mutex);


 VAR_4 = FUNC_8();
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_5(VAR_2, ((void*)0), "xenwatch");
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);
 VAR_1 = VAR_5->pid;

 VAR_5 = FUNC_5(VAR_0, ((void*)0), "xenbus");
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 return 0;
}
