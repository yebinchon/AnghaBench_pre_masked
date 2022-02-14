
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_led {int udev; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_led*) ;
 struct usb_led* FUNC_6 (int,int ) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_interface*,struct usb_led*) ;

__attribute__((used)) static int FUNC_10(struct usb_interface *VAR_5, const struct usb_device_id *VAR_6)
{
 struct usb_device *VAR_7 = FUNC_4(VAR_5);
 struct usb_led *VAR_8 = ((void*)0);
 int VAR_9 = -VAR_0;

 VAR_8 = FUNC_6(sizeof(struct usb_led), VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(&VAR_5->dev, "Out of memory\n");
  goto error_mem;
 }

 VAR_8->udev = FUNC_7(VAR_7);

 FUNC_9 (VAR_5, VAR_8);

 VAR_9 = FUNC_2(&VAR_5->dev, &VAR_2);
 if (VAR_9)
  goto error;
 VAR_9 = FUNC_2(&VAR_5->dev, &VAR_4);
 if (VAR_9)
  goto error;
 VAR_9 = FUNC_2(&VAR_5->dev, &VAR_3);
 if (VAR_9)
  goto error;

 FUNC_1(&VAR_5->dev, "USB LED device now attached\n");
 return 0;

error:
 FUNC_3(&VAR_5->dev, &VAR_2);
 FUNC_3(&VAR_5->dev, &VAR_4);
 FUNC_3(&VAR_5->dev, &VAR_3);
 FUNC_9 (VAR_5, ((void*)0));
 FUNC_8(VAR_8->udev);
 FUNC_5(VAR_8);
error_mem:
 return VAR_9;
}
