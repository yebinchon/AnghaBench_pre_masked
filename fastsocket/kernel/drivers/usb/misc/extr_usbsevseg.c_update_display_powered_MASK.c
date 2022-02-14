
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_sevsegdev {int intf; scalar_t__ powered; scalar_t__ shadow_power; TYPE_1__* udev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int,int,int,int *,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(struct usb_sevsegdev *VAR_0)
{
 int VAR_1;

 if (!VAR_0->shadow_power && VAR_0->powered) {
  VAR_1 = FUNC_1(VAR_0->intf);
  if (VAR_1 < 0)
   return;
 }

 VAR_1 = FUNC_3(VAR_0->udev,
   FUNC_4(VAR_0->udev, 0),
   0x12,
   0x48,
   (80 * 0x100) + 10,
   (0x00 * 0x100) + (VAR_0->powered ? 1 : 0),
   ((void*)0),
   0,
   2000);
 if (VAR_1 < 0)
  FUNC_0(&VAR_0->udev->dev, "power retval = %d\n", VAR_1);

 if (VAR_0->shadow_power && !VAR_0->powered)
  FUNC_2(VAR_0->intf);
}
