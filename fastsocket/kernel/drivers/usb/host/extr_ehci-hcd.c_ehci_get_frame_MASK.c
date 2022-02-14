
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct ehci_hcd {int periodic_size; TYPE_1__* regs; } ;
struct TYPE_2__ {int frame_index; } ;


 int FUNC_0 (struct ehci_hcd*,int *) ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_2 (struct usb_hcd *VAR_0)
{
 struct ehci_hcd *VAR_1 = FUNC_1 (VAR_0);
 return (FUNC_0(VAR_1, &VAR_1->regs->frame_index) >> 3) %
  VAR_1->periodic_size;
}
