
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* DeviceRemovable; } ;
struct TYPE_3__ {TYPE_2__ hs; } ;
struct usb_hub_descriptor {int bDescriptorType; int bDescLength; int bNbrPorts; TYPE_1__ u; int wHubCharacteristics; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_hub_descriptor*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2 (struct usb_hub_descriptor *VAR_0)
{
 FUNC_1 (VAR_0, 0, sizeof *VAR_0);
 VAR_0->bDescriptorType = 0x29;
 VAR_0->bDescLength = 9;
 VAR_0->wHubCharacteristics = FUNC_0(0x0001);
 VAR_0->bNbrPorts = 1;
 VAR_0->u.hs.DeviceRemovable[0] = 0xff;
 VAR_0->u.hs.DeviceRemovable[1] = 0xff;
}
