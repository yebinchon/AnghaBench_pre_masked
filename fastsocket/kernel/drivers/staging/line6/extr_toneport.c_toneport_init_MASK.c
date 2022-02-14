
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {struct usb_device* usbdev; } ;
struct usb_line6_toneport {int firmware_version; int serial_number; struct usb_line6 line6; } ;
struct usb_interface {int dev; } ;
struct TYPE_2__ {scalar_t__ idProduct; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct usb_line6*) ;
 int FUNC_4 (struct usb_line6*,int *) ;
 int FUNC_5 (struct usb_line6*,int,int *,int) ;
 int FUNC_6 (struct usb_line6*,int *) ;
 int FUNC_7 (struct usb_line6*) ;
 int FUNC_8 (struct usb_line6*,int,int*,int) ;
 int FUNC_9 (struct usb_interface*) ;
 int VAR_4 ;
 int FUNC_10 (struct usb_device*,int,int) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct usb_interface *VAR_5,
    struct usb_line6_toneport *VAR_6)
{
 int VAR_7, VAR_8;
 struct usb_line6 *VAR_9 = &VAR_6->line6;
 struct usb_device *VAR_10;

 if ((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
  return -VAR_0;


 VAR_7 = FUNC_3(VAR_9);
 if (VAR_7 < 0) {
  FUNC_9(VAR_5);
  return VAR_7;
 }


 VAR_7 = FUNC_4(VAR_9, &VAR_4);
 if (VAR_7 < 0) {
  FUNC_9(VAR_5);
  return VAR_7;
 }


 VAR_7 = FUNC_7(VAR_9);
 if (VAR_7 < 0) {
  FUNC_9(VAR_5);
  return VAR_7;
 }

 VAR_10 = VAR_9->usbdev;
 FUNC_6(VAR_9, &VAR_6->serial_number);
 FUNC_5(VAR_9, 0x80c2, &VAR_6->firmware_version, 1);


 VAR_8 = (int)FUNC_2();
 FUNC_8(VAR_9, 0x80c6, &VAR_8, 4);







 FUNC_10(VAR_10, 0x0301, 0x0000);

 if (VAR_10->descriptor.idProduct != VAR_1) {
  FUNC_0(FUNC_1(&VAR_5->dev, &VAR_3));
  FUNC_0(FUNC_1(&VAR_5->dev, &VAR_2));
  FUNC_11(&VAR_10->dev);
 }

 return 0;
}
