
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct apm_user* private_data; } ;
struct apm_user {scalar_t__ suspend_state; int list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct apm_user*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode * VAR_6, struct file * VAR_7)
{
 struct apm_user *VAR_8 = VAR_7->private_data;

 VAR_7->private_data = ((void*)0);

 FUNC_1(&VAR_5);
 FUNC_3(&VAR_8->list);
 FUNC_6(&VAR_5);





 FUNC_4(&VAR_3);
 if (VAR_8->suspend_state == VAR_0 ||
     VAR_8->suspend_state == VAR_1)
  FUNC_0(&VAR_4);
 FUNC_5(&VAR_3);

 FUNC_7(&VAR_2);

 FUNC_2(VAR_8);
 return 0;
}
