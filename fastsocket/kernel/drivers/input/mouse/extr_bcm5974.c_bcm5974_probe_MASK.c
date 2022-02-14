
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_6__ {int version; } ;
struct input_dev {char* name; int close; int open; TYPE_1__ dev; TYPE_2__ id; int phys; } ;
struct bcm5974_config {int bt_datalen; int tp_datalen; int caps; int tp_ep; int bt_ep; } ;
struct bcm5974 {TYPE_3__* bt_urb; TYPE_3__* tp_urb; void* bt_data; struct bcm5974_config cfg; struct usb_device* udev; void* tp_data; struct input_dev* input; int phys; int pm_mutex; struct usb_interface* intf; } ;
struct TYPE_7__ {int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bcm5974_config* FUNC_0 (struct usb_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,struct bcm5974*) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct bcm5974*) ;
 struct bcm5974* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct input_dev*,struct bcm5974_config const*) ;
 int FUNC_11 (int ,char*,int) ;
 void* FUNC_12 (int ,int ) ;
 void* FUNC_13 (struct usb_device*,int ,int ,int *) ;
 int FUNC_14 (struct usb_device*,int ,void*,int ) ;
 int FUNC_15 (TYPE_3__*,struct usb_device*,int ,void*,int ,int ,struct bcm5974*,int) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct usb_device*,int ,int) ;
 int FUNC_18 (struct usb_device*,int ) ;
 int FUNC_19 (struct usb_interface*,struct bcm5974*) ;
 int FUNC_20 (struct usb_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_6,
    const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_6(VAR_6);
 const struct bcm5974_config *VAR_9;
 struct bcm5974 *VAR_10;
 struct input_dev *VAR_11;
 int VAR_12 = -VAR_0;


 VAR_9 = FUNC_0(VAR_8);


 VAR_10 = FUNC_8(sizeof(struct bcm5974), VAR_1);
 VAR_11 = FUNC_2();
 if (!VAR_10 || !VAR_11) {
  FUNC_1("bcm5974: out of memory");
  goto err_free_devs;
 }

 VAR_10->udev = VAR_8;
 VAR_10->intf = VAR_6;
 VAR_10->input = VAR_11;
 VAR_10->cfg = *VAR_9;
 FUNC_9(&VAR_10->pm_mutex);


 VAR_10->bt_urb = FUNC_12(0, VAR_1);
 if (!VAR_10->bt_urb)
  goto err_free_devs;

 VAR_10->tp_urb = FUNC_12(0, VAR_1);
 if (!VAR_10->tp_urb)
  goto err_free_bt_urb;

 VAR_10->bt_data = FUNC_13(VAR_10->udev,
     VAR_10->cfg.bt_datalen, VAR_1,
     &VAR_10->bt_urb->transfer_dma);
 if (!VAR_10->bt_data)
  goto err_free_urb;

 VAR_10->tp_data = FUNC_13(VAR_10->udev,
     VAR_10->cfg.tp_datalen, VAR_1,
     &VAR_10->tp_urb->transfer_dma);
 if (!VAR_10->tp_data)
  goto err_free_bt_buffer;

 FUNC_15(VAR_10->bt_urb, VAR_8,
    FUNC_18(VAR_8, VAR_9->bt_ep),
    VAR_10->bt_data, VAR_10->cfg.bt_datalen,
    VAR_3, VAR_10, 1);

 FUNC_15(VAR_10->tp_urb, VAR_8,
    FUNC_18(VAR_8, VAR_9->tp_ep),
    VAR_10->tp_data, VAR_10->cfg.tp_datalen,
    VAR_4, VAR_10, 1);


 FUNC_17(VAR_8, VAR_10->phys, sizeof(VAR_10->phys));
 FUNC_11(VAR_10->phys, "/input0", sizeof(VAR_10->phys));

 VAR_11->name = "bcm5974";
 VAR_11->phys = VAR_10->phys;
 FUNC_20(VAR_10->udev, &VAR_11->id);

 VAR_11->id.version = VAR_9->caps;
 VAR_11->dev.parent = &VAR_6->dev;

 FUNC_5(VAR_11, VAR_10);

 VAR_11->open = VAR_5;
 VAR_11->close = VAR_2;

 FUNC_10(VAR_11, VAR_9);

 VAR_12 = FUNC_4(VAR_10->input);
 if (VAR_12)
  goto err_free_buffer;


 FUNC_19(VAR_6, VAR_10);

 return 0;

err_free_buffer:
 FUNC_14(VAR_10->udev, VAR_10->cfg.tp_datalen,
  VAR_10->tp_data, VAR_10->tp_urb->transfer_dma);
err_free_bt_buffer:
 FUNC_14(VAR_10->udev, VAR_10->cfg.bt_datalen,
  VAR_10->bt_data, VAR_10->bt_urb->transfer_dma);
err_free_urb:
 FUNC_16(VAR_10->tp_urb);
err_free_bt_urb:
 FUNC_16(VAR_10->bt_urb);
err_free_devs:
 FUNC_19(VAR_6, ((void*)0));
 FUNC_3(VAR_11);
 FUNC_7(VAR_10);
 return VAR_12;
}
