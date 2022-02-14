
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_segment {scalar_t__ dma; union xhci_trb* trbs; struct xhci_segment* next; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xhci_segment*,union xhci_trb*) ;

struct xhci_segment *FUNC_1(struct xhci_segment *VAR_1,
  union xhci_trb *VAR_2,
  union xhci_trb *VAR_3,
  dma_addr_t VAR_4)
{
 dma_addr_t VAR_5;
 dma_addr_t VAR_6;
 dma_addr_t VAR_7;
 struct xhci_segment *VAR_8;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 VAR_8 = VAR_1;

 do {
  if (VAR_5 == 0)
   return ((void*)0);

  VAR_6 = FUNC_0(VAR_8,
    &VAR_8->trbs[VAR_0 - 1]);

  VAR_7 = FUNC_0(VAR_8, VAR_3);

  if (VAR_7 > 0) {

   if (VAR_5 <= VAR_7) {
    if (VAR_4 >= VAR_5 && VAR_4 <= VAR_7)
     return VAR_8;
   } else {



    if ((VAR_4 >= VAR_5 &&
       VAR_4 <= VAR_6) ||
      (VAR_4 >= VAR_8->dma &&
       VAR_4 <= VAR_7))
     return VAR_8;
   }
   return ((void*)0);
  } else {

   if (VAR_4 >= VAR_5 && VAR_4 <= VAR_6)
    return VAR_8;
  }
  VAR_8 = VAR_8->next;
  VAR_5 = FUNC_0(VAR_8, &VAR_8->trbs[0]);
 } while (VAR_8 != VAR_1);

 return ((void*)0);
}
