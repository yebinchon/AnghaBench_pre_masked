
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int kref; int lock; scalar_t__ isopen; scalar_t__ present; } ;
struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct sisusb_usb_data*) ;
 int FUNC_4 (struct sisusb_usb_data*) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct sisusb_usb_data *VAR_4;

 if (!(VAR_4 = (struct sisusb_usb_data *)VAR_3->private_data))
  return -VAR_0;

 FUNC_1(&VAR_4->lock);

 if (VAR_4->present) {

  if (!FUNC_4(VAR_4))
   FUNC_3(VAR_4);
 }

 VAR_4->isopen = 0;
 VAR_3->private_data = ((void*)0);

 FUNC_2(&VAR_4->lock);


 FUNC_0(&VAR_4->kref, VAR_1);

 return 0;
}
