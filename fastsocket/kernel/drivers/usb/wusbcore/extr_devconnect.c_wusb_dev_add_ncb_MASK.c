
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int mutex; } ;
struct wusb_dev {int usb_dev; } ;
struct device {int dummy; } ;
struct usb_device {scalar_t__ wusb; int devnum; int wusb_dev; int portnum; struct device dev; } ;


 int VAR_0 ;
 struct wusb_dev* FUNC_0 (struct wusbhc*,struct usb_device*) ;
 int FUNC_1 (struct wusbhc*,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (struct usb_device*,struct wusb_dev*) ;
 int FUNC_8 (struct wusb_dev*) ;
 int FUNC_9 (struct wusb_dev*) ;
 int FUNC_10 (struct wusb_dev*) ;
 int FUNC_11 (struct wusbhc*,struct usb_device*,struct wusb_dev*) ;
 int FUNC_12 (struct wusb_dev*) ;
 int FUNC_13 (struct wusbhc*,struct usb_device*,struct wusb_dev*) ;
 int FUNC_14 (struct wusb_dev*) ;
 int FUNC_15 (struct wusbhc*,int ) ;
 int FUNC_16 (int ) ;
 struct wusbhc* FUNC_17 (struct usb_device*) ;
 int FUNC_18 (struct wusbhc*) ;

__attribute__((used)) static void FUNC_19(struct usb_device *VAR_1)
{
 int VAR_2 = 0;
 struct wusb_dev *VAR_3;
 struct wusbhc *VAR_4;
 struct device *VAR_5 = &VAR_1->dev;
 u8 VAR_6;

 if (VAR_1->wusb == 0 || VAR_1->devnum == 1)
  return;

 FUNC_6(VAR_1, VAR_0);

 VAR_4 = FUNC_17(VAR_1);
 if (VAR_4 == ((void*)0))
  goto error_nodev;
 FUNC_3(&VAR_4->mutex);
 VAR_3 = FUNC_0(VAR_4, VAR_1);
 VAR_6 = FUNC_16(VAR_1->portnum);
 FUNC_4(&VAR_4->mutex);
 if (VAR_3 == ((void*)0))
  goto error_nodev;
 VAR_3->usb_dev = FUNC_5(VAR_1);
 VAR_1->wusb_dev = FUNC_9(VAR_3);
 VAR_2 = FUNC_11(VAR_4, VAR_1, VAR_3);
 if (VAR_2 < 0) {
  FUNC_2(VAR_5, "Cannot enable security: %d\n", VAR_2);
  goto error_sec_add;
 }

 VAR_2 = FUNC_7(VAR_1, VAR_3);
 if (VAR_2 < 0) {
  FUNC_2(VAR_5, "Cannot get BOS descriptors: %d\n", VAR_2);
  goto error_bos_add;
 }
 VAR_2 = FUNC_13(VAR_4, VAR_1, VAR_3);
 if (VAR_2 < 0)
  goto error_add_sysfs;
out:
 FUNC_10(VAR_3);
 FUNC_18(VAR_4);
error_nodev:
 return;

 FUNC_14(VAR_3);
error_add_sysfs:
 FUNC_8(VAR_3);
error_bos_add:
 FUNC_12(VAR_3);
error_sec_add:
 FUNC_3(&VAR_4->mutex);
 FUNC_1(VAR_4, FUNC_15(VAR_4, VAR_6));
 FUNC_4(&VAR_4->mutex);
 goto out;
}
