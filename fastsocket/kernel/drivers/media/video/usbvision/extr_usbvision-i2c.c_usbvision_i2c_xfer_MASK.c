
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int dummy; } ;
struct i2c_msg {int flags; int len; int buf; } ;
struct i2c_adapter {int retries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int ,unsigned char*) ;
 int FUNC_3 (struct usb_usbvision*,unsigned char,int ,int) ;
 int FUNC_4 (struct usb_usbvision*,unsigned char,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct i2c_adapter *VAR_3, struct i2c_msg VAR_4[], int VAR_5)
{
 struct i2c_msg *VAR_6;
 struct usb_usbvision *VAR_7;
 int VAR_8, VAR_9;
 unsigned char VAR_10 = 0;

 VAR_7 = (struct usb_usbvision *)FUNC_1(VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_6 = &VAR_4[VAR_8];
  VAR_9 = FUNC_2(VAR_3, VAR_6, VAR_3->retries, &VAR_10);
  if (VAR_9 != 0) {
   FUNC_0(VAR_0, "got NAK from device, message #%d", VAR_8);
   return (VAR_9 < 0) ? VAR_9 : -VAR_1;
  }

  if (VAR_6->flags & VAR_2) {

   VAR_9 = (FUNC_3(VAR_7, VAR_10, VAR_6->buf, VAR_6->len));
   if (VAR_9 < VAR_6->len)
    return (VAR_9 < 0) ? VAR_9 : -VAR_1;
  } else {

   VAR_9 = (FUNC_4(VAR_7, VAR_10, VAR_6->buf, VAR_6->len));
   if (VAR_9 < VAR_6->len)
    return (VAR_9 < 0) ? VAR_9 : -VAR_1;
  }
 }
 return VAR_5;
}
