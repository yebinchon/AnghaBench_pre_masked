
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wusbhc {int ports_max; } ;
struct TYPE_3__ {int * DeviceRemovable; } ;
struct TYPE_4__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bDescLength; int bDescriptorType; int bNbrPorts; TYPE_2__ u; scalar_t__ bHubContrCurrent; scalar_t__ bPwrOn2PwrGood; int wHubCharacteristics; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct wusbhc *VAR_1, u16 VAR_2,
       u16 VAR_3,
       struct usb_hub_descriptor *VAR_4,
       u16 VAR_5)
{
 u16 VAR_6 = 1 + (VAR_1->ports_max / 8);
 u8 VAR_7 = 7 + 2 * VAR_6;

 if (VAR_5 < VAR_7)
  return -VAR_0;
 VAR_4->bDescLength = 7 + 2 * VAR_6;
 VAR_4->bDescriptorType = 0x29;
 VAR_4->bNbrPorts = VAR_1->ports_max;
 VAR_4->wHubCharacteristics = FUNC_0(
  0x00
  | 0x00
  | 0x10
  | 0x00
  | 0x00);
 VAR_4->bPwrOn2PwrGood = 0;
 VAR_4->bHubContrCurrent = 0;

 FUNC_1(&VAR_4->u.hs.DeviceRemovable[0], 0, VAR_6);
 FUNC_1(&VAR_4->u.hs.DeviceRemovable[VAR_6], 0xff, VAR_6);
 return 0;
}
