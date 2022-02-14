
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_cdev; } ;
struct iio_handler {struct iio_event_interface* private; int flags; } ;
struct iio_event_interface {int event_list_lock; } ;
struct file {struct iio_event_interface* private_data; int f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct iio_handler* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct iio_handler *VAR_4 = FUNC_1(VAR_2->i_cdev);
 struct iio_event_interface *VAR_5 = VAR_4->private;

 FUNC_2(&VAR_5->event_list_lock);
 if (FUNC_4(VAR_1, &VAR_4->flags)) {
  FUNC_0(VAR_3->f_op);
  FUNC_3(&VAR_5->event_list_lock);
  return -VAR_0;
 }
 VAR_3->private_data = VAR_4->private;
 FUNC_3(&VAR_5->event_list_lock);

 return 0;
}
