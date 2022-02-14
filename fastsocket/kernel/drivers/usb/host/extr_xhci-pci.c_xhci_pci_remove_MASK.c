
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {scalar_t__ shared_hcd; } ;
struct pci_dev {int dummy; } ;


 struct xhci_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_hcd*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct xhci_hcd *VAR_1;

 VAR_1 = FUNC_0(FUNC_2(VAR_0));
 if (VAR_1->shared_hcd) {
  FUNC_5(VAR_1->shared_hcd);
  FUNC_4(VAR_1->shared_hcd);
 }
 FUNC_3(VAR_0);
 FUNC_1(VAR_1);
}
