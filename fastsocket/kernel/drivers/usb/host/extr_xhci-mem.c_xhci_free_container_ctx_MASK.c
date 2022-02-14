
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int device_pool; } ;
struct xhci_container_ctx {int dma; int bytes; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct xhci_container_ctx*) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_0,
        struct xhci_container_ctx *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_0(VAR_0->device_pool, VAR_1->bytes, VAR_1->dma);
 FUNC_1(VAR_1);
}
