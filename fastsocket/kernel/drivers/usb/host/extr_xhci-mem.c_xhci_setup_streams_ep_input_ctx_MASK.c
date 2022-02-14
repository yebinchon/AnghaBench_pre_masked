
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_stream_info {int ctx_array_dma; int num_stream_ctxs; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int deq; int ep_info; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xhci_hcd*,char*,int) ;

void FUNC_5(struct xhci_hcd *VAR_2,
  struct xhci_ep_ctx *VAR_3,
  struct xhci_stream_info *VAR_4)
{
 u32 VAR_5;




 VAR_5 = FUNC_3(VAR_4->num_stream_ctxs) - 2;
 FUNC_4(VAR_2, "Setting number of stream ctx array entries to %u\n",
   1 << (VAR_5 + 1));
 VAR_3->ep_info &= FUNC_1(~VAR_1);
 VAR_3->ep_info |= FUNC_1(FUNC_0(VAR_5)
           | VAR_0);
 VAR_3->deq = FUNC_2(VAR_4->ctx_array_dma);
}
