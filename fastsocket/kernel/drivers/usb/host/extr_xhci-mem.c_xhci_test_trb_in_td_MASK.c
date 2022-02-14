
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_segment {int dummy; } ;
struct xhci_hcd {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 struct xhci_segment* FUNC_0 (struct xhci_segment*,union xhci_trb*,union xhci_trb*,scalar_t__) ;
 unsigned long long FUNC_1 (struct xhci_segment*,union xhci_trb*) ;
 int FUNC_2 (struct xhci_hcd*,char*,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct xhci_hcd *VAR_0,
  struct xhci_segment *VAR_1,
  union xhci_trb *VAR_2,
  union xhci_trb *VAR_3,
  dma_addr_t VAR_4,
  struct xhci_segment *VAR_5,
  char *VAR_6, int VAR_7)
{
 unsigned long long VAR_8;
 unsigned long long VAR_9;
 struct xhci_segment *VAR_10;

 VAR_8 = FUNC_1(VAR_1, VAR_2);
 VAR_9 = FUNC_1(VAR_1, VAR_3);

 VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_10 != VAR_5) {
  FUNC_2(VAR_0, "WARN: %s TRB math test %d failed!\n",
    VAR_6, VAR_7);
  FUNC_2(VAR_0, "Tested TRB math w/ seg %p and "
    "input DMA 0x%llx\n",
    VAR_1,
    (unsigned long long) VAR_4);
  FUNC_2(VAR_0, "starting TRB %p (0x%llx DMA), "
    "ending TRB %p (0x%llx DMA)\n",
    VAR_2, VAR_8,
    VAR_3, VAR_9);
  FUNC_2(VAR_0, "Expected seg %p, got seg %p\n",
    VAR_5, VAR_10);
  return -1;
 }
 return 0;
}
