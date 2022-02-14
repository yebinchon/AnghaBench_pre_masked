
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct usb_device {TYPE_1__ dev; } ;
struct p54u_priv {struct usb_device* udev; struct firmware const* fw; int fw_wait_load; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct p54u_priv*) ;
 int FUNC_6 (struct usb_device*) ;

__attribute__((used)) static void FUNC_7(const struct firmware *VAR_1,
      void *VAR_2)
{
 struct p54u_priv *VAR_3 = VAR_2;
 struct usb_device *VAR_4 = VAR_3->udev;
 int VAR_5;

 FUNC_0(&VAR_3->fw_wait_load);
 if (VAR_1) {
  VAR_3->fw = VAR_1;
  VAR_5 = FUNC_5(VAR_3);
 } else {
  VAR_5 = -VAR_0;
  FUNC_1(&VAR_4->dev, "Firmware not found.\n");
 }

 if (VAR_5) {
  struct device *VAR_6 = VAR_3->udev->dev.parent;

  FUNC_1(&VAR_4->dev, "failed to initialize device (%d)\n", VAR_5);

  if (VAR_6)
   FUNC_2(VAR_6);

  FUNC_3(&VAR_4->dev);




  VAR_3 = ((void*)0);

  if (VAR_6)
   FUNC_4(VAR_6);
 }

 FUNC_6(VAR_4);
}
