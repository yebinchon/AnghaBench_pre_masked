
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct pci_dev {scalar_t__ device; scalar_t__ vendor; int devfn; int bus; } ;
struct ohci_hcd {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 struct ohci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct ohci_hcd*,char*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (int ,int ) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct usb_hcd *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_6(VAR_3->self.controller);
 struct pci_dev *VAR_5;

 VAR_5 = FUNC_5 (VAR_4->bus, FUNC_0 (FUNC_1 (VAR_4->devfn), 1));
 if (VAR_5 && VAR_5->device == VAR_1
     && VAR_5->vendor == VAR_2) {
  struct ohci_hcd *VAR_6 = FUNC_2 (VAR_3);

  VAR_6->flags |= VAR_0;
  FUNC_3 (VAR_6, "Using NSC SuperIO setup\n");
 }
 FUNC_4(VAR_5);

 return 0;
}
