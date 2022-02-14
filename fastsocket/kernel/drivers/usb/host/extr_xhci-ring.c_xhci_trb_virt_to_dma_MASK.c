
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_segment {scalar_t__ dma; union xhci_trb* trbs; } ;
typedef scalar_t__ dma_addr_t ;


 unsigned long VAR_0 ;

dma_addr_t FUNC_0(struct xhci_segment *VAR_1,
  union xhci_trb *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_1 || !VAR_2 || VAR_2 < VAR_1->trbs)
  return 0;

 VAR_3 = VAR_2 - VAR_1->trbs;
 if (VAR_3 > VAR_0)
  return 0;
 return VAR_1->dma + (VAR_3 * sizeof(*VAR_2));
}
