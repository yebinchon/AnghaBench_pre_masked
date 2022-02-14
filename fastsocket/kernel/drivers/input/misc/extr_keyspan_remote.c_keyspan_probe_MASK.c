
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_keyspan {int toggle; int in_dma; int in_buffer; TYPE_3__* irq_urb; struct input_dev* input; struct usb_device* udev; int * keymap; int phys; int name; struct usb_endpoint_descriptor* in_endpoint; struct usb_interface* interface; } ;
struct usb_interface {int dev; int cur_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {char* product; TYPE_1__ descriptor; scalar_t__ manufacturer; } ;
struct TYPE_7__ {int * parent; } ;
struct input_dev {int keycodesize; int keycodemax; int close; int open; int keybit; int evbit; int * keycode; TYPE_2__ dev; int id; int phys; int name; } ;
struct TYPE_8__ {int transfer_flags; int transfer_dma; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct input_dev*,struct usb_keyspan*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int VAR_10 ;
 struct usb_endpoint_descriptor* FUNC_9 (int ) ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_keyspan*) ;
 struct usb_keyspan* FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int ,int,char*,int,int) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (int ,scalar_t__,int) ;
 int FUNC_18 (int ) ;
 TYPE_3__* FUNC_19 (int ,int ) ;
 int FUNC_20 (struct usb_device*,int ,int ,int *) ;
 int FUNC_21 (struct usb_device*,int ,int ,int ) ;
 int FUNC_22 (TYPE_3__*,struct usb_device*,int ,int ,int ,int ,struct usb_keyspan*,int ) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (struct usb_device*,int ,int) ;
 int FUNC_25 (struct usb_device*,int ) ;
 int FUNC_26 (struct usb_interface*,struct usb_keyspan*) ;
 int FUNC_27 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_28(struct usb_interface *VAR_14, const struct usb_device_id *VAR_15)
{
 struct usb_device *VAR_16 = FUNC_8(VAR_14);
 struct usb_endpoint_descriptor *VAR_17;
 struct usb_keyspan *VAR_18;
 struct input_dev *VAR_19;
 int VAR_20, VAR_21;

 VAR_17 = FUNC_9(VAR_14->cur_altsetting);
 if (!VAR_17)
  return -VAR_0;

 VAR_18 = FUNC_12(sizeof(*VAR_18), VAR_5);
 VAR_19 = FUNC_3();
 if (!VAR_18 || !VAR_19) {
  VAR_21 = -VAR_1;
  goto fail1;
 }

 VAR_18->udev = VAR_16;
 VAR_18->input = VAR_19;
 VAR_18->interface = VAR_14;
 VAR_18->in_endpoint = VAR_17;
 VAR_18->toggle = -1;

 VAR_18->in_buffer = FUNC_20(VAR_16, VAR_8, VAR_4, &VAR_18->in_dma);
 if (!VAR_18->in_buffer) {
  VAR_21 = -VAR_1;
  goto fail1;
 }

 VAR_18->irq_urb = FUNC_19(0, VAR_5);
 if (!VAR_18->irq_urb) {
  VAR_21 = -VAR_1;
  goto fail2;
 }

 VAR_21 = FUNC_10(VAR_16);
 if (VAR_21) {
  VAR_21 = -VAR_0;
  goto fail3;
 }

 if (VAR_16->manufacturer)
  FUNC_17(VAR_18->name, VAR_16->manufacturer, sizeof(VAR_18->name));

 if (VAR_16->product) {
  if (VAR_16->manufacturer)
   FUNC_16(VAR_18->name, " ", sizeof(VAR_18->name));
  FUNC_16(VAR_18->name, VAR_16->product, sizeof(VAR_18->name));
 }

 if (!FUNC_18(VAR_18->name))
  FUNC_15(VAR_18->name, sizeof(VAR_18->name),
    "USB Keyspan Remote %04x:%04x",
    FUNC_13(VAR_16->descriptor.idVendor),
    FUNC_13(VAR_16->descriptor.idProduct));

 FUNC_24(VAR_16, VAR_18->phys, sizeof(VAR_18->phys));
 FUNC_16(VAR_18->phys, "/input0", sizeof(VAR_18->phys));
 FUNC_14(VAR_18->keymap, VAR_12, sizeof(VAR_18->keymap));

 VAR_19->name = VAR_18->name;
 VAR_19->phys = VAR_18->phys;
 FUNC_27(VAR_16, &VAR_19->id);
 VAR_19->dev.parent = &VAR_14->dev;
 VAR_19->keycode = VAR_18->keymap;
 VAR_19->keycodesize = sizeof(unsigned short);
 VAR_19->keycodemax = FUNC_0(VAR_18->keymap);

 FUNC_6(VAR_19, VAR_3, VAR_7);
 FUNC_2(VAR_2, VAR_19->evbit);
 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_12); VAR_20++)
  FUNC_2(VAR_12[VAR_20], VAR_19->keybit);
 FUNC_1(VAR_6, VAR_19->keybit);

 FUNC_7(VAR_19, VAR_18);

 VAR_19->open = VAR_13;
 VAR_19->close = VAR_10;





 FUNC_22(VAR_18->irq_urb,
    VAR_18->udev,
    FUNC_25(VAR_18->udev, VAR_17->bEndpointAddress),
    VAR_18->in_buffer, VAR_8, VAR_11, VAR_18,
    VAR_17->bInterval);
 VAR_18->irq_urb->transfer_dma = VAR_18->in_dma;
 VAR_18->irq_urb->transfer_flags |= VAR_9;


 VAR_21 = FUNC_5(VAR_18->input);
 if (VAR_21)
  goto fail3;


 FUNC_26(VAR_14, VAR_18);

 return 0;

 fail3: FUNC_23(VAR_18->irq_urb);
 fail2: FUNC_21(VAR_16, VAR_8, VAR_18->in_buffer, VAR_18->in_dma);
 fail1: FUNC_11(VAR_18);
 FUNC_4(VAR_19);

 return VAR_21;
}
