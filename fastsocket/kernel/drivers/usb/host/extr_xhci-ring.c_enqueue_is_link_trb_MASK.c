
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_ring {TYPE_1__* enqueue; } ;
struct xhci_link_trb {int control; } ;
struct TYPE_2__ {struct xhci_link_trb link; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct xhci_ring *VAR_0)
{
 struct xhci_link_trb *VAR_1 = &VAR_0->enqueue->link;
 return FUNC_0(VAR_1->control);
}
