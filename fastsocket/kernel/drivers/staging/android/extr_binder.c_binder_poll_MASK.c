
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct binder_proc* private_data; } ;
struct binder_thread {scalar_t__ return_error; int wait; int todo; int * transaction_stack; } ;
struct binder_proc {int wait; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct binder_thread* FUNC_0 (struct binder_proc*) ;
 scalar_t__ FUNC_1 (struct binder_proc*,struct binder_thread*) ;
 scalar_t__ FUNC_2 (struct binder_thread*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_7(struct file *VAR_3,
    struct poll_table_struct *VAR_4)
{
 struct binder_proc *VAR_5 = VAR_3->private_data;
 struct binder_thread *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_4(&VAR_2);
 VAR_6 = FUNC_0(VAR_5);

 VAR_7 = VAR_6->transaction_stack == ((void*)0) &&
  FUNC_3(&VAR_6->todo) && VAR_6->return_error == VAR_0;
 FUNC_5(&VAR_2);

 if (VAR_7) {
  if (FUNC_1(VAR_5, VAR_6))
   return VAR_1;
  FUNC_6(VAR_3, &VAR_5->wait, VAR_4);
  if (FUNC_1(VAR_5, VAR_6))
   return VAR_1;
 } else {
  if (FUNC_2(VAR_6))
   return VAR_1;
  FUNC_6(VAR_3, &VAR_6->wait, VAR_4);
  if (FUNC_2(VAR_6))
   return VAR_1;
 }
 return 0;
}
