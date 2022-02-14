
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_virt_ep {int ep_state; struct xhci_stream_info* stream_info; TYPE_1__* ring; } ;
struct xhci_stream_info {unsigned int num_streams; TYPE_2__** stream_rings; } ;
struct xhci_hcd {TYPE_3__** devs; } ;
struct TYPE_6__ {struct xhci_virt_ep* eps; } ;
struct TYPE_5__ {int td_list; } ;
struct TYPE_4__ {int td_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xhci_hcd*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3)
{
 unsigned int VAR_4;
 struct xhci_virt_ep *VAR_5;

 VAR_5 = &VAR_1->devs[VAR_2]->eps[VAR_3];


 if (!(VAR_5->ep_state & VAR_0)) {
  if (!(FUNC_0(&VAR_5->ring->td_list)))
   FUNC_1(VAR_1, VAR_2, VAR_3, 0);
  return;
 }

 for (VAR_4 = 1; VAR_4 < VAR_5->stream_info->num_streams;
   VAR_4++) {
  struct xhci_stream_info *VAR_6 = VAR_5->stream_info;
  if (!FUNC_0(&VAR_6->stream_rings[VAR_4]->td_list))
   FUNC_1(VAR_1, VAR_2, VAR_3,
      VAR_4);
 }
}
