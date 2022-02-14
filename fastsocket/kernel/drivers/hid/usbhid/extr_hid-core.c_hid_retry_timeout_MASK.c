
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {TYPE_1__* intf; } ;
struct hid_device {struct usbhid_device* driver_data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hid_device*) ;
 scalar_t__ FUNC_2 (struct hid_device*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct hid_device *VAR_1 = (struct hid_device *) VAR_0;
 struct usbhid_device *VAR_2 = VAR_1->driver_data;

 FUNC_0(&VAR_2->intf->dev, "retrying intr urb\n");
 if (FUNC_2(VAR_1))
  FUNC_1(VAR_1);
}
