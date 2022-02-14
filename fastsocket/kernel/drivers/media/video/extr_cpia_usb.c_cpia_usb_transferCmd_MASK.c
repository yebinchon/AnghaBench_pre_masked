
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct usb_cpia {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (struct usb_device*,int*,int*,int) ;
 int FUNC_2 (struct usb_device*,int*,int*,int) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 struct usb_cpia *VAR_8 = (struct usb_cpia *)VAR_3;
 struct usb_device *VAR_9 = VAR_8->dev;

 if (!VAR_9) {
  FUNC_0("Internal driver error: udev is NULL\n");
  return -VAR_2;
 }

 if (!VAR_4) {
  FUNC_0("Internal driver error: command is NULL\n");
  return -VAR_2;
 }

 VAR_7 = (((int)VAR_4[7])<<8) | VAR_4[6];

 if (VAR_4[0] == VAR_0) {
  u8 VAR_10[8];

  if (!VAR_5) {
   FUNC_0("Internal driver error: data is NULL\n");
   return -VAR_2;
  }

  VAR_6 = FUNC_1(VAR_9, VAR_4, VAR_10, 8);
  if (VAR_6 < 0)
   return VAR_6;

  FUNC_3(VAR_5, VAR_10, VAR_7);
 } else if(VAR_4[0] == VAR_1)
  FUNC_2(VAR_9, VAR_4, VAR_5, VAR_7);
 else {
  FUNC_0("Unexpected first byte of command: %x\n", VAR_4[0]);
  VAR_6 = -VAR_2;
 }

 return 0;
}
