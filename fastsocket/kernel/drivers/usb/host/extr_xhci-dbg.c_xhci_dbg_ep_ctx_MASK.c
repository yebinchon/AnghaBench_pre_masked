
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xhci_hcd {int hcc_params; } ;
struct xhci_ep_ctx {int * reserved; int tx_info; int deq; int ep_info2; int ep_info; } ;
struct xhci_container_ctx {scalar_t__ bytes; scalar_t__ dma; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_hcd*,int *,scalar_t__) ;
 int FUNC_2 (struct xhci_hcd*,char*,int,...) ;
 struct xhci_ep_ctx* FUNC_3 (struct xhci_hcd*,struct xhci_container_ctx*,int) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_0,
       struct xhci_container_ctx *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = 31;

 int VAR_6 = 32 / 8;
 int VAR_7 = FUNC_0(VAR_0->hcc_params);

 if (VAR_2 < 31)
  VAR_5 = VAR_2 + 1;
 for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3) {
  struct xhci_ep_ctx *VAR_8 = FUNC_3(VAR_0, VAR_1, VAR_3);
  dma_addr_t VAR_9 = VAR_1->dma +
   ((unsigned long)VAR_8 - (unsigned long)VAR_1->bytes);

  FUNC_2(VAR_0, "Endpoint %02d Context:\n", VAR_3);
  FUNC_2(VAR_0, "@%p (virt) @%08llx (dma) %#08x - ep_info\n",
    VAR_8->ep_info,
    (unsigned long long)VAR_9, VAR_8->ep_info);
  VAR_9 += VAR_6;
  FUNC_2(VAR_0, "@%p (virt) @%08llx (dma) %#08x - ep_info2\n",
    VAR_8->ep_info2,
    (unsigned long long)VAR_9, VAR_8->ep_info2);
  VAR_9 += VAR_6;
  FUNC_2(VAR_0, "@%p (virt) @%08llx (dma) %#08llx - deq\n",
    VAR_8->deq,
    (unsigned long long)VAR_9, VAR_8->deq);
  VAR_9 += 2*VAR_6;
  FUNC_2(VAR_0, "@%p (virt) @%08llx (dma) %#08x - tx_info\n",
    VAR_8->tx_info,
    (unsigned long long)VAR_9, VAR_8->tx_info);
  VAR_9 += VAR_6;
  for (VAR_4 = 0; VAR_4 < 3; ++VAR_4) {
   FUNC_2(VAR_0, "@%p (virt) @%08llx (dma) %#08x - rsvd[%d]\n",
     VAR_8->reserved[VAR_4],
     (unsigned long long)VAR_9,
     VAR_8->reserved[VAR_4], VAR_4);
   VAR_9 += VAR_6;
  }

  if (VAR_7)
   FUNC_1(VAR_0, (u64 *)VAR_8, VAR_9);
 }
}
