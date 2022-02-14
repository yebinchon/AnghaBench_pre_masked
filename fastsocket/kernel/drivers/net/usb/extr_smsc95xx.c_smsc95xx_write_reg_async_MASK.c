
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int const u16 ;
struct usbnet {int udev; } ;
struct TYPE_2__ {int bRequestType; int wValue; void* wLength; void* wIndex; int bRequest; } ;
struct usb_context {TYPE_1__ req; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int const) ;
 int FUNC_1 (struct usbnet*,char*,...) ;
 int FUNC_2 (struct usb_context*) ;
 struct usb_context* FUNC_3 (int,int ) ;
 int VAR_6 ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int ,int ,void*,int *,int const,int ,void*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_9(struct usbnet *VAR_7, u16 VAR_8, u32 *VAR_9)
{
 struct usb_context *VAR_10;
 int VAR_11;
 struct urb *VAR_12;
 const u16 VAR_13 = 4;

 VAR_12 = FUNC_4(0, VAR_1);
 if (!VAR_12) {
  FUNC_1(VAR_7, "Error allocating URB");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(sizeof(struct usb_context), VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_7, "Error allocating control msg");
  FUNC_6(VAR_12);
  return -VAR_0;
 }

 VAR_10->req.bRequestType =
  VAR_2 | VAR_4 | VAR_3;
 VAR_10->req.bRequest = VAR_5;
 VAR_10->req.wValue = 00;
 VAR_10->req.wIndex = FUNC_0(VAR_8);
 VAR_10->req.wLength = FUNC_0(VAR_13);

 FUNC_5(VAR_12, VAR_7->udev, FUNC_7(VAR_7->udev, 0),
  (void *)&VAR_10->req, VAR_9, VAR_13,
  VAR_6,
  (void *)VAR_10);

 VAR_11 = FUNC_8(VAR_12, VAR_1);
 if (VAR_11 < 0) {
  FUNC_1(VAR_7, "Error submitting control msg, sts=%d", VAR_11);
  FUNC_2(VAR_10);
  FUNC_6(VAR_12);
 }

 return VAR_11;
}
