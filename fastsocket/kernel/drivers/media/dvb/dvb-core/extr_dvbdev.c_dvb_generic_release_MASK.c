
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {int users; int writers; int readers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct inode *VAR_3, struct file *VAR_4)
{
 struct dvb_device *VAR_5 = VAR_4->private_data;

 if (!VAR_5)
  return -VAR_0;

 if ((VAR_4->f_flags & VAR_1) == VAR_2) {
  VAR_5->readers++;
 } else {
  VAR_5->writers++;
 }

 VAR_5->users++;
 return 0;
}
