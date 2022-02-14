
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_ep {TYPE_1__* stream_info; struct xhci_ring* ring; } ;
struct xhci_virt_device {struct xhci_virt_ep* eps; } ;
struct xhci_ring {int dummy; } ;
struct TYPE_2__ {unsigned int num_streams; struct xhci_ring** stream_rings; } ;



struct xhci_ring *FUNC_0(
  struct xhci_virt_device *VAR_0,
  unsigned int VAR_1,
  unsigned int VAR_2)
{
 struct xhci_virt_ep *VAR_3 = &VAR_0->eps[VAR_1];

 if (VAR_2 == 0)
  return VAR_3->ring;
 if (!VAR_3->stream_info)
  return ((void*)0);

 if (VAR_2 > VAR_3->stream_info->num_streams)
  return ((void*)0);
 return VAR_3->stream_info->stream_rings[VAR_2];
}
