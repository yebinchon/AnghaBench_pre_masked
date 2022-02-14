
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wdm_device {TYPE_1__* intf; int plock; int count; int validity; int flags; } ;
struct usb_interface {int needs_remote_wakeup; } ;
struct inode {int dummy; } ;
struct file {struct wdm_device* private_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct usb_interface* FUNC_7 (int *,int) ;
 struct wdm_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_5);
 int VAR_8 = -VAR_0;
 struct usb_interface *VAR_9;
 struct wdm_device *VAR_10;

 FUNC_2(&VAR_4);
 VAR_9 = FUNC_7(&VAR_3, VAR_7);
 if (!VAR_9)
  goto out;

 VAR_10 = FUNC_8(VAR_9);
 if (FUNC_4(VAR_2, &VAR_10->flags))
  goto out;
 VAR_6->private_data = VAR_10;

 VAR_8 = FUNC_5(VAR_10->intf);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_10->intf->dev, "Error autopm - %d\n", VAR_8);
  goto out;
 }
 VAR_9->needs_remote_wakeup = 1;

 FUNC_2(&VAR_10->plock);
 if (!VAR_10->count++) {
  VAR_8 = FUNC_9(VAR_10->validity, VAR_1);
  if (VAR_8 < 0) {
   VAR_10->count--;
   FUNC_0(&VAR_10->intf->dev,
    "Error submitting int urb - %d\n", VAR_8);
  }
 } else {
  VAR_8 = 0;
 }
 FUNC_3(&VAR_10->plock);
 FUNC_6(VAR_10->intf);
out:
 FUNC_3(&VAR_4);
 return VAR_8;
}
