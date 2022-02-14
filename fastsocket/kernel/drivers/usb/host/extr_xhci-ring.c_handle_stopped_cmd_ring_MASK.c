
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {TYPE_1__* cmd_ring; int cmd_ring_state; } ;
struct TYPE_2__ {scalar_t__ dequeue; scalar_t__ enqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xhci_hcd*) ;
 int FUNC_1 (struct xhci_hcd*) ;
 int FUNC_2 (struct xhci_hcd*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct xhci_hcd *VAR_4,
  int VAR_5)
{
 int VAR_6 = 0;




 VAR_6 = FUNC_2(VAR_4,
   VAR_4->cmd_ring->dequeue);

 if (VAR_5 == VAR_2)
  VAR_4->cmd_ring_state = VAR_1;
 else if (VAR_5 == VAR_3) {



  FUNC_0(VAR_4);

  VAR_4->cmd_ring_state = VAR_0;




  if (VAR_4->cmd_ring->dequeue != VAR_4->cmd_ring->enqueue)
   FUNC_1(VAR_4);
 }
 return VAR_6;
}
