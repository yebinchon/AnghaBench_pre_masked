
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct usb_xpad {int dpad_mapping; scalar_t__ xtype; int* bdata; int idata_dma; int idata; TYPE_7__* irq_in; TYPE_7__* bulk_out; struct usb_device* udev; struct input_dev* dev; int phys; } ;
struct usb_interface {TYPE_4__* cur_altsetting; int dev; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; int bInterval; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_13__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_2__ descriptor; } ;
struct TYPE_16__ {int * parent; } ;
struct input_dev {int* evbit; int keybit; int close; int open; TYPE_5__ dev; int id; int phys; int name; } ;
struct TYPE_18__ {struct usb_device* dev; int transfer_flags; int transfer_dma; } ;
struct TYPE_17__ {scalar_t__ idVendor; scalar_t__ idProduct; int dpad_mapping; scalar_t__ xtype; int name; } ;
struct TYPE_14__ {scalar_t__ bInterfaceClass; int bInterfaceProtocol; int bInterfaceNumber; } ;
struct TYPE_15__ {TYPE_1__* endpoint; TYPE_3__ desc; } ;
struct TYPE_12__ {struct usb_endpoint_descriptor desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,struct usb_xpad*) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_xpad*) ;
 void* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ,char*,int) ;
 void* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct usb_device*,int,int ,int *) ;
 int FUNC_13 (struct usb_device*,int,int ,int ) ;
 int FUNC_14 (TYPE_7__*,struct usb_device*,int ,int*,int,int ,struct usb_xpad*) ;
 int FUNC_15 (TYPE_7__*,struct usb_device*,int ,int ,int,int ,struct usb_xpad*,int ) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (struct usb_device*,int ,int) ;
 int FUNC_19 (struct usb_device*,int ) ;
 int FUNC_20 (struct usb_interface*,struct usb_xpad*) ;
 int FUNC_21 (struct usb_device*,int ) ;
 int FUNC_22 (TYPE_7__*,int ) ;
 int FUNC_23 (struct usb_device*,int *) ;
 scalar_t__* VAR_15 ;
 scalar_t__* VAR_16 ;
 scalar_t__* VAR_17 ;
 scalar_t__* VAR_18 ;
 scalar_t__* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__* VAR_22 ;
 int FUNC_24 (struct usb_xpad*) ;
 TYPE_6__* VAR_23 ;
 int FUNC_25 (struct usb_xpad*) ;
 int FUNC_26 (struct usb_interface*,struct usb_xpad*) ;
 int VAR_24 ;
 int FUNC_27 (struct usb_xpad*) ;
 int VAR_25 ;
 int FUNC_28 (struct input_dev*,scalar_t__) ;

__attribute__((used)) static int FUNC_29(struct usb_interface *VAR_26, const struct usb_device_id *VAR_27)
{
 struct usb_device *VAR_28 = FUNC_5(VAR_26);
 struct usb_xpad *VAR_29;
 struct input_dev *VAR_30;
 struct usb_endpoint_descriptor *VAR_31;
 int VAR_32;
 int VAR_33 = -VAR_0;

 for (VAR_32 = 0; VAR_23[VAR_32].idVendor; VAR_32++) {
  if ((FUNC_8(VAR_28->descriptor.idVendor) == VAR_23[VAR_32].idVendor) &&
      (FUNC_8(VAR_28->descriptor.idProduct) == VAR_23[VAR_32].idProduct))
   break;
 }

 VAR_29 = FUNC_7(sizeof(struct usb_xpad), VAR_3);
 VAR_30 = FUNC_1();
 if (!VAR_29 || !VAR_30)
  goto fail1;

 VAR_29->idata = FUNC_12(VAR_28, VAR_9,
           VAR_3, &VAR_29->idata_dma);
 if (!VAR_29->idata)
  goto fail1;

 VAR_29->irq_in = FUNC_11(0, VAR_3);
 if (!VAR_29->irq_in)
  goto fail2;

 VAR_29->udev = VAR_28;
 VAR_29->dpad_mapping = VAR_23[VAR_32].dpad_mapping;
 VAR_29->xtype = VAR_23[VAR_32].xtype;
 if (VAR_29->dpad_mapping == VAR_6)
  VAR_29->dpad_mapping = !VAR_14;
 if (VAR_29->xtype == VAR_10) {
  if (VAR_26->cur_altsetting->desc.bInterfaceClass == VAR_8) {
   if (VAR_26->cur_altsetting->desc.bInterfaceProtocol == 129)
    VAR_29->xtype = VAR_13;
   else
    VAR_29->xtype = VAR_12;
  } else
   VAR_29->xtype = VAR_11;
 }
 VAR_29->dev = VAR_30;
 FUNC_18(VAR_28, VAR_29->phys, sizeof(VAR_29->phys));
 FUNC_10(VAR_29->phys, "/input0", sizeof(VAR_29->phys));

 VAR_30->name = VAR_23[VAR_32].name;
 VAR_30->phys = VAR_29->phys;
 FUNC_23(VAR_28, &VAR_30->id);
 VAR_30->dev.parent = &VAR_26->dev;

 FUNC_4(VAR_30, VAR_29);

 VAR_30->open = VAR_25;
 VAR_30->close = VAR_21;

 VAR_30->evbit[0] = FUNC_0(VAR_2) | FUNC_0(VAR_1);


 for (VAR_32 = 0; VAR_22[VAR_32] >= 0; VAR_32++)
  FUNC_9(VAR_22[VAR_32], VAR_30->keybit);
 if ((VAR_29->xtype == VAR_12) || (VAR_29->xtype == VAR_13))
  for (VAR_32 = 0; VAR_15[VAR_32] >= 0; VAR_32++)
   FUNC_9(VAR_15[VAR_32], VAR_30->keybit);
 else
  for (VAR_32 = 0; VAR_18[VAR_32] >= 0; VAR_32++)
   FUNC_9(VAR_18[VAR_32], VAR_30->keybit);
 if (VAR_29->dpad_mapping == VAR_5)
  for (VAR_32 = 0; VAR_19[VAR_32] >= 0; VAR_32++)
   FUNC_9(VAR_19[VAR_32], VAR_30->keybit);


 for (VAR_32 = 0; VAR_16[VAR_32] >= 0; VAR_32++)
  FUNC_28(VAR_30, VAR_16[VAR_32]);
 if (VAR_29->dpad_mapping == VAR_4)
  for (VAR_32 = 0; VAR_17[VAR_32] >= 0; VAR_32++)
      FUNC_28(VAR_30, VAR_17[VAR_32]);

 VAR_33 = FUNC_26(VAR_26, VAR_29);
 if (VAR_33)
  goto fail2;

 VAR_33 = FUNC_25(VAR_29);
 if (VAR_33)
  goto fail3;

 VAR_33 = FUNC_27(VAR_29);
 if (VAR_33)
  goto fail3;

 VAR_31 = &VAR_26->cur_altsetting->endpoint[0].desc;
 FUNC_15(VAR_29->irq_in, VAR_28,
    FUNC_19(VAR_28, VAR_31->bEndpointAddress),
    VAR_29->idata, VAR_9, VAR_24,
    VAR_29, VAR_31->bInterval);
 VAR_29->irq_in->transfer_dma = VAR_29->idata_dma;
 VAR_29->irq_in->transfer_flags |= VAR_7;

 VAR_33 = FUNC_3(VAR_29->dev);
 if (VAR_33)
  goto fail4;

 FUNC_20(VAR_26, VAR_29);
 if (VAR_29->xtype == VAR_13) {
  VAR_29->irq_in->dev = VAR_29->udev;
  VAR_33 = FUNC_22(VAR_29->irq_in, VAR_3);
  if (VAR_33)
   goto fail4;





  VAR_29->bulk_out = FUNC_11(0, VAR_3);
  if(!VAR_29->bulk_out)
   goto fail5;

  VAR_29->bdata = FUNC_7(VAR_9, VAR_3);
  if(!VAR_29->bdata)
   goto fail6;

  VAR_29->bdata[2] = 0x08;
  switch (VAR_26->cur_altsetting->desc.bInterfaceNumber) {
  case 0:
   VAR_29->bdata[3] = 0x42;
   break;
  case 2:
   VAR_29->bdata[3] = 0x43;
   break;
  case 4:
   VAR_29->bdata[3] = 0x44;
   break;
  case 6:
   VAR_29->bdata[3] = 0x45;
  }

  VAR_31 = &VAR_26->cur_altsetting->endpoint[1].desc;
  FUNC_14(VAR_29->bulk_out, VAR_28,
    FUNC_21(VAR_28, VAR_31->bEndpointAddress),
    VAR_29->bdata, VAR_9, VAR_20, VAR_29);
 }

 return 0;

 fail6: FUNC_16(VAR_29->bulk_out);
 fail5: FUNC_17(VAR_29->irq_in);
 fail4: FUNC_16(VAR_29->irq_in);
 fail3: FUNC_24(VAR_29);
 fail2: FUNC_13(VAR_28, VAR_9, VAR_29->idata, VAR_29->idata_dma);
 fail1: FUNC_2(VAR_30);
 FUNC_6(VAR_29);
 return VAR_33;

}
