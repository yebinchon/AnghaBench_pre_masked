
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xhci_virt_ep {int ep_state; struct xhci_ring* ring; TYPE_1__* stream_info; } ;
struct xhci_ring {int dummy; } ;
struct TYPE_2__ {int trb_address_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xhci_ring* FUNC_0 (int *,int) ;

struct xhci_ring *FUNC_1(
  struct xhci_virt_ep *VAR_2,
  u64 VAR_3)
{
 if (VAR_2->ep_state & VAR_0)
  return FUNC_0(&VAR_2->stream_info->trb_address_map,
    VAR_3 >> VAR_1);
 return VAR_2->ring;
}
