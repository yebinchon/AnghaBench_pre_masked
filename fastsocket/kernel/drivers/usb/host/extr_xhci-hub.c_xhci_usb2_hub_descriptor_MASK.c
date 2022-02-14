
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct xhci_hcd {int num_usb2_ports; int * usb2_ports; } ;
struct TYPE_3__ {int* DeviceRemovable; int* PortPwrCtrlMask; } ;
struct TYPE_4__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {TYPE_2__ u; scalar_t__ bDescLength; int bDescriptorType; } ;
struct usb_hcd {int dummy; } ;
typedef int port_removable ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct xhci_hcd*,struct usb_hub_descriptor*,int) ;
 int FUNC_2 (struct xhci_hcd*,int ) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_4, struct xhci_hcd *VAR_5,
  struct usb_hub_descriptor *VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 __u8 VAR_9[(VAR_3 + 1 + 7) / 8];
 u32 VAR_10;
 unsigned int VAR_11;

 VAR_7 = VAR_5->num_usb2_ports;

 FUNC_1(VAR_5, VAR_6, VAR_7);
 VAR_6->bDescriptorType = VAR_1;
 VAR_8 = 1 + (VAR_7 / 8);
 VAR_6->bDescLength = VAR_2 + 2 * VAR_8;




 FUNC_0(VAR_9, 0, sizeof(VAR_9));
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_10 = FUNC_2(VAR_5, VAR_5->usb2_ports[VAR_11]);



  if (VAR_10 & VAR_0)



   VAR_9[(VAR_11 + 1) / 8] |= 1 << ((VAR_11 + 1) % 8);
 }
 FUNC_0(VAR_6->u.hs.DeviceRemovable, 0xff,
   sizeof(VAR_6->u.hs.DeviceRemovable));
 FUNC_0(VAR_6->u.hs.PortPwrCtrlMask, 0xff,
   sizeof(VAR_6->u.hs.PortPwrCtrlMask));

 for (VAR_11 = 0; VAR_11 < (VAR_7 + 1 + 7) / 8; VAR_11++)
  FUNC_0(&VAR_6->u.hs.DeviceRemovable[VAR_11], VAR_9[VAR_11],
    sizeof(__u8));
}
