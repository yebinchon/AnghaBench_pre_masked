
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_file_priv {int read_buffers; int read_waitq; } ;
struct file {struct xenbus_file_priv* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_2, poll_table *VAR_3)
{
 struct xenbus_file_priv *VAR_4 = VAR_2->private_data;

 FUNC_1(VAR_2, &VAR_4->read_waitq, VAR_3);
 if (!FUNC_0(&VAR_4->read_buffers))
  return VAR_0 | VAR_1;
 return 0;
}
