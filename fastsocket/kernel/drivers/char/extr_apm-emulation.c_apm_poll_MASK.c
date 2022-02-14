
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct apm_user* private_data; } ;
struct apm_user {int queue; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_3, poll_table * VAR_4)
{
 struct apm_user *VAR_5 = VAR_3->private_data;

 FUNC_0(VAR_3, &VAR_2, VAR_4);
 return FUNC_1(&VAR_5->queue) ? 0 : VAR_0 | VAR_1;
}
