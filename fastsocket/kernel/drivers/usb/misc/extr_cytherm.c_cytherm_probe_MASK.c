
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_cytherm {int brightness; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_cytherm*) ;
 struct usb_cytherm* FUNC_6 (int,int ) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_interface*,struct usb_cytherm*) ;

__attribute__((used)) static int FUNC_10(struct usb_interface *VAR_7,
    const struct usb_device_id *VAR_8)
{
 struct usb_device *VAR_9 = FUNC_4(VAR_7);
 struct usb_cytherm *VAR_10 = ((void*)0);
 int VAR_11 = -VAR_0;

 VAR_10 = FUNC_6 (sizeof(struct usb_cytherm), VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_0 (&VAR_7->dev, "Out of memory\n");
  goto error_mem;
 }

 VAR_10->udev = FUNC_7(VAR_9);

 FUNC_9 (VAR_7, VAR_10);

 VAR_10->brightness = 0xFF;

 VAR_11 = FUNC_2(&VAR_7->dev, &VAR_2);
 if (VAR_11)
  goto error;
 VAR_11 = FUNC_2(&VAR_7->dev, &VAR_6);
 if (VAR_11)
  goto error;
 VAR_11 = FUNC_2(&VAR_7->dev, &VAR_3);
 if (VAR_11)
  goto error;
 VAR_11 = FUNC_2(&VAR_7->dev, &VAR_4);
 if (VAR_11)
  goto error;
 VAR_11 = FUNC_2(&VAR_7->dev, &VAR_5);
 if (VAR_11)
  goto error;

 FUNC_1 (&VAR_7->dev,
    "Cypress thermometer device now attached\n");
 return 0;
error:
 FUNC_3(&VAR_7->dev, &VAR_2);
 FUNC_3(&VAR_7->dev, &VAR_6);
 FUNC_3(&VAR_7->dev, &VAR_3);
 FUNC_3(&VAR_7->dev, &VAR_4);
 FUNC_3(&VAR_7->dev, &VAR_5);
 FUNC_9 (VAR_7, ((void*)0));
 FUNC_8(VAR_10->udev);
 FUNC_5(VAR_10);
error_mem:
 return VAR_11;
}
