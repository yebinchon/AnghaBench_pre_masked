
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xhci_hcd {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (struct xhci_hcd*,char*,int *,unsigned long long,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xhci_hcd *VAR_0, u64 *VAR_1, dma_addr_t VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
  FUNC_0(VAR_0, "@%p (virt) @%08llx "
    "(dma) %#08llx - rsvd64[%d]\n",
    &VAR_1[4 + VAR_3], (unsigned long long)VAR_2,
    VAR_1[4 + VAR_3], VAR_3);
  VAR_2 += 8;
 }
}
