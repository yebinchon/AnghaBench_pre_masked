
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_input_control_ctx {int dummy; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_container_ctx {scalar_t__ type; scalar_t__ bytes; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

struct xhci_input_control_ctx *FUNC_1(struct xhci_hcd *VAR_1,
           struct xhci_container_ctx *VAR_2)
{
 FUNC_0(VAR_2->type != VAR_0);
 return (struct xhci_input_control_ctx *)VAR_2->bytes;
}
