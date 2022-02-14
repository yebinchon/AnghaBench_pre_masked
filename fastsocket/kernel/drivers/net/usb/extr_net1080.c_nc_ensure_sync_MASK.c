
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int frame_errors; int udev; } ;
struct usb_ctrlrequest {int bRequestType; void* wLength; void* wIndex; void* wValue; int bRequest; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct usbnet*,char*) ;
 int FUNC_2 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_3 (int,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct usbnet*) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int ,int ,unsigned char*,int *,int ,int ,struct usb_ctrlrequest*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_10(struct usbnet *VAR_9)
{
 VAR_9->frame_errors++;
 if (VAR_9->frame_errors > 5) {
  struct urb *VAR_10;
  struct usb_ctrlrequest *VAR_11;
  int VAR_12;


  VAR_10 = FUNC_5(0, VAR_0);
  if (!VAR_10)
   return;

  VAR_11 = FUNC_3(sizeof *VAR_11, VAR_0);
  if (!VAR_11) {
   FUNC_7(VAR_10);
   return;
  }

  VAR_11->bRequestType = VAR_5
   | VAR_7
   | VAR_6;
  VAR_11->bRequest = VAR_2;
  VAR_11->wValue = FUNC_0(VAR_4
    | VAR_3);
  VAR_11->wIndex = FUNC_0(VAR_1);
  VAR_11->wLength = FUNC_0(0);




  FUNC_6(VAR_10, VAR_9->udev,
   FUNC_8(VAR_9->udev, 0),
   (unsigned char *) VAR_11,
   ((void*)0), 0,
   VAR_8, VAR_11);
  VAR_12 = FUNC_9(VAR_10, VAR_0);
  if (VAR_12) {
   FUNC_2(VAR_11);
   FUNC_7(VAR_10);
   return;
  }

  if (FUNC_4(VAR_9))
   FUNC_1(VAR_9, "flush net1080; too many framing errors");
  VAR_9->frame_errors = 0;
 }
}
