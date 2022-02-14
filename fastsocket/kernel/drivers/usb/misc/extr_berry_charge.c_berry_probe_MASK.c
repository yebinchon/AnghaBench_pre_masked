
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int idProduct; } ;
struct usb_device {int bus_mA; TYPE_3__ descriptor; TYPE_2__* actconfig; int dev; } ;
struct TYPE_4__ {int bMaxPower; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_device*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_3,
         const struct usb_device_id *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->bus_mA < 500) {
  FUNC_0(&VAR_5->dev, "Not enough power to charge available\n");
  return -VAR_1;
 }

 FUNC_0(&VAR_5->dev, "Power is set to %dmA\n",
     VAR_5->actconfig->desc.bMaxPower * 2);



 if ((VAR_5->actconfig->desc.bMaxPower * 2) == 500) {
  FUNC_0(&VAR_5->dev, "device is already charging, power is "
      "set to %dmA\n", VAR_5->actconfig->desc.bMaxPower * 2);
  return -VAR_1;
 }


 FUNC_3(VAR_5);

 if ((FUNC_2(VAR_5->descriptor.idProduct) == VAR_0) &&
     (VAR_2))
  FUNC_4(VAR_5);



 return -VAR_1;
}
