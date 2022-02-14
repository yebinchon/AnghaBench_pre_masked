
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* field; } ;
union xhci_trb {TYPE_1__ generic; } ;
typedef int u32 ;
struct xhci_segment {int dummy; } ;
struct xhci_hcd {TYPE_2__* cmd_ring; } ;
struct xhci_cd {scalar_t__ command; union xhci_trb* cmd_trb; } ;
struct TYPE_6__ {union xhci_trb* enqueue; union xhci_trb* dequeue; int deq_seg; int first_seg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 struct xhci_segment* FUNC_3 (int ,union xhci_trb*,int*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct xhci_hcd*,TYPE_2__*,struct xhci_segment**,union xhci_trb**) ;
 int FUNC_6 (struct xhci_hcd*,scalar_t__,int ) ;
 int FUNC_7 (struct xhci_hcd*,TYPE_2__*) ;
 int FUNC_8 (struct xhci_hcd*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,union xhci_trb*) ;
 int FUNC_10 (struct xhci_hcd*,char*,union xhci_trb*,unsigned long long) ;

__attribute__((used)) static void FUNC_11(struct xhci_hcd *VAR_3, struct xhci_cd *VAR_4)
{
 struct xhci_segment *VAR_5;
 union xhci_trb *VAR_6;
 u32 VAR_7;

 if (VAR_3->cmd_ring->dequeue == VAR_3->cmd_ring->enqueue)
  return;


 VAR_5 = FUNC_3(VAR_3->cmd_ring->first_seg,
   VAR_3->cmd_ring->dequeue, &VAR_7);

 if (!VAR_5) {
  FUNC_10(VAR_3, "Command ring mismatch, dequeue = %p %llx (dma)\n",
    VAR_3->cmd_ring->dequeue,
    (unsigned long long)
    FUNC_9(VAR_3->cmd_ring->deq_seg,
     VAR_3->cmd_ring->dequeue));
  FUNC_8(VAR_3, VAR_3->cmd_ring);
  FUNC_7(VAR_3, VAR_3->cmd_ring);
  return;
 }


 for (VAR_6 = VAR_3->cmd_ring->dequeue;
   VAR_6 != VAR_3->cmd_ring->enqueue;
   FUNC_5(VAR_3, VAR_3->cmd_ring, &VAR_5, &VAR_6)) {

  if (FUNC_1(VAR_6->generic.field[3]))
   continue;

  if (VAR_4->cmd_trb == VAR_6) {




   if (VAR_4->command)
    FUNC_6(VAR_3,
     VAR_4->command, VAR_0);


   VAR_7 = FUNC_4(VAR_6->generic.field[3])
    & VAR_2;


   VAR_6->generic.field[0] = 0;
   VAR_6->generic.field[1] = 0;
   VAR_6->generic.field[2] = 0;
   VAR_6->generic.field[3] = FUNC_2(
     FUNC_0(VAR_1) | VAR_7);
   break;
  }
 }
}
