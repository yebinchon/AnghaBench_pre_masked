
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {struct cdev* i_cdev; } ;
struct TYPE_4__ {int (* unmark_in_use ) (struct iio_ring_buffer*) ;} ;
struct TYPE_3__ {int flags; } ;
struct iio_ring_buffer {TYPE_2__ access; TYPE_1__ access_handler; } ;
struct iio_handler {struct iio_ring_buffer* private; } ;
struct file {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct iio_handler* FUNC_1 (struct cdev*) ;
 int FUNC_2 (struct iio_ring_buffer*) ;

int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct cdev *VAR_3 = VAR_1->i_cdev;
 struct iio_handler *VAR_4 = FUNC_1(VAR_3);
 struct iio_ring_buffer *VAR_5 = VAR_4->private;

 FUNC_0(VAR_0, &VAR_5->access_handler.flags);
 if (VAR_5->access.unmark_in_use)
  VAR_5->access.unmark_in_use(VAR_5);

 return 0;
}
