
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wacom_wac {int data_dma; int data; TYPE_4__* irq; struct input_dev* dev; int name; struct wacom_wac* wacom_wac; struct wacom_features* features; int phys; int lock; struct usb_interface* intf; struct usb_device* usbdev; } ;
struct wacom_features {scalar_t__ pktlen; scalar_t__ device_type; int quirks; int name; int pressure_max; int y_max; int x_max; } ;
struct wacom {int data_dma; int data; TYPE_4__* irq; struct input_dev* dev; int name; struct wacom* wacom_wac; struct wacom_features* features; int phys; int lock; struct usb_interface* intf; struct usb_device* usbdev; } ;
struct usb_interface {TYPE_3__* cur_altsetting; int dev; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_7__ {int * parent; } ;
struct input_dev {int* evbit; int* keybit; int* absbit; int name; int close; int open; TYPE_1__ dev; int id; } ;
struct TYPE_10__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_9__ {TYPE_2__* endpoint; } ;
struct TYPE_8__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct wacom_features* FUNC_3 (struct usb_device_id const*) ;
 struct input_dev* FUNC_4 () ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ,int ,int,int ) ;
 int FUNC_8 (struct input_dev*,struct wacom_wac*) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct wacom_wac*) ;
 struct wacom_wac* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (int ,int ,int) ;
 TYPE_4__* FUNC_15 (int ,int ) ;
 int FUNC_16 (struct usb_device*,scalar_t__,int ,int *) ;
 int FUNC_17 (struct usb_device*,scalar_t__,int ,int ) ;
 int FUNC_18 (TYPE_4__*,struct usb_device*,int ,int ,scalar_t__,int ,struct wacom_wac*,int ) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (struct usb_device*,int ,int) ;
 int FUNC_21 (struct usb_device*,int ) ;
 int FUNC_22 (struct usb_interface*,struct wacom_wac*) ;
 int FUNC_23 (struct usb_device*,int *) ;
 int FUNC_24 (struct wacom_wac*,struct usb_device*) ;
 int VAR_14 ;
 int FUNC_25 (struct wacom_wac*) ;
 int FUNC_26 (struct input_dev*,struct wacom_wac*) ;
 int FUNC_27 (struct wacom_wac*) ;
 int VAR_15 ;
 int FUNC_28 (struct usb_interface*,struct wacom_features*) ;
 int FUNC_29 (struct wacom_wac*) ;
 int FUNC_30 (struct usb_interface*,struct wacom_features*) ;
 int FUNC_31 (struct wacom_features*) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_32(struct usb_interface *VAR_17, const struct usb_device_id *VAR_18)
{
 struct usb_device *VAR_19 = FUNC_9(VAR_17);
 struct usb_endpoint_descriptor *VAR_20;
 struct wacom *VAR_21;
 struct wacom_wac *VAR_22;
 struct wacom_features *VAR_23;
 struct input_dev *VAR_24;
 int VAR_25 = -VAR_7;

 VAR_21 = FUNC_11(sizeof(struct wacom), VAR_10);
 VAR_22 = FUNC_11(sizeof(struct wacom_wac), VAR_10);
 VAR_24 = FUNC_4();
 if (!VAR_21 || !VAR_24 || !VAR_22)
  goto fail1;

 VAR_22->data = FUNC_16(VAR_19, VAR_12, VAR_10, &VAR_21->data_dma);
 if (!VAR_22->data)
  goto fail1;

 VAR_21->irq = FUNC_15(0, VAR_10);
 if (!VAR_21->irq)
  goto fail2;

 VAR_21->usbdev = VAR_19;
 VAR_21->dev = VAR_24;
 VAR_21->intf = VAR_17;
 FUNC_12(&VAR_21->lock);
 FUNC_20(VAR_19, VAR_21->phys, sizeof(VAR_21->phys));
 FUNC_13(VAR_21->phys, "/input0", sizeof(VAR_21->phys));

 VAR_22->features = VAR_23 = FUNC_3(VAR_18);
 FUNC_2(VAR_23->pktlen > VAR_12);

 VAR_25 = FUNC_24(VAR_22, VAR_19);
 if (VAR_25)
  goto fail3;

 VAR_21->wacom_wac = VAR_22;
 FUNC_23(VAR_19, &VAR_24->id);

 VAR_24->dev.parent = &VAR_17->dev;

 FUNC_8(VAR_24, VAR_21);

 VAR_24->open = VAR_15;
 VAR_24->close = VAR_14;

 VAR_20 = &VAR_17->cur_altsetting->endpoint[0].desc;


 VAR_25 = FUNC_30(VAR_17, VAR_23);
 if (VAR_25)
  goto fail4;

 VAR_24->evbit[0] |= FUNC_0(VAR_9) | FUNC_0(VAR_8);
 VAR_24->keybit[FUNC_1(VAR_4)] |= FUNC_0(VAR_6);
 FUNC_7(VAR_24, VAR_2, 0, VAR_23->x_max, 4, 0);
 FUNC_7(VAR_24, VAR_3, 0, VAR_23->y_max, 4, 0);
 VAR_24->absbit[FUNC_1(VAR_0)] |= FUNC_0(VAR_0);

 if (VAR_23->device_type == VAR_5)
  FUNC_7(VAR_24, VAR_1, 0, VAR_23->pressure_max, 0, 0);

 FUNC_26(VAR_24, VAR_22);

 FUNC_31(VAR_23);

 FUNC_14(VAR_22->name, VAR_23->name, sizeof(VAR_22->name));

 if (VAR_23->quirks & VAR_13) {

  FUNC_13(VAR_22->name,
   VAR_23->device_type == VAR_5 ?
    " Pen" : " Finger",
   sizeof(VAR_22->name));
 }

 VAR_24->name = VAR_22->name;

 FUNC_18(VAR_21->irq, VAR_19,
    FUNC_21(VAR_19, VAR_20->bEndpointAddress),
    VAR_22->data, VAR_23->pktlen,
    VAR_16, VAR_21, VAR_20->bInterval);
 VAR_21->irq->transfer_dma = VAR_21->data_dma;
 VAR_21->irq->transfer_flags |= VAR_11;

 VAR_25 = FUNC_27(VAR_21);
 if (VAR_25)
  goto fail4;

 VAR_25 = FUNC_6(VAR_21->dev);
 if (VAR_25)
  goto fail5;


 FUNC_28(VAR_17, VAR_23);

 FUNC_22(VAR_17, VAR_21);
 return 0;

 fail5: FUNC_25(VAR_21);
 fail4: FUNC_29(VAR_22);
 fail3: FUNC_19(VAR_21->irq);
 fail2: FUNC_17(VAR_19, VAR_12, VAR_22->data, VAR_21->data_dma);
 fail1: FUNC_5(VAR_24);
 FUNC_10(VAR_21);
 FUNC_10(VAR_22);
 return VAR_25;
}
