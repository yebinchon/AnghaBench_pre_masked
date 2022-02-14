
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {TYPE_3__* cur_altsetting; int dev; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct kbtab {int data_dma; int data; TYPE_4__* irq; struct input_dev* dev; int phys; struct usb_device* usbdev; } ;
struct TYPE_7__ {int * parent; } ;
struct input_dev {char* name; int* evbit; int* keybit; int* mscbit; int close; int open; TYPE_1__ dev; int id; int phys; } ;
struct TYPE_10__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_9__ {TYPE_2__* endpoint; } ;
struct TYPE_8__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ,int,int,int ) ;
 int FUNC_6 (struct input_dev*,struct kbtab*) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (struct kbtab*) ;
 struct kbtab* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,char*,int) ;
 TYPE_4__* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct usb_device*,int,int ,int *) ;
 int FUNC_13 (struct usb_device*,int,int ,int ) ;
 int FUNC_14 (TYPE_4__*,struct usb_device*,int ,int ,int,int ,struct kbtab*,int ) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (struct usb_device*,int ,int) ;
 int FUNC_17 (struct usb_device*,int ) ;
 int FUNC_18 (struct usb_interface*,struct kbtab*) ;
 int FUNC_19 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_20(struct usb_interface *VAR_19, const struct usb_device_id *VAR_20)
{
 struct usb_device *VAR_21 = FUNC_7(VAR_19);
 struct usb_endpoint_descriptor *VAR_22;
 struct kbtab *VAR_23;
 struct input_dev *VAR_24;
 int VAR_25 = -VAR_9;

 VAR_23 = FUNC_9(sizeof(struct kbtab), VAR_13);
 VAR_24 = FUNC_2();
 if (!VAR_23 || !VAR_24)
  goto fail1;

 VAR_23->data = FUNC_12(VAR_21, 8, VAR_13, &VAR_23->data_dma);
 if (!VAR_23->data)
  goto fail1;

 VAR_23->irq = FUNC_11(0, VAR_13);
 if (!VAR_23->irq)
  goto fail2;

 VAR_23->usbdev = VAR_21;
 VAR_23->dev = VAR_24;

 FUNC_16(VAR_21, VAR_23->phys, sizeof(VAR_23->phys));
 FUNC_10(VAR_23->phys, "/input0", sizeof(VAR_23->phys));

 VAR_24->name = "KB Gear Tablet";
 VAR_24->phys = VAR_23->phys;
 FUNC_19(VAR_21, &VAR_24->id);
 VAR_24->dev.parent = &VAR_19->dev;

 FUNC_6(VAR_24, VAR_23);

 VAR_24->open = VAR_18;
 VAR_24->close = VAR_16;

 VAR_24->evbit[0] |= FUNC_0(VAR_11) | FUNC_0(VAR_10) |
  FUNC_0(VAR_12);
 VAR_24->keybit[FUNC_1(VAR_4)] |= FUNC_0(VAR_4) |
  FUNC_0(VAR_6) | FUNC_0(VAR_5);
 VAR_24->keybit[FUNC_1(VAR_3)] |= FUNC_0(VAR_7) |
  FUNC_0(VAR_8);
 VAR_24->mscbit[0] |= FUNC_0(VAR_14);
 FUNC_5(VAR_24, VAR_1, 0, 0x2000, 4, 0);
 FUNC_5(VAR_24, VAR_2, 0, 0x1750, 4, 0);
 FUNC_5(VAR_24, VAR_0, 0, 0xff, 0, 0);

 VAR_22 = &VAR_19->cur_altsetting->endpoint[0].desc;

 FUNC_14(VAR_23->irq, VAR_21,
    FUNC_17(VAR_21, VAR_22->bEndpointAddress),
    VAR_23->data, 8,
    VAR_17, VAR_23, VAR_22->bInterval);
 VAR_23->irq->transfer_dma = VAR_23->data_dma;
 VAR_23->irq->transfer_flags |= VAR_15;

 VAR_25 = FUNC_4(VAR_23->dev);
 if (VAR_25)
  goto fail3;

 FUNC_18(VAR_19, VAR_23);

 return 0;

 fail3: FUNC_15(VAR_23->irq);
 fail2: FUNC_13(VAR_21, 10, VAR_23->data, VAR_23->data_dma);
 fail1: FUNC_3(VAR_24);
 FUNC_8(VAR_23);
 return VAR_25;
}
