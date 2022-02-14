
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct apm_user* private_data; } ;
struct apm_user {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct apm_user*,char*) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct apm_user*) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_3, poll_table *VAR_4)
{
 struct apm_user *VAR_5;

 VAR_5 = VAR_3->private_data;
 if (FUNC_0(VAR_5, "poll"))
  return 0;
 FUNC_1(VAR_3, &VAR_2, VAR_4);
 if (!FUNC_2(VAR_5))
  return VAR_0 | VAR_1;
 return 0;
}
