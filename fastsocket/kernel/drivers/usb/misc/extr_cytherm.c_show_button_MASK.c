
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_cytherm {TYPE_1__* udev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*) ;
 struct usb_interface* FUNC_5 (struct device*) ;
 struct usb_cytherm* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,unsigned char*,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{

 struct usb_interface *VAR_6 = FUNC_5(VAR_3);
 struct usb_cytherm *VAR_7 = FUNC_6(VAR_6);

 int VAR_8;
 unsigned char *VAR_9;

 VAR_9 = FUNC_3(8, VAR_1);
 if (!VAR_9) {
  FUNC_1(&VAR_7->udev->dev, "out of memory\n");
  return 0;
 }


 VAR_8 = FUNC_7(VAR_7->udev, VAR_2, VAR_0, 0, VAR_9, 8);
 if (VAR_8)
  FUNC_0(&VAR_7->udev->dev, "retval = %d\n", VAR_8);

 VAR_8 = VAR_9[1];

 FUNC_2(VAR_9);

 if (VAR_8)
  return FUNC_4(VAR_5, "1");
 else
  return FUNC_4(VAR_5, "0");
}
