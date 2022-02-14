
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct trancevibrator {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct trancevibrator*) ;
 struct trancevibrator* FUNC_4 (int,int ) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_interface*,struct trancevibrator*) ;

__attribute__((used)) static int FUNC_8(struct usb_interface *VAR_3,
      const struct usb_device_id *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_2(VAR_3);
 struct trancevibrator *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(sizeof(struct trancevibrator), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(&VAR_3->dev, "Out of memory\n");
  VAR_7 = -VAR_0;
  goto error;
 }

 VAR_6->udev = FUNC_5(VAR_5);
 FUNC_7(VAR_3, VAR_6);
 VAR_7 = FUNC_1(&VAR_3->dev, &VAR_2);
 if (VAR_7)
  goto error_create_file;

 return 0;

error_create_file:
 FUNC_6(VAR_5);
 FUNC_7(VAR_3, ((void*)0));
error:
 FUNC_3(VAR_6);
 return VAR_7;
}
