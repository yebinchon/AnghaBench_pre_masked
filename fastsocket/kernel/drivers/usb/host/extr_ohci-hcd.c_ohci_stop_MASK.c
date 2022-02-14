
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {int irq; TYPE_2__ self; } ;
struct ohci_hcd {scalar_t__ hcca_dma; int * hcca; int unlink_watchdog; TYPE_1__* regs; } ;
struct TYPE_3__ {int intrdisable; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int,struct usb_hcd*) ;
 struct ohci_hcd* FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct ohci_hcd*,int) ;
 int FUNC_6 (struct ohci_hcd*) ;
 int FUNC_7 (struct ohci_hcd*) ;
 int FUNC_8 (struct ohci_hcd*,int ,int *) ;
 scalar_t__ FUNC_9 (struct ohci_hcd*) ;
 scalar_t__ FUNC_10 (struct ohci_hcd*) ;
 int FUNC_11 (struct ohci_hcd*) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13 (struct usb_hcd *VAR_1)
{
 struct ohci_hcd *VAR_2 = FUNC_4 (VAR_1);

 FUNC_5 (VAR_2, 1);

 FUNC_2();

 FUNC_7 (VAR_2);
 FUNC_8 (VAR_2, VAR_0, &VAR_2->regs->intrdisable);
 FUNC_3(VAR_1->irq, VAR_1);
 VAR_1->irq = -1;

 if (FUNC_10(VAR_2))
  FUNC_0(&VAR_2->unlink_watchdog);
 if (FUNC_9(VAR_2))
  FUNC_12();

 FUNC_11 (VAR_2);
 FUNC_6 (VAR_2);
 if (VAR_2->hcca) {
  FUNC_1 (VAR_1->self.controller,
    sizeof *VAR_2->hcca,
    VAR_2->hcca, VAR_2->hcca_dma);
  VAR_2->hcca = ((void*)0);
  VAR_2->hcca_dma = 0;
 }
}
