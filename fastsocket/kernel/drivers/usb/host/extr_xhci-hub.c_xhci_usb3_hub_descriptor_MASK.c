
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct xhci_hcd {int num_usb3_ports; int * usb3_ports; } ;
struct TYPE_3__ {int DeviceRemovable; scalar_t__ wHubDelay; scalar_t__ bHubHdrDecLat; } ;
struct TYPE_4__ {TYPE_1__ ss; } ;
struct usb_hub_descriptor {TYPE_2__ u; int bDescLength; int bDescriptorType; } ;
struct usb_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xhci_hcd*,struct usb_hub_descriptor*,int) ;
 int FUNC_2 (struct xhci_hcd*,int ) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_3, struct xhci_hcd *VAR_4,
  struct usb_hub_descriptor *VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 u32 VAR_8;
 unsigned int VAR_9;

 VAR_6 = VAR_4->num_usb3_ports;
 FUNC_1(VAR_4, VAR_5, VAR_6);
 VAR_5->bDescriptorType = VAR_1;
 VAR_5->bDescLength = VAR_2;




 VAR_5->u.ss.bHubHdrDecLat = 0;
 VAR_5->u.ss.wHubDelay = 0;

 VAR_7 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_2(VAR_4, VAR_4->usb3_ports[VAR_9]);
  if (VAR_8 & VAR_0)
   VAR_7 |= 1 << (VAR_9 + 1);
 }

 VAR_5->u.ss.DeviceRemovable = FUNC_0(VAR_7);
}
