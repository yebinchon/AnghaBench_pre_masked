
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
typedef size_t u32 ;
struct xhci_hcd {TYPE_2__** devs; } ;
struct usb_device {int portnum; scalar_t__ parent; } ;
struct TYPE_4__ {struct usb_device* udev; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct xhci_hcd*,char*,size_t) ;
 int FUNC_3 (struct xhci_hcd*,char*,size_t) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_0,
  union xhci_trb *VAR_1)
{
 u32 VAR_2;
 struct usb_device *VAR_3;

 VAR_2 = FUNC_0(VAR_1->generic.field[3]);
 if (!VAR_0->devs[VAR_2]) {
  FUNC_3(VAR_0, "Device Notification event for "
    "unused slot %u\n", VAR_2);
  return;
 }

 FUNC_2(VAR_0, "Device Wake Notification event for slot ID %u\n",
   VAR_2);
 VAR_3 = VAR_0->devs[VAR_2]->udev;
 if (VAR_3 && VAR_3->parent)
  FUNC_1(VAR_3->parent, VAR_3->portnum);
}
