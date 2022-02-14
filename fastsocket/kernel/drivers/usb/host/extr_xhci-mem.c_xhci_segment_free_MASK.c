
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_segment {int * trbs; int dma; } ;
struct xhci_hcd {int segment_pool; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct xhci_segment*) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_0, struct xhci_segment *VAR_1)
{
 if (VAR_1->trbs) {
  FUNC_0(VAR_0->segment_pool, VAR_1->trbs, VAR_1->dma);
  VAR_1->trbs = ((void*)0);
 }
 FUNC_1(VAR_1);
}
