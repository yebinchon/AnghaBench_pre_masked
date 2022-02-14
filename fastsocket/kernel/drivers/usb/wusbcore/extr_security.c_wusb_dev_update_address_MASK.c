
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int dummy; } ;
struct wusb_dev {int addr; struct usb_device* usb_dev; } ;
struct device {int dummy; } ;
struct usb_device {int authenticated; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,int,int ,int *,int ,int) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (struct wusbhc*,struct wusb_dev*,int) ;

int FUNC_6(struct wusbhc *VAR_4, struct wusb_dev *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct usb_device *VAR_7 = VAR_5->usb_dev;
 struct device *VAR_8 = &VAR_7->dev;
 u8 VAR_9 = VAR_5->addr & 0x7F;


 VAR_6 = FUNC_1(VAR_7, FUNC_4(VAR_7, 0),
     VAR_1, 0,
     0, 0, ((void*)0), 0, 1000 );
 if (VAR_6 < 0) {
  FUNC_0(VAR_8, "auth failed: can't set address 0: %d\n",
   VAR_6);
  goto error_addr0;
 }
 VAR_6 = FUNC_5(VAR_4, VAR_5, 0);
 if (VAR_6 < 0)
  goto error_addr0;
 FUNC_3(VAR_7, VAR_3);
 FUNC_2(VAR_7);


 VAR_6 = FUNC_1(VAR_7, FUNC_4(VAR_7, 0),
     VAR_1, 0,
     VAR_9, 0, ((void*)0), 0,
     1000 );
 if (VAR_6 < 0) {
  FUNC_0(VAR_8, "auth failed: can't set address %u: %d\n",
   VAR_9, VAR_6);
  goto error_addr;
 }
 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_9);
 if (VAR_6 < 0)
  goto error_addr;
 FUNC_3(VAR_7, VAR_2);
 FUNC_2(VAR_7);
 VAR_7->authenticated = 1;
error_addr:
error_addr0:
 return VAR_6;
}
