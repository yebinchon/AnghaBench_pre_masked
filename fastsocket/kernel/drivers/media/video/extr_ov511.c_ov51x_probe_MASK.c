
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct usb_ov511 {int num_inputs; int stop_during_set; scalar_t__ bclass; int nr; int cbuf_lock; struct usb_ov511* cbuf; TYPE_5__* vdev; int lock; int usb_path; TYPE_4__* sbuf; TYPE_3__* frame; int buf_state; int i2c_lock; int buf_lock; int wq; void* bridge; int auto_exp; int auto_gain; int auto_brt; int mirror; int backlight; int lightfreq; int compress; int led_policy; int iface; struct usb_device* dev; } ;
struct usb_interface_descriptor {int bInterfaceClass; int bInterfaceSubClass; int bInterfaceNumber; } ;
struct usb_interface {int dev; TYPE_1__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_13__ {int bNumConfigurations; int idProduct; int idVendor; } ;
struct usb_device {TYPE_2__ descriptor; } ;
struct TYPE_16__ {int minor; int * parent; } ;
struct TYPE_15__ {int n; int lock; struct usb_ov511* ov; } ;
struct TYPE_14__ {int framenum; int wq; } ;
struct TYPE_12__ {struct usb_interface_descriptor desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,char*) ;





 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int *,char*,int ,...) ;
 scalar_t__ VAR_23 ;
 int FUNC_2 (char*,...) ;
 int VAR_24 ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_ov511*) ;
 struct usb_ov511* FUNC_7 (int ,int ) ;
 struct usb_ov511* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_10 (TYPE_5__*,int *,int) ;
 int VAR_27 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct usb_ov511*) ;
 int VAR_28 ;
 int FUNC_15 (struct usb_ov511*) ;
 scalar_t__ FUNC_16 (struct usb_ov511*) ;
 int FUNC_17 (struct usb_ov511*) ;
 scalar_t__ FUNC_18 (struct usb_ov511*) ;
 scalar_t__ FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,void*) ;
 scalar_t__* VAR_29 ;
 scalar_t__ FUNC_22 (struct usb_device*,int ,int ) ;
 int FUNC_23 (struct usb_interface*,struct usb_ov511*) ;
 int VAR_30 ;
 TYPE_5__* FUNC_24 () ;
 int FUNC_25 (TYPE_5__*) ;
 int FUNC_26 (TYPE_5__*,int ,int) ;
 int FUNC_27 (TYPE_5__*,struct usb_ov511*) ;
 int FUNC_28 (TYPE_5__*) ;

__attribute__((used)) static int
FUNC_29(struct usb_interface *VAR_31, const struct usb_device_id *VAR_32)
{
 struct usb_device *VAR_33 = FUNC_5(VAR_31);
 struct usb_interface_descriptor *VAR_34;
 struct usb_ov511 *VAR_35;
 int VAR_36, VAR_37, VAR_38;

 FUNC_0(1, "probing for device...");


 if (VAR_33->descriptor.bNumConfigurations != 1)
  return -VAR_8;

 VAR_34 = &VAR_31->cur_altsetting->desc;

 if (VAR_34->bInterfaceClass != 0xFF)
  return -VAR_8;
 if (VAR_34->bInterfaceSubClass != 0x00)
  return -VAR_8;

 if ((VAR_35 = FUNC_8(sizeof(*VAR_35), VAR_9)) == ((void*)0)) {
  FUNC_2("couldn't kmalloc ov struct");
  goto error_out;
 }

 VAR_35->dev = VAR_33;
 VAR_35->iface = VAR_34->bInterfaceNumber;
 VAR_35->led_policy = VAR_25;
 VAR_35->compress = VAR_22;
 VAR_35->lightfreq = VAR_26;
 VAR_35->num_inputs = 1;
 VAR_35->stop_during_set = !VAR_24;
 VAR_35->backlight = VAR_20;
 VAR_35->mirror = VAR_27;
 VAR_35->auto_brt = VAR_17;
 VAR_35->auto_gain = VAR_19;
 VAR_35->auto_exp = VAR_18;

 switch (FUNC_9(VAR_33->descriptor.idProduct)) {
 case 131:
  VAR_35->bridge = VAR_2;
  VAR_35->bclass = VAR_0;
  break;
 case 130:
  VAR_35->bridge = VAR_3;
  VAR_35->bclass = VAR_0;
  break;
 case 129:
  VAR_35->bridge = VAR_4;
  VAR_35->bclass = VAR_1;
  break;
 case 128:
  VAR_35->bridge = VAR_5;
  VAR_35->bclass = VAR_1;
  break;
 case 132:
  if (FUNC_9(VAR_33->descriptor.idVendor) != VAR_15)
   goto error;
  VAR_35->bridge = VAR_3;
  VAR_35->bclass = VAR_0;
  break;
 default:
  FUNC_2("Unknown product ID 0x%04x", FUNC_9(VAR_33->descriptor.idProduct));
  goto error;
 }

 FUNC_1(&VAR_31->dev, "USB %s video device found\n",
   FUNC_21(VAR_21, VAR_35->bridge));

 FUNC_4(&VAR_35->wq);

 FUNC_11(&VAR_35->lock);
 FUNC_11(&VAR_35->buf_lock);
 FUNC_11(&VAR_35->i2c_lock);
 FUNC_11(&VAR_35->cbuf_lock);

 VAR_35->buf_state = VAR_6;

 if (FUNC_22(VAR_33, VAR_35->usb_path, VAR_14) < 0) {
  FUNC_2("usb_make_path error");
  goto error;
 }



 VAR_35->cbuf = FUNC_7(VAR_10, VAR_9);
 if (!VAR_35->cbuf)
  goto error;

 if (VAR_35->bclass == VAR_1) {
  if (FUNC_16(VAR_35) < 0)
   goto error;
 } else {
  if (FUNC_14(VAR_35) < 0)
   goto error;
 }

 for (VAR_36 = 0; VAR_36 < VAR_12; VAR_36++) {
  VAR_35->frame[VAR_36].framenum = VAR_36;
  FUNC_4(&VAR_35->frame[VAR_36].wq);
 }

 for (VAR_36 = 0; VAR_36 < VAR_13; VAR_36++) {
  VAR_35->sbuf[VAR_36].ov = VAR_35;
  FUNC_20(&VAR_35->sbuf[VAR_36].lock);
  VAR_35->sbuf[VAR_36].n = VAR_36;
 }



 if (FUNC_18(VAR_35) < 0)
  goto error;
 VAR_35->vdev = FUNC_24();
 if (!VAR_35->vdev)
  goto error;

 FUNC_10(VAR_35->vdev, &VAR_30, sizeof(*VAR_35->vdev));
 VAR_35->vdev->parent = &VAR_31->dev;
 FUNC_27(VAR_35->vdev, VAR_35);

 FUNC_12(&VAR_35->lock);


 VAR_38 = FUNC_3(&VAR_28, VAR_11);


 if (VAR_29[VAR_38] != 0)
  VAR_37 = FUNC_26(VAR_35->vdev, VAR_16,
        VAR_29[VAR_38]);
 else
  VAR_37 = FUNC_26(VAR_35->vdev, VAR_16, -1);

 if (VAR_37 < 0) {
  FUNC_2("video_register_device failed");
  FUNC_13(&VAR_35->lock);
  goto error;
 }


 VAR_28 |= 1 << VAR_38;
 VAR_35->nr = VAR_38;

 FUNC_1(&VAR_31->dev, "Device at %s registered to minor %d\n",
   VAR_35->usb_path, VAR_35->vdev->minor);

 FUNC_23(VAR_31, VAR_35);
 if (FUNC_19(VAR_35->vdev)) {
  FUNC_2("ov_create_sysfs failed");
  VAR_28 &= ~(1 << VAR_38);
  FUNC_13(&VAR_35->lock);
  goto error;
 }

 FUNC_13(&VAR_35->lock);

 return 0;

error:
 if (VAR_35->vdev) {
  if (-1 == VAR_35->vdev->minor)
   FUNC_25(VAR_35->vdev);
  else
   FUNC_28(VAR_35->vdev);
  VAR_35->vdev = ((void*)0);
 }

 if (VAR_35->cbuf) {
  FUNC_12(&VAR_35->cbuf_lock);
  FUNC_6(VAR_35->cbuf);
  VAR_35->cbuf = ((void*)0);
  FUNC_13(&VAR_35->cbuf_lock);
 }

 FUNC_6(VAR_35);
 VAR_35 = ((void*)0);

error_out:
 FUNC_2("Camera initialization failed");
 return -VAR_7;
}
