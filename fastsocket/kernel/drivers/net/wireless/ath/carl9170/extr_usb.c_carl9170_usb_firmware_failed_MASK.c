
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct usb_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct ar9170 {int fw_load_wait; struct usb_device* udev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct usb_device*) ;

__attribute__((used)) static void FUNC_5(struct ar9170 *VAR_0)
{
 struct device *VAR_1 = VAR_0->udev->dev.parent;
 struct usb_device *VAR_2;







 VAR_2 = VAR_0->udev;

 FUNC_0(&VAR_0->fw_load_wait);


 if (VAR_1)
  FUNC_1(VAR_1);

 FUNC_2(&VAR_2->dev);
 if (VAR_1)
  FUNC_3(VAR_1);

 FUNC_4(VAR_2);
}
