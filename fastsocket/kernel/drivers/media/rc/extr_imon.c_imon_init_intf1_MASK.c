
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct urb {int dummy; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct imon_context {scalar_t__ display_type; int dev_present_intf1; int dev; int lock; int * touch; struct urb* rx_urb_intf1; TYPE_1__* rx_endpoint_intf1; int usb_rx_buf; int usbdev_intf1; TYPE_2__ ttimer; } ;
struct TYPE_3__ {int bInterval; int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct imon_context*,struct usb_host_interface*) ;
 int * FUNC_2 (struct imon_context*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 struct urb* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct urb*,int ,int ,int ,int,int ,struct imon_context*,int ) ;
 int FUNC_11 (struct urb*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int VAR_5 ;
 int FUNC_14 (struct urb*,int ) ;

__attribute__((used)) static struct imon_context *FUNC_15(struct usb_interface *VAR_6,
         struct imon_context *VAR_7)
{
 struct urb *VAR_8;
 struct usb_host_interface *VAR_9;
 int VAR_10 = -VAR_1;

 VAR_8 = FUNC_9(0, VAR_2);
 if (!VAR_8) {
  FUNC_8("usb_alloc_urb failed for IR urb\n");
  goto rx_urb_alloc_failed;
 }

 FUNC_6(&VAR_7->lock);

 if (VAR_7->display_type == VAR_3) {
  FUNC_3(&VAR_7->ttimer);
  VAR_7->ttimer.data = (unsigned long)VAR_7;
  VAR_7->ttimer.function = VAR_4;
 }

 VAR_7->usbdev_intf1 = FUNC_12(FUNC_5(VAR_6));
 VAR_7->dev_present_intf1 = 1;
 VAR_7->rx_urb_intf1 = VAR_8;

 VAR_10 = -VAR_0;
 VAR_9 = VAR_6->cur_altsetting;
 if (!FUNC_1(VAR_7, VAR_9))
  goto find_endpoint_failed;

 if (VAR_7->display_type == VAR_3) {
  VAR_7->touch = FUNC_2(VAR_7);
  if (!VAR_7->touch)
   goto touch_setup_failed;
 } else
  VAR_7->touch = ((void*)0);

 FUNC_10(VAR_7->rx_urb_intf1, VAR_7->usbdev_intf1,
  FUNC_13(VAR_7->usbdev_intf1,
   VAR_7->rx_endpoint_intf1->bEndpointAddress),
  VAR_7->usb_rx_buf, sizeof(VAR_7->usb_rx_buf),
  VAR_5, VAR_7,
  VAR_7->rx_endpoint_intf1->bInterval);

 VAR_10 = FUNC_14(VAR_7->rx_urb_intf1, VAR_2);

 if (VAR_10) {
  FUNC_8("usb_submit_urb failed for intf1 (%d)\n", VAR_10);
  goto urb_submit_failed;
 }

 return VAR_7;

urb_submit_failed:
 if (VAR_7->touch)
  FUNC_4(VAR_7->touch);
touch_setup_failed:
find_endpoint_failed:
 FUNC_7(&VAR_7->lock);
 FUNC_11(VAR_8);
rx_urb_alloc_failed:
 FUNC_0(VAR_7->dev, "unable to initialize intf0, err %d\n", VAR_10);

 return ((void*)0);
}
