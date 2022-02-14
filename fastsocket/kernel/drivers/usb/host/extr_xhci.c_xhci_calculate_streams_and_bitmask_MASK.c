
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct xhci_hcd {int dummy; } ;
struct TYPE_3__ {int bmAttributes; } ;
struct usb_host_ss_ep_comp {TYPE_1__ desc; } ;
struct TYPE_4__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; struct usb_host_ss_ep_comp* ss_ep_comp; } ;
struct usb_device {int slot_id; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_hcd*,struct usb_device*,struct usb_host_endpoint*,int ) ;
 int FUNC_2 (struct xhci_hcd*,char*,int ,unsigned int) ;
 unsigned int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct xhci_hcd *VAR_1,
  struct usb_device *VAR_2,
  struct usb_host_endpoint **VAR_3, unsigned int VAR_4,
  unsigned int *VAR_5, u32 *VAR_6)
{
 struct usb_host_ss_ep_comp *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_11 = FUNC_1(VAR_1, VAR_2,
    VAR_3[VAR_10], VAR_2->slot_id);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_7 = VAR_3[VAR_10]->ss_ep_comp;
  VAR_8 = FUNC_0(VAR_7->desc.bmAttributes);
  if (VAR_8 < (*VAR_5 - 1)) {
   FUNC_2(VAR_1, "Ep 0x%x only supports %u stream IDs.\n",
     VAR_3[VAR_10]->desc.bEndpointAddress,
     VAR_8);
   *VAR_5 = VAR_8+1;
  }

  VAR_9 = FUNC_3(&VAR_3[VAR_10]->desc);
  if (*VAR_6 & VAR_9)
   return -VAR_0;
  *VAR_6 |= VAR_9;
 }
 return 0;
}
