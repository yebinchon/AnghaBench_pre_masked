
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_file_priv {int msgbuffer_mutex; int reply_mutex; int read_waitq; int read_buffers; int watches; int transactions; } ;
struct inode {int dummy; } ;
struct file {struct xenbus_file_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct xenbus_file_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 struct xenbus_file_priv *VAR_6;

 if (VAR_3 == 0)
  return -VAR_0;

 FUNC_4(VAR_4, VAR_5);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 FUNC_0(&VAR_6->transactions);
 FUNC_0(&VAR_6->watches);
 FUNC_0(&VAR_6->read_buffers);
 FUNC_1(&VAR_6->read_waitq);

 FUNC_3(&VAR_6->reply_mutex);
 FUNC_3(&VAR_6->msgbuffer_mutex);

 VAR_5->private_data = VAR_6;

 return 0;
}
