
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_rc {struct hwarc* priv; } ;
struct device {int dummy; } ;
struct usb_interface {TYPE_2__* cur_altsetting; struct device dev; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device {int dummy; } ;
struct hwarc {int * rd_buffer; int * neep_urb; struct usb_interface* usb_iface; } ;
struct TYPE_4__ {TYPE_1__* endpoint; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (unsigned long) ;
 int VAR_4 ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,struct usb_device*,int ,int *,int ,int ,struct hwarc*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_device*,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct uwb_rc *VAR_5)
{
 struct hwarc *VAR_6 = VAR_5->priv;
 struct usb_interface *VAR_7 = VAR_6->usb_iface;
 struct usb_device *VAR_8 = FUNC_3(VAR_7);
 struct device *VAR_9 = &VAR_7->dev;
 int VAR_10;
 struct usb_endpoint_descriptor *VAR_11;

 VAR_11 = &VAR_7->cur_altsetting->endpoint[0].desc;
 VAR_6->rd_buffer = (void *) FUNC_0(VAR_2);
 if (VAR_6->rd_buffer == ((void*)0)) {
  FUNC_1(VAR_9, "Unable to allocate notification's read buffer\n");
  goto error_rd_buffer;
 }
 VAR_6->neep_urb = FUNC_4(0, VAR_2);
 if (VAR_6->neep_urb == ((void*)0)) {
  FUNC_1(VAR_9, "Unable to allocate notification URB\n");
  goto error_urb_alloc;
 }
 FUNC_5(VAR_6->neep_urb, VAR_8,
    FUNC_7(VAR_8, VAR_11->bEndpointAddress),
    VAR_6->rd_buffer, VAR_3,
    VAR_4, VAR_6, VAR_11->bInterval);
 VAR_10 = FUNC_8(VAR_6->neep_urb, VAR_1);
 if (VAR_10 < 0) {
  FUNC_1(VAR_9, "Cannot submit notification URB: %d\n", VAR_10);
  goto error_neep_submit;
 }
 return 0;

error_neep_submit:
 FUNC_6(VAR_6->neep_urb);
error_urb_alloc:
 FUNC_2((unsigned long)VAR_6->rd_buffer);
error_rd_buffer:
 return -VAR_0;
}
