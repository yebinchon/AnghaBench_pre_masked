
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct usb_interface {struct device dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct TYPE_5__ {int name; } ;
struct poseidon {int pm_work; TYPE_3__* udev; int device_list; TYPE_2__ v4l2_dev; int lock; int interface; int kref; } ;
struct TYPE_6__ {int autosuspend_delay; scalar_t__ autosuspend_disabled; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct usb_device*,int*) ;
 char* FUNC_3 (struct device*) ;
 int FUNC_4 (int *,int) ;
 struct poseidon* FUNC_5 (struct usb_device*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct poseidon*) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (int *) ;
 struct poseidon* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct poseidon*) ;
 int FUNC_12 (int *) ;
 int VAR_5 ;
 int FUNC_13 (struct poseidon*) ;
 int FUNC_14 (struct poseidon*) ;
 int FUNC_15 (struct poseidon*) ;
 int FUNC_16 (struct poseidon*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct poseidon*,struct usb_device*) ;
 int FUNC_19 (int ,int,char*,char*,char*) ;
 TYPE_3__* FUNC_20 (struct usb_device*) ;
 int FUNC_21 (struct usb_interface*) ;
 int FUNC_22 (struct usb_interface*,struct poseidon*) ;
 int FUNC_23 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_24(struct usb_interface *VAR_6,
    const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_7(VAR_6);
 struct poseidon *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 int VAR_11 = 0;


 FUNC_2(VAR_8, &VAR_10);
 if (VAR_10)
  return 0;


 VAR_9 = FUNC_5(VAR_8);
 if (!VAR_9) {
  VAR_9 = FUNC_9(sizeof(*VAR_9), VAR_1);
  if (!VAR_9)
   return -VAR_0;
  FUNC_8(&VAR_9->kref);
  FUNC_18(VAR_9, VAR_8);
  VAR_11 = 1;
 }

 VAR_9->udev = FUNC_20(VAR_8);
 VAR_9->interface = FUNC_21(VAR_6);
 FUNC_22(VAR_6, VAR_9);

 if (VAR_11) {
  struct device *VAR_12 = &VAR_6->dev;

  FUNC_11(VAR_9);
  FUNC_12(&VAR_9->lock);


  FUNC_19(VAR_9->v4l2_dev.name, sizeof(VAR_9->v4l2_dev.name), "%s %s",
   VAR_12->driver->name, FUNC_3(VAR_12));
  VAR_10 = FUNC_23(((void*)0), &VAR_9->v4l2_dev);


  VAR_10 = FUNC_14(VAR_9);
  FUNC_15(VAR_9);
  FUNC_16(VAR_9);
  FUNC_13(VAR_9);

  FUNC_0(&VAR_9->device_list);
  FUNC_10(&VAR_9->device_list, &VAR_5);
 }

 FUNC_4(&VAR_8->dev, 1);
 return 0;
}
