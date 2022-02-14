
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int ifcdev; struct usb_device* usbdev; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int,int,unsigned char*,int,int) ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

int FUNC_4(struct usb_line6 *VAR_7, int VAR_8, void *VAR_9,
       size_t VAR_10)
{
 struct usb_device *VAR_11 = VAR_7->usbdev;
 int VAR_12;
 unsigned char VAR_13;

 VAR_12 = FUNC_1(VAR_11, FUNC_3(VAR_11, 0), 0x67,
         VAR_6 | VAR_5 | VAR_4,
         0x0022, VAR_8, VAR_9, VAR_10,
         VAR_2 * VAR_1);

 if (VAR_12 < 0) {
  FUNC_0(VAR_7->ifcdev,
   "write request failed (error %d)\n", VAR_12);
  return VAR_12;
 }

 do {
  VAR_12 = FUNC_1(VAR_11, FUNC_2(VAR_11, 0),
          0x67,
          VAR_6 | VAR_5 |
          VAR_3,
          0x0012, 0x0000,
          &VAR_13, 1, VAR_2 * VAR_1);

  if (VAR_12 < 0) {
   FUNC_0(VAR_7->ifcdev,
    "receiving status failed (error %d)\n", VAR_12);
   return VAR_12;
  }
 }
 while (VAR_13 == 0xff)
  ;

 if (VAR_13 != 0) {
  FUNC_0(VAR_7->ifcdev, "write failed (error %d)\n", VAR_12);
  return -VAR_0;
 }

 return 0;
}
