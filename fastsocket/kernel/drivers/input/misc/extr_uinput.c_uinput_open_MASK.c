
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_device {int state; int waitq; int requests_waitq; int requests_lock; int mutex; } ;
struct inode {int dummy; } ;
struct file {struct uinput_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct uinput_device* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct file *VAR_4)
{
 struct uinput_device *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct uinput_device), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2();
 FUNC_3(&VAR_5->mutex);
 FUNC_4(&VAR_5->requests_lock);
 FUNC_0(&VAR_5->requests_waitq);
 FUNC_0(&VAR_5->waitq);
 VAR_5->state = VAR_2;

 VAR_4->private_data = VAR_5;
 FUNC_5();

 return 0;
}
