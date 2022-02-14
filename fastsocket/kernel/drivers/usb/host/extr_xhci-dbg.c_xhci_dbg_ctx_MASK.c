
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xhci_input_control_ctx {int * rsvd2; int add_flags; int drop_flags; } ;
struct xhci_hcd {int hcc_params; } ;
struct xhci_container_ctx {scalar_t__ type; scalar_t__ dma; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xhci_hcd*,int *,scalar_t__) ;
 int FUNC_2 (struct xhci_hcd*,char*,int *,unsigned long long,int ,...) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_container_ctx*,unsigned int) ;
 int FUNC_4 (struct xhci_hcd*,struct xhci_container_ctx*) ;
 struct xhci_input_control_ctx* FUNC_5 (struct xhci_hcd*,struct xhci_container_ctx*) ;

void FUNC_6(struct xhci_hcd *VAR_1,
    struct xhci_container_ctx *VAR_2,
    unsigned int VAR_3)
{
 int VAR_4;

 int VAR_5 = 32 / 8;
 dma_addr_t VAR_6 = VAR_2->dma;
 int VAR_7 = FUNC_0(VAR_1->hcc_params);

 if (VAR_2->type == VAR_0) {
  struct xhci_input_control_ctx *VAR_8 =
   FUNC_5(VAR_1, VAR_2);
  FUNC_2(VAR_1, "@%p (virt) @%08llx (dma) %#08x - drop flags\n",
    &VAR_8->drop_flags, (unsigned long long)VAR_6,
    VAR_8->drop_flags);
  VAR_6 += VAR_5;
  FUNC_2(VAR_1, "@%p (virt) @%08llx (dma) %#08x - add flags\n",
    &VAR_8->add_flags, (unsigned long long)VAR_6,
    VAR_8->add_flags);
  VAR_6 += VAR_5;
  for (VAR_4 = 0; VAR_4 < 6; ++VAR_4) {
   FUNC_2(VAR_1, "@%p (virt) @%08llx (dma) %#08x - rsvd2[%d]\n",
     &VAR_8->rsvd2[VAR_4], (unsigned long long)VAR_6,
     VAR_8->rsvd2[VAR_4], VAR_4);
   VAR_6 += VAR_5;
  }

  if (VAR_7)
   FUNC_1(VAR_1, (u64 *)VAR_8, VAR_6);
 }

 FUNC_4(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_2, VAR_3);
}
