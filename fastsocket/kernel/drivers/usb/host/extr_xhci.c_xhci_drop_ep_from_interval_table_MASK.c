
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_virt_ep {int bw_endpoint_list; } ;
struct xhci_tt_bw_info {int active_eps; } ;
struct xhci_interval_bw_table {struct xhci_interval_bw* interval_bw; int interval0_esit_payload; } ;
struct xhci_interval_bw {int* overhead; int num_packets; } ;
struct xhci_hcd {TYPE_2__** devs; } ;
struct xhci_bw_info {int ep_interval; scalar_t__ num_packets; scalar_t__ max_esit_payload; int type; } ;
struct usb_device {int speed; size_t slot_id; } ;
struct TYPE_4__ {TYPE_1__* bw_table; } ;
struct TYPE_3__ {int ss_bw_out; int ss_bw_in; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;






 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct xhci_bw_info*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct xhci_hcd *VAR_3,
  struct xhci_bw_info *VAR_4,
  struct xhci_interval_bw_table *VAR_5,
  struct usb_device *VAR_6,
  struct xhci_virt_ep *VAR_7,
  struct xhci_tt_bw_info *VAR_8)
{
 struct xhci_interval_bw *VAR_9;
 int VAR_10;

 if (FUNC_3(VAR_4->type))
  return;

 if (VAR_6->speed == 130) {
  if (FUNC_4(VAR_4->type))
   VAR_3->devs[VAR_6->slot_id]->bw_table->ss_bw_in -=
    FUNC_2(VAR_4);
  else
   VAR_3->devs[VAR_6->slot_id]->bw_table->ss_bw_out -=
    FUNC_2(VAR_4);
  return;
 }




 if (FUNC_1(&VAR_7->bw_endpoint_list))
  return;



 if (VAR_6->speed == 132)
  VAR_10 = VAR_4->ep_interval;
 else
  VAR_10 = VAR_4->ep_interval - 3;

 if (VAR_10 == 0)
  VAR_5->interval0_esit_payload -= VAR_4->max_esit_payload;
 VAR_9 = &VAR_5->interval_bw[VAR_10];
 VAR_9->num_packets -= VAR_4->num_packets;
 switch (VAR_6->speed) {
 case 131:
  VAR_9->overhead[VAR_2] -= 1;
  break;
 case 133:
  VAR_9->overhead[VAR_0] -= 1;
  break;
 case 132:
  VAR_9->overhead[VAR_1] -= 1;
  break;
 case 130:
 case 129:
 case 128:



  return;
 }
 if (VAR_8)
  VAR_8->active_eps -= 1;
 FUNC_0(&VAR_7->bw_endpoint_list);
}
