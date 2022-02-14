
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_idmouse {scalar_t__ open; int lock; int present; } ;
struct inode {int dummy; } ;
struct file {struct usb_idmouse* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_idmouse*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct usb_idmouse *VAR_4;

 VAR_4 = VAR_3->private_data;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_1);

 FUNC_1(&VAR_4->lock);


 if (VAR_4->open <= 0) {
  FUNC_2(&VAR_4->lock);
  FUNC_2(&VAR_1);
  return -VAR_0;
 }

 --VAR_4->open;

 if (!VAR_4->present) {

  FUNC_2(&VAR_4->lock);
  FUNC_2(&VAR_1);
  FUNC_0(VAR_4);
 } else {
  FUNC_2(&VAR_4->lock);
  FUNC_2(&VAR_1);
 }
 return 0;
}
