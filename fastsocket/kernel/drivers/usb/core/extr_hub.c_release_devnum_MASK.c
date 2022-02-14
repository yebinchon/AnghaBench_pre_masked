
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int devnum; TYPE_2__* bus; } ;
struct TYPE_3__ {int devicemap; } ;
struct TYPE_4__ {TYPE_1__ devmap; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct usb_device *VAR_0)
{
 if (VAR_0->devnum > 0) {
  FUNC_0(VAR_0->devnum, VAR_0->bus->devmap.devicemap);
  VAR_0->devnum = -1;
 }
}
