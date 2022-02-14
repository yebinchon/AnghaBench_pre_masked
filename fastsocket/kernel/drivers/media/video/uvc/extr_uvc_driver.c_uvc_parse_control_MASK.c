
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_device {int quirks; struct usb_host_endpoint* int_ep; TYPE_1__* intf; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {unsigned char* extra; int extralen; struct usb_host_endpoint* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bInterval; int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_host_endpoint {struct usb_endpoint_descriptor desc; } ;
struct TYPE_3__ {struct usb_host_interface* cur_altsetting; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;
 int FUNC_2 (struct uvc_device*,unsigned char*,int) ;
 scalar_t__ FUNC_3 (struct uvc_device*,unsigned char*,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct uvc_device *VAR_3)
{
 struct usb_host_interface *VAR_4 = VAR_3->intf->cur_altsetting;
 unsigned char *VAR_5 = VAR_4->extra;
 int VAR_6 = VAR_4->extralen;
 int VAR_7;






 while (VAR_6 > 2) {
  if (FUNC_3(VAR_3, VAR_5, VAR_6) ||
      VAR_5[1] != VAR_0)
   goto next_descriptor;

  if ((VAR_7 = FUNC_2(VAR_3, VAR_5, VAR_6)) < 0)
   return VAR_7;

next_descriptor:
  VAR_6 -= VAR_5[0];
  VAR_5 += VAR_5[0];
 }






 if (VAR_4->desc.bNumEndpoints == 1 &&
     !(VAR_3->quirks & VAR_1)) {
  struct usb_host_endpoint *VAR_8 = &VAR_4->endpoint[0];
  struct usb_endpoint_descriptor *VAR_9 = &VAR_8->desc;

  if (FUNC_1(VAR_9) &&
      FUNC_0(VAR_9->wMaxPacketSize) >= 8 &&
      VAR_9->bInterval != 0) {
   FUNC_4(VAR_2, "Found a Status endpoint "
    "(addr %02x).\n", VAR_9->bEndpointAddress);
   VAR_3->int_ep = VAR_8;
  }
 }

 return 0;
}
