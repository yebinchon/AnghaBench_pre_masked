
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int* DeviceRemovable; } ;
struct TYPE_5__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bDescriptorType; int bPwrOn2PwrGood; int bNbrPorts; int bDescLength; TYPE_2__ u; int wHubCharacteristics; scalar_t__ bHubContrCurrent; } ;
struct u132 {int num_ports; } ;
struct TYPE_6__ {int b; int a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_2 (struct u132*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct u132 *VAR_7,
 struct usb_hub_descriptor *VAR_8)
{
 int VAR_9;
 u16 VAR_10;
 u32 VAR_11 = -1;
 u32 VAR_12 = -1;
 VAR_9 = FUNC_2(VAR_7, VAR_6.a, &VAR_11);
 if (VAR_9)
  return VAR_9;
 VAR_8->bDescriptorType = 0x29;
 VAR_8->bPwrOn2PwrGood = (VAR_11 & VAR_3) >> 24;
 VAR_8->bHubContrCurrent = 0;
 VAR_8->bNbrPorts = VAR_7->num_ports;
 VAR_10 = 1 + (VAR_7->num_ports / 8);
 VAR_8->bDescLength = 7 + 2 * VAR_10;
 VAR_10 = 0;
 if (VAR_11 & VAR_1)
  VAR_10 |= 0x0002;
 if (VAR_11 & VAR_4)
  VAR_10 |= 0x0001;
 if (VAR_11 & VAR_0)
  VAR_10 |= 0x0010;
 else if (VAR_11 & VAR_2)
  VAR_10 |= 0x0008;
 VAR_8->wHubCharacteristics = FUNC_0(VAR_10);
 VAR_9 = FUNC_2(VAR_7, VAR_6.b, &VAR_12);
 if (VAR_9)
  return VAR_9;
 FUNC_1(VAR_8->u.hs.DeviceRemovable, 0xff,
   sizeof(VAR_8->u.hs.DeviceRemovable));
 VAR_8->u.hs.DeviceRemovable[0] = VAR_12 & VAR_5;
 if (VAR_7->num_ports > 7) {
  VAR_8->u.hs.DeviceRemovable[1] = (VAR_12 & VAR_5) >> 8;
  VAR_8->u.hs.DeviceRemovable[2] = 0xff;
 } else
  VAR_8->u.hs.DeviceRemovable[1] = 0xff;
 return 0;
}
