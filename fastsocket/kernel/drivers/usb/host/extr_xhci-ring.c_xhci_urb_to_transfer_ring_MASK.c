
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_ring {int dummy; } ;
struct xhci_hcd {int dummy; } ;
struct urb {int stream_id; TYPE_2__* ep; TYPE_1__* dev; } ;
struct TYPE_4__ {int desc; } ;
struct TYPE_3__ {int slot_id; } ;


 int FUNC_0 (int *) ;
 struct xhci_ring* FUNC_1 (struct xhci_hcd*,int ,int ,int ) ;

__attribute__((used)) static struct xhci_ring *FUNC_2(struct xhci_hcd *VAR_0,
  struct urb *VAR_1)
{
 return FUNC_1(VAR_0, VAR_1->dev->slot_id,
  FUNC_0(&VAR_1->ep->desc), VAR_1->stream_id);
}
