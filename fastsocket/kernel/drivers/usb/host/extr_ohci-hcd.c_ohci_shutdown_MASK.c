
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct ohci_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int control; int intrdisable; } ;


 int VAR_0 ;
 struct ohci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ohci_hcd*,int *) ;
 int FUNC_2 (struct ohci_hcd*) ;
 int FUNC_3 (struct ohci_hcd*,int ,int *) ;

__attribute__((used)) static void
FUNC_4 (struct usb_hcd *VAR_1)
{
 struct ohci_hcd *VAR_2;

 VAR_2 = FUNC_0 (VAR_1);
 FUNC_3 (VAR_2, VAR_0, &VAR_2->regs->intrdisable);
 FUNC_2 (VAR_2);

 (void) FUNC_1 (VAR_2, &VAR_2->regs->control);
}
