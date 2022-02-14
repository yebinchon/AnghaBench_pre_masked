
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_sevsegdev {int shadow_power; int mode_msb; TYPE_1__* udev; scalar_t__ mode_lsb; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int,int,scalar_t__,int *,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct usb_sevsegdev *VAR_0)
{
 int VAR_1;

 if(VAR_0->shadow_power != 1)
  return;

 VAR_1 = FUNC_1(VAR_0->udev,
   FUNC_2(VAR_0->udev, 0),
   0x12,
   0x48,
   (82 * 0x100) + 10,
   (VAR_0->mode_msb * 0x100) + VAR_0->mode_lsb,
   ((void*)0),
   0,
   2000);

 if (VAR_1 < 0)
  FUNC_0(&VAR_0->udev->dev, "mode retval = %d\n", VAR_1);
}
