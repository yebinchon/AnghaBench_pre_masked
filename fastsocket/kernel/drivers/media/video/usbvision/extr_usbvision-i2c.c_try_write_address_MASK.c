
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct usb_usbvision*,unsigned char,char*,int) ;

__attribute__((used)) static inline int FUNC_4(struct i2c_adapter *VAR_1,
        unsigned char VAR_2, int VAR_3)
{
 struct usb_usbvision *VAR_4;
 int VAR_5, VAR_6 = -1;
 char VAR_7[4];

 VAR_4 = (struct usb_usbvision *)FUNC_1(VAR_1);
 VAR_7[0] = 0x00;
 for (VAR_5 = 0; VAR_5 <= VAR_3; VAR_5++) {
  VAR_6 = (FUNC_3(VAR_4, VAR_2, VAR_7, 1));
  if (VAR_6 == 1)
   break;
  FUNC_2(5);
  if (VAR_5 == VAR_3)
   break;
  FUNC_2(10);
 }
 if (VAR_5) {
  FUNC_0(VAR_0, "Needed %d retries for address %#2x", VAR_5, VAR_2);
  FUNC_0(VAR_0, "Maybe there's no device at this address");
 }
 return VAR_6;
}
