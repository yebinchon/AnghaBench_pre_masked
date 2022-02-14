
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int vidq; } ;


 unsigned int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_0,
 struct poll_table_struct *VAR_1)
{
 struct cx231xx_fh *VAR_2 = VAR_0->private_data;




 return FUNC_0(VAR_0, &VAR_2->vidq, VAR_1);
}
