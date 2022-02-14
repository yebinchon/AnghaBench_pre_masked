
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xhci_virt_ep {int ep_state; TYPE_4__* stream_info; struct xhci_ring* ring; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {TYPE_3__** devs; } ;
struct urb {unsigned int stream_id; TYPE_2__* ep; TYPE_1__* dev; } ;
struct TYPE_8__ {unsigned int num_streams; struct xhci_ring** stream_rings; } ;
struct TYPE_7__ {struct xhci_virt_ep* eps; } ;
struct TYPE_6__ {int desc; } ;
struct TYPE_5__ {unsigned int slot_id; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct xhci_hcd*,char*,unsigned int,unsigned int,...) ;

__attribute__((used)) static struct xhci_ring *FUNC_2(struct xhci_hcd *VAR_1,
  struct urb *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 struct xhci_virt_ep *VAR_6;

 VAR_3 = VAR_2->dev->slot_id;
 VAR_4 = FUNC_0(&VAR_2->ep->desc);
 VAR_5 = VAR_2->stream_id;
 VAR_6 = &VAR_1->devs[VAR_3]->eps[VAR_4];

 if (!(VAR_6->ep_state & VAR_0))
  return VAR_6->ring;

 if (VAR_5 == 0) {
  FUNC_1(VAR_1,
    "WARN: Slot ID %u, ep index %u has streams, "
    "but URB has no stream ID.\n",
    VAR_3, VAR_4);
  return ((void*)0);
 }

 if (VAR_5 < VAR_6->stream_info->num_streams)
  return VAR_6->stream_info->stream_rings[VAR_5];

 FUNC_1(VAR_1,
   "WARN: Slot ID %u, ep index %u has "
   "stream IDs 1 to %u allocated, "
   "but stream ID %u is requested.\n",
   VAR_3, VAR_4,
   VAR_6->stream_info->num_streams - 1,
   VAR_5);
 return ((void*)0);
}
