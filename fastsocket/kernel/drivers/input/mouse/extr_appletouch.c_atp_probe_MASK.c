
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_7__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;
struct TYPE_9__ {int * parent; } ;
struct input_dev {char* name; int keybit; int evbit; int close; int open; TYPE_3__ dev; int id; int phys; } ;
struct atp_info {int xsensors; int xfact; int ysensors; int yfact; int datalen; int callback; } ;
struct atp {int overflow_warned; TYPE_4__* urb; int data; struct atp_info const* info; struct usb_device* udev; int work; struct input_dev* input; int phys; } ;
struct TYPE_10__ {int transfer_dma; } ;
struct TYPE_8__ {struct usb_endpoint_descriptor desc; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ) ;
 int VAR_15 ;
 int FUNC_1 (struct atp*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (char*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_7 (struct input_dev*,struct atp*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct atp*) ;
 struct atp* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*,int) ;
 TYPE_4__* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct usb_device*,int ,int ,int *) ;
 int FUNC_15 (struct usb_device*,int ,int ,int ) ;
 scalar_t__ FUNC_16 (struct usb_endpoint_descriptor*) ;
 int FUNC_17 (TYPE_4__*,struct usb_device*,int ,int ,int ,int ,struct atp*,int) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (struct usb_device*,int ,int) ;
 int FUNC_20 (struct usb_device*,int) ;
 int FUNC_21 (struct usb_interface*,struct atp*) ;
 int FUNC_22 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_23(struct usb_interface *VAR_18,
       const struct usb_device_id *VAR_19)
{
 struct atp *VAR_20;
 struct input_dev *VAR_21;
 struct usb_device *VAR_22 = FUNC_8(VAR_18);
 struct usb_host_interface *VAR_23;
 struct usb_endpoint_descriptor *VAR_24;
 int VAR_25 = 0;
 int VAR_26, VAR_27 = -VAR_11;
 const struct atp_info *VAR_28 = (const struct atp_info *)VAR_19->driver_info;



 VAR_23 = VAR_18->cur_altsetting;
 for (VAR_26 = 0; VAR_26 < VAR_23->desc.bNumEndpoints; VAR_26++) {
  VAR_24 = &VAR_23->endpoint[VAR_26].desc;
  if (!VAR_25 && FUNC_16(VAR_24)) {

   VAR_25 = VAR_24->bEndpointAddress;
   break;
  }
 }
 if (!VAR_25) {
  FUNC_2("Could not find int-in endpoint");
  return -VAR_10;
 }


 VAR_20 = FUNC_10(sizeof(struct atp), VAR_14);
 VAR_21 = FUNC_3();
 if (!VAR_20 || !VAR_21) {
  FUNC_2("Out of memory");
  goto err_free_devs;
 }

 VAR_20->udev = VAR_22;
 VAR_20->input = VAR_21;
 VAR_20->info = VAR_28;
 VAR_20->overflow_warned = 0;

 VAR_20->urb = FUNC_13(0, VAR_14);
 if (!VAR_20->urb)
  goto err_free_devs;

 VAR_20->data = FUNC_14(VAR_20->udev, VAR_20->info->datalen, VAR_14,
         &VAR_20->urb->transfer_dma);
 if (!VAR_20->data)
  goto err_free_urb;

 FUNC_17(VAR_20->urb, VAR_22,
    FUNC_20(VAR_22, VAR_25),
    VAR_20->data, VAR_20->info->datalen,
    VAR_20->info->callback, VAR_20, 1);

 VAR_27 = FUNC_1(VAR_20);
 if (VAR_27)
  goto err_free_buffer;

 FUNC_19(VAR_22, VAR_20->phys, sizeof(VAR_20->phys));
 FUNC_12(VAR_20->phys, "/input0", sizeof(VAR_20->phys));

 VAR_21->name = "appletouch";
 VAR_21->phys = VAR_20->phys;
 FUNC_22(VAR_20->udev, &VAR_21->id);
 VAR_21->dev.parent = &VAR_18->dev;

 FUNC_7(VAR_21, VAR_20);

 VAR_21->open = VAR_16;
 VAR_21->close = VAR_15;

 FUNC_11(VAR_12, VAR_21->evbit);

 FUNC_6(VAR_21, VAR_1, 0,
        (VAR_20->info->xsensors - 1) * VAR_20->info->xfact - 1,
        VAR_3, 0);
 FUNC_6(VAR_21, VAR_2, 0,
        (VAR_20->info->ysensors - 1) * VAR_20->info->yfact - 1,
        VAR_3, 0);
 FUNC_6(VAR_21, VAR_0, 0, VAR_4, 0, 0);

 FUNC_11(VAR_13, VAR_21->evbit);
 FUNC_11(VAR_9, VAR_21->keybit);
 FUNC_11(VAR_7, VAR_21->keybit);
 FUNC_11(VAR_6, VAR_21->keybit);
 FUNC_11(VAR_8, VAR_21->keybit);
 FUNC_11(VAR_5, VAR_21->keybit);

 VAR_27 = FUNC_5(VAR_20->input);
 if (VAR_27)
  goto err_free_buffer;


 FUNC_21(VAR_18, VAR_20);

 FUNC_0(&VAR_20->work, VAR_17);

 return 0;

 err_free_buffer:
 FUNC_15(VAR_20->udev, VAR_20->info->datalen,
   VAR_20->data, VAR_20->urb->transfer_dma);
 err_free_urb:
 FUNC_18(VAR_20->urb);
 err_free_devs:
 FUNC_21(VAR_18, ((void*)0));
 FUNC_9(VAR_20);
 FUNC_4(VAR_21);
 return VAR_27;
}
