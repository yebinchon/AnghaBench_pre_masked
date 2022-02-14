
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct sisusb_usb_data {int isopen; int lock; int kref; TYPE_1__* sisusb_dev; int devinit; int ready; int present; } ;
struct inode {int dummy; } ;
struct file {struct sisusb_usb_data* private_data; } ;
struct TYPE_2__ {scalar_t__ speed; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct sisusb_usb_data*,int ) ;
 struct usb_interface* FUNC_6 (int *,int) ;
 struct sisusb_usb_data* FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 struct sisusb_usb_data *VAR_7;
 struct usb_interface *VAR_8;
 int VAR_9 = FUNC_1(VAR_5);

 if (!(VAR_8 = FUNC_6(&VAR_4, VAR_9)))
  return -VAR_2;

 if (!(VAR_7 = FUNC_7(VAR_8)))
  return -VAR_2;

 FUNC_3(&VAR_7->lock);

 if (!VAR_7->present || !VAR_7->ready) {
  FUNC_4(&VAR_7->lock);
  return -VAR_2;
 }

 if (VAR_7->isopen) {
  FUNC_4(&VAR_7->lock);
  return -VAR_0;
 }

 if (!VAR_7->devinit) {
  if (VAR_7->sisusb_dev->speed == VAR_3) {
   if (FUNC_5(VAR_7, 0)) {
    FUNC_4(&VAR_7->lock);
    FUNC_0(&VAR_7->sisusb_dev->dev, "Failed to initialize device\n");
    return -VAR_1;
   }
  } else {
   FUNC_4(&VAR_7->lock);
   FUNC_0(&VAR_7->sisusb_dev->dev, "Device not attached to USB 2.0 hub\n");
   return -VAR_1;
  }
 }


 FUNC_2(&VAR_7->kref);

 VAR_7->isopen = 1;

 VAR_6->private_data = VAR_7;

 FUNC_4(&VAR_7->lock);

 return 0;
}
