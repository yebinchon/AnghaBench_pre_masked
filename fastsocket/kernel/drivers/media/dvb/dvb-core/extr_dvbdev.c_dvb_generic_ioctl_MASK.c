
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {int kernel_ioctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct file*,unsigned int,unsigned long,int ) ;

int FUNC_1(struct inode *VAR_2, struct file *VAR_3,
         unsigned int VAR_4, unsigned long VAR_5)
{
 struct dvb_device *VAR_6 = VAR_3->private_data;

 if (!VAR_6)
  return -VAR_1;

 if (!VAR_6->kernel_ioctl)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6->kernel_ioctl);
}
