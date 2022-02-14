
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct dmxdev* priv; } ;
struct dmxdev {int mutex; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dmxdev*,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3,
       unsigned int VAR_4, void *VAR_5)
{
 struct dvb_device *VAR_6 = VAR_3->private_data;
 struct dmxdev *VAR_7 = VAR_6->priv;
 unsigned long VAR_8 = (unsigned long)VAR_5;
 int VAR_9;

 if (FUNC_1(&VAR_7->mutex))
  return -VAR_1;

 switch (VAR_4) {
 case 128:
  VAR_9 = FUNC_0(VAR_7, VAR_8);
  break;

 default:
  VAR_9 = -VAR_0;
  break;
 }
 FUNC_2(&VAR_7->mutex);
 return VAR_9;
}
