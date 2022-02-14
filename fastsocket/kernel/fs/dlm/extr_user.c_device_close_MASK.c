
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dlm_user_proc* private_data; } ;
struct dlm_user_proc {int flags; int lockspace; } ;
struct dlm_ls {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_user_proc*) ;
 struct dlm_ls* FUNC_1 (int ) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_user_proc*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 struct dlm_user_proc *VAR_6 = VAR_5->private_data;
 struct dlm_ls *VAR_7;
 sigset_t VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_6->lockspace);
 if (!VAR_7)
  return -VAR_1;

 FUNC_6(&VAR_9);
 FUNC_7(VAR_2, &VAR_9, &VAR_8);

 FUNC_5(VAR_0, &VAR_6->flags);

 FUNC_0(VAR_7, VAR_6);





 FUNC_3(VAR_6);
 VAR_5->private_data = ((void*)0);

 FUNC_2(VAR_7);
 FUNC_2(VAR_7);




 FUNC_7(VAR_3, &VAR_8, ((void*)0));
 FUNC_4();

 return 0;
}
