
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {scalar_t__ power; int initialized; scalar_t__ user; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct usb_usbvision*) ;
 int FUNC_2 (struct usb_usbvision*) ;
 int FUNC_3 (struct usb_usbvision*) ;
 int FUNC_4 (struct usb_usbvision*) ;
 int FUNC_5 (struct usb_usbvision*) ;
 int FUNC_6 (struct usb_usbvision*) ;
 int FUNC_7 (struct usb_usbvision*) ;
 int FUNC_8 (struct usb_usbvision*,int ) ;
 int FUNC_9 (struct usb_usbvision*) ;
 int FUNC_10 (struct usb_usbvision*) ;
 int FUNC_11 (struct usb_usbvision*) ;
 int FUNC_12 (struct usb_usbvision*) ;
 int FUNC_13 (struct usb_usbvision*) ;
 int FUNC_14 (struct usb_usbvision*,scalar_t__) ;
 struct usb_usbvision* FUNC_15 (struct file*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_5)
{
 struct usb_usbvision *VAR_6 = FUNC_15(VAR_5);
 int VAR_7 = 0;

 FUNC_0(VAR_0, "open");

 FUNC_11(VAR_6);

 if (VAR_6->user)
  VAR_7 = -VAR_1;
 else {

  VAR_7 = FUNC_12(VAR_6);
  if (VAR_3 == VAR_2) {


   VAR_7 = FUNC_2(VAR_6);
  }
  if (VAR_7) {

   FUNC_13(VAR_6);
   FUNC_3(VAR_6);
  }
 }


 if (!VAR_7) {
  if (VAR_6->power == 0) {
   FUNC_10(VAR_6);
   FUNC_5(VAR_6);
  }


  if (!VAR_6->initialized) {
   int VAR_8 = 0;
   VAR_8 = FUNC_14(VAR_6, VAR_3);
   if (VAR_8)
    VAR_6->initialized = 1;
   else
    VAR_7 = -VAR_1;
  }

  if (!VAR_7) {
   FUNC_1(VAR_6);
   VAR_7 = FUNC_7(VAR_6);

   FUNC_8(VAR_6, 0);
   VAR_6->user++;
  } else {
   if (VAR_4) {
    FUNC_6(VAR_6);
    FUNC_9(VAR_6);
    VAR_6->initialized = 0;
   }
  }
 }


 FUNC_4(VAR_6);

 FUNC_0(VAR_0, "success");
 return VAR_7;
}
