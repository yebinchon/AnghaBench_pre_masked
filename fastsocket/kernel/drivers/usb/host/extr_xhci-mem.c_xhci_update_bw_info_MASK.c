
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {TYPE_1__* eps; } ;
struct xhci_input_control_ctx {int dummy; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int tx_info; int ep_info2; int ep_info; } ;
struct xhci_container_ctx {int dummy; } ;
struct xhci_bw_info {unsigned int type; int max_esit_payload; int max_packet_size; scalar_t__ num_packets; scalar_t__ mult; int ep_interval; } ;
struct TYPE_2__ {struct xhci_bw_info bw_info; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct xhci_input_control_ctx*,int) ;
 scalar_t__ FUNC_6 (struct xhci_input_control_ctx*,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct xhci_bw_info*) ;
 struct xhci_ep_ctx* FUNC_10 (struct xhci_hcd*,struct xhci_container_ctx*,int) ;

void FUNC_11(struct xhci_hcd *VAR_4,
  struct xhci_container_ctx *VAR_5,
  struct xhci_input_control_ctx *VAR_6,
  struct xhci_virt_device *VAR_7)
{
 struct xhci_bw_info *VAR_8;
 struct xhci_ep_ctx *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 for (VAR_11 = 1; VAR_11 < 31; ++VAR_11) {
  VAR_8 = &VAR_7->eps[VAR_11].bw_info;






  if (!FUNC_5(VAR_6, VAR_11) && FUNC_6(VAR_6, VAR_11)) {

   FUNC_9(VAR_8);
   continue;
  }

  if (FUNC_5(VAR_6, VAR_11)) {
   VAR_9 = FUNC_10(VAR_4, VAR_5, VAR_11);
   VAR_10 = FUNC_2(FUNC_8(VAR_9->ep_info2));


   if (VAR_10 != VAR_3 && VAR_10 != VAR_1 &&
     VAR_10 != VAR_2 &&
     VAR_10 != VAR_0)
    continue;


   VAR_8->ep_interval = FUNC_0(
     FUNC_8(VAR_9->ep_info));




   VAR_8->mult = FUNC_1(
     FUNC_8(VAR_9->ep_info)) + 1;
   VAR_8->num_packets = FUNC_3(
     FUNC_8(VAR_9->ep_info2)) + 1;
   VAR_8->max_packet_size = FUNC_7(
     FUNC_8(VAR_9->ep_info2));
   VAR_8->type = VAR_10;
   VAR_8->max_esit_payload = FUNC_4(
     FUNC_8(VAR_9->tx_info));
  }
 }
}
