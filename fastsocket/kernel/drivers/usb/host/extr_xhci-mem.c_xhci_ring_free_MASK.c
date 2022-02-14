
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_ring {scalar_t__ first_seg; } ;
struct xhci_hcd {int dummy; } ;


 int FUNC_0 (struct xhci_ring*) ;
 int FUNC_1 (struct xhci_hcd*,scalar_t__) ;

void FUNC_2(struct xhci_hcd *VAR_0, struct xhci_ring *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->first_seg)
  FUNC_1(VAR_0, VAR_1->first_seg);

 FUNC_0(VAR_1);
}
