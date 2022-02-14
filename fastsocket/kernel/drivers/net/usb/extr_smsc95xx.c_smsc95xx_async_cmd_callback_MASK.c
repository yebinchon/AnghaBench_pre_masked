
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct usb_context {struct usbnet* dev; } ;
struct urb {int status; struct usb_context* context; } ;


 int FUNC_0 (struct usbnet*,char*,int) ;
 int FUNC_1 (struct usb_context*) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct usb_context *VAR_1 = VAR_0->context;
 struct usbnet *VAR_2 = VAR_1->dev;
 int VAR_3 = VAR_0->status;

 if (VAR_3 < 0)
  FUNC_0(VAR_2, "async callback failed with %d", VAR_3);

 FUNC_1(VAR_1);
 FUNC_2(VAR_0);
}
