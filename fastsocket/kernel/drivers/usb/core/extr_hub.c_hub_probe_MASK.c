
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int needs_remote_wakeup; int dev; struct usb_host_interface* cur_altsetting; } ;
struct usb_hub {int init_work; int leds; struct usb_device* hdev; int * intfdev; int event_list; int kref; } ;
struct TYPE_3__ {int bInterfaceSubClass; int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {scalar_t__ level; scalar_t__ speed; scalar_t__ parent; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct usb_hub*,struct usb_endpoint_descriptor*) ;
 int FUNC_7 (struct usb_interface*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int *) ;
 struct usb_hub* FUNC_10 (int,int ) ;
 int * VAR_8 ;
 int FUNC_11 (struct usb_endpoint_descriptor*) ;
 int FUNC_12 (struct usb_interface*) ;
 int FUNC_13 (struct usb_interface*,struct usb_hub*) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_9, const struct usb_device_id *VAR_10)
{
 struct usb_host_interface *VAR_11;
 struct usb_endpoint_descriptor *VAR_12;
 struct usb_device *VAR_13;
 struct usb_hub *VAR_14;

 VAR_11 = VAR_9->cur_altsetting;
 VAR_13 = FUNC_8(VAR_9);

 if (VAR_13->level == VAR_5) {
  FUNC_3(&VAR_9->dev,
   "Unsupported bus topology: hub nested too deep\n");
  return -VAR_0;
 }
 if ((VAR_11->desc.bInterfaceSubClass != 0) &&
     (VAR_11->desc.bInterfaceSubClass != 1)) {
descriptor_error:
  FUNC_3 (&VAR_9->dev, "bad descriptor, ignoring hub\n");
  return -VAR_1;
 }


 if (VAR_11->desc.bNumEndpoints != 1)
  goto descriptor_error;

 VAR_12 = &VAR_11->endpoint[0].desc;


 if (!FUNC_11(VAR_12))
  goto descriptor_error;


 FUNC_4 (&VAR_9->dev, "USB hub found\n");

 VAR_14 = FUNC_10(sizeof(*VAR_14), VAR_4);
 if (!VAR_14) {
  FUNC_2 (&VAR_9->dev, "couldn't kmalloc hub struct\n");
  return -VAR_3;
 }

 FUNC_9(&VAR_14->kref);
 FUNC_1(&VAR_14->event_list);
 VAR_14->intfdev = &VAR_9->dev;
 VAR_14->hdev = VAR_13;
 FUNC_0(&VAR_14->leds, VAR_8);
 FUNC_0(&VAR_14->init_work, ((void*)0));
 FUNC_12(VAR_9);

 FUNC_13 (VAR_9, VAR_14);
 VAR_9->needs_remote_wakeup = 1;

 if (VAR_13->speed == VAR_6)
  VAR_7++;

 if (FUNC_6(VAR_14, VAR_12) >= 0)
  return 0;

 FUNC_7 (VAR_9);
 return -VAR_2;
}
