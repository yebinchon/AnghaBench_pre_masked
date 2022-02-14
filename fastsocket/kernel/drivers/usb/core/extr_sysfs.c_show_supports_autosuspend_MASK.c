
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int driver; } ;
struct usb_interface {TYPE_1__ dev; } ;
struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ supports_autosuspend; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_2__* FUNC_2 (int ) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_interface *VAR_3;
 struct usb_device *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_0);
 VAR_4 = FUNC_0(VAR_3);

 FUNC_4(VAR_4);

 if (!VAR_3->dev.driver ||
   FUNC_2(VAR_3->dev.driver)->supports_autosuspend)
  VAR_5 = FUNC_1(VAR_2, "%u\n", 1);
 else
  VAR_5 = FUNC_1(VAR_2, "%u\n", 0);
 FUNC_5(VAR_4);

 return VAR_5;
}
