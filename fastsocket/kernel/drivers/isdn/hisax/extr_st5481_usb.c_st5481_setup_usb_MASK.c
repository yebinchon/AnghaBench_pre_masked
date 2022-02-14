
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int dummy; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;
struct TYPE_6__ {int bInterval; int bEndpointAddress; void* wMaxPacketSize; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct st5481_intr {struct urb* urb; } ;
struct TYPE_5__ {int data; int f; } ;
struct st5481_ctrl {TYPE_2__ msg_fifo; struct urb* urb; } ;
struct st5481_adapter {struct st5481_intr intr; struct st5481_ctrl ctrl; struct usb_device* usb_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ) ;
 struct urb* FUNC_6 (int ,int ) ;
 struct usb_host_interface* FUNC_7 (struct usb_interface*,int) ;
 int VAR_6 ;
 int FUNC_8 (struct urb*,struct usb_device*,int ,int *,int *,int ,int ,struct st5481_adapter*) ;
 int FUNC_9 (struct urb*,struct usb_device*,int ,int *,int ,int ,struct st5481_adapter*,int ) ;
 struct usb_interface* FUNC_10 (struct usb_device*,int ) ;
 int VAR_7 ;
 int FUNC_11 (struct usb_device*,int ) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (struct usb_device*,int ,int) ;
 int FUNC_14 (struct usb_device*,int ) ;

int FUNC_15(struct st5481_adapter *VAR_8)
{
 struct usb_device *VAR_9 = VAR_8->usb_dev;
 struct st5481_ctrl *VAR_10 = &VAR_8->ctrl;
 struct st5481_intr *VAR_11 = &VAR_8->intr;
 struct usb_interface *VAR_12;
 struct usb_host_interface *VAR_13 = ((void*)0);
 struct usb_host_endpoint *VAR_14;
 int VAR_15;
 struct urb *VAR_16;
 u8 *VAR_17;

 FUNC_1(2,"");

 if ((VAR_15 = FUNC_12 (VAR_9)) < 0) {
  FUNC_2("reset_configuration failed,status=%d",VAR_15);
  return VAR_15;
 }

 VAR_12 = FUNC_10(VAR_9, 0);
 if (VAR_12)
  VAR_13 = FUNC_7(VAR_12, 3);
 if (!VAR_13)
  return -VAR_2;


 if ( VAR_13->desc.bNumEndpoints != 7 ) {
  FUNC_2("expecting 7 got %d endpoints!", VAR_13->desc.bNumEndpoints);
  return -VAR_0;
 }


 VAR_13->endpoint[3].desc.wMaxPacketSize = FUNC_3(32);
 VAR_13->endpoint[4].desc.wMaxPacketSize = FUNC_3(32);


 if ((VAR_15 = FUNC_13 (VAR_9, 0, 3)) < 0) {
  FUNC_2("usb_set_interface failed,status=%d",VAR_15);
  return VAR_15;
 }


 VAR_16 = FUNC_6(0, VAR_4);
 if (!VAR_16) {
  return -VAR_1;
 }
 VAR_10->urb = VAR_16;


 FUNC_8 (VAR_16, VAR_9,
     FUNC_14(VAR_9, 0),
     ((void*)0), ((void*)0), 0, VAR_6, VAR_8);


 FUNC_4(&VAR_10->msg_fifo.f, FUNC_0(VAR_10->msg_fifo.data));


 VAR_16 = FUNC_6(0, VAR_4);
 if (!VAR_16) {
  return -VAR_1;
 }
 VAR_11->urb = VAR_16;

 VAR_17 = FUNC_5(VAR_5, VAR_4);
 if (!VAR_17) {
  return -VAR_1;
 }

 VAR_14 = &VAR_13->endpoint[VAR_3-1];


 FUNC_9(VAR_16, VAR_9,
       FUNC_11(VAR_9, VAR_14->desc.bEndpointAddress),
       VAR_17, VAR_5,
       VAR_7, VAR_8,
       VAR_14->desc.bInterval);

 return 0;
}
