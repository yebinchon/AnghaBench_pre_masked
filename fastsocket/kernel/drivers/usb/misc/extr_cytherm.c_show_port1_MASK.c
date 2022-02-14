
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*,int) ;
 struct usb_interface* FUNC_5 (struct device*) ;
 struct usb_cytherm* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (TYPE_1__*,int ,int,int ,unsigned char*,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_5(VAR_2);
 struct usb_cytherm *VAR_6 = FUNC_6(VAR_5);

 int VAR_7;
 unsigned char *VAR_8;

 VAR_8 = FUNC_3(8, VAR_0);
 if (!VAR_8) {
  FUNC_1(&VAR_6->udev->dev, "out of memory\n");
  return 0;
 }

 VAR_7 = FUNC_7(VAR_6->udev, VAR_1, 1, 0, VAR_8, 8);
 if (VAR_7)
  FUNC_0(&VAR_6->udev->dev, "retval = %d\n", VAR_7);

 VAR_7 = VAR_8[1];

 FUNC_2(VAR_8);

 return FUNC_4(VAR_4, "%d", VAR_7);
}
