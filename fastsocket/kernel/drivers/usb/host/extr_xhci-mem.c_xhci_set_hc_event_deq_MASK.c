
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct xhci_hcd {TYPE_1__* ir_set; TYPE_2__* event_ring; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int dequeue; int deq_seg; } ;
struct TYPE_3__ {int erst_dequeue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct xhci_hcd*,char*) ;
 int FUNC_2 (struct xhci_hcd*,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct xhci_hcd*,char*) ;
 int FUNC_5 (struct xhci_hcd*,int,int *) ;

__attribute__((used)) static void FUNC_6(struct xhci_hcd *VAR_2)
{
 u64 VAR_3;
 dma_addr_t VAR_4;

 VAR_4 = FUNC_3(VAR_2->event_ring->deq_seg,
   VAR_2->event_ring->dequeue);
 if (VAR_4 == 0 && !FUNC_0())
  FUNC_4(VAR_2, "WARN something wrong with SW event ring "
    "dequeue ptr.\n");

 VAR_3 = FUNC_2(VAR_2, &VAR_2->ir_set->erst_dequeue);
 VAR_3 &= VAR_1;



 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_2, "// Write event ring dequeue pointer, "
   "preserving EHB bit\n");
 FUNC_5(VAR_2, ((u64) VAR_4 & (u64) ~VAR_1) | VAR_3,
   &VAR_2->ir_set->erst_dequeue);
}
