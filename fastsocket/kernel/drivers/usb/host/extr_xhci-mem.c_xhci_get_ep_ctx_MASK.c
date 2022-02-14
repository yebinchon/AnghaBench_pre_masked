
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int hcc_params; } ;
struct xhci_ep_ctx {int dummy; } ;
struct xhci_container_ctx {scalar_t__ type; scalar_t__ bytes; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

struct xhci_ep_ctx *FUNC_1(struct xhci_hcd *VAR_1,
        struct xhci_container_ctx *VAR_2,
        unsigned int VAR_3)
{

 VAR_3++;
 if (VAR_2->type == VAR_0)
  VAR_3++;

 return (struct xhci_ep_ctx *)
  (VAR_2->bytes + (VAR_3 * FUNC_0(VAR_1->hcc_params)));
}
