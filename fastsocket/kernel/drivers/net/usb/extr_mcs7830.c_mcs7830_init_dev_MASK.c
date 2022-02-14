
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct usbnet*) ;
 int FUNC_3 (struct usbnet*) ;
 int FUNC_4 (struct usbnet*,int ) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_1)
{
 int VAR_2;
 int VAR_3;


 VAR_2 = -VAR_0;
 for (VAR_3 = 0; VAR_3 < 5 && VAR_2; VAR_3++)
  VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_1(&VAR_1->udev->dev, "Cannot read MAC address\n");
  goto out;
 }


 VAR_2 = FUNC_4(VAR_1, 0);
 if (VAR_2) {
  FUNC_0(&VAR_1->udev->dev, "Cannot set autoneg\n");
  goto out;
 }

 FUNC_3(VAR_1);
 VAR_2 = 0;
out:
 return VAR_2;
}
