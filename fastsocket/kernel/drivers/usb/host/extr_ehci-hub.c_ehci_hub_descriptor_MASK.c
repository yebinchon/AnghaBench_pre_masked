
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int * DeviceRemovable; } ;
struct TYPE_4__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bDescriptorType; int bPwrOn2PwrGood; int bNbrPorts; int bDescLength; int wHubCharacteristics; TYPE_2__ u; scalar_t__ bHubContrCurrent; } ;
struct ehci_hcd {int hcs_params; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void
FUNC_5 (
 struct ehci_hcd *VAR_0,
 struct usb_hub_descriptor *VAR_1
) {
 int VAR_2 = FUNC_1 (VAR_0->hcs_params);
 u16 VAR_3;

 VAR_1->bDescriptorType = 0x29;
 VAR_1->bPwrOn2PwrGood = 10;
 VAR_1->bHubContrCurrent = 0;

 VAR_1->bNbrPorts = VAR_2;
 VAR_3 = 1 + (VAR_2 / 8);
 VAR_1->bDescLength = 7 + 2 * VAR_3;


 FUNC_4(&VAR_1->u.hs.DeviceRemovable[0], 0, VAR_3);
 FUNC_4(&VAR_1->u.hs.DeviceRemovable[VAR_3], 0xff, VAR_3);

 VAR_3 = 0x0008;
 if (FUNC_2 (VAR_0->hcs_params))
  VAR_3 |= 0x0001;
 else
  VAR_3 |= 0x0002;





 VAR_1->wHubCharacteristics = FUNC_3(VAR_3);
}
