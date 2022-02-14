
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xhci_hcd {scalar_t__ num_active_eps; scalar_t__ limit_active_eps; } ;
struct xhci_container_ctx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xhci_hcd*,struct xhci_container_ctx*) ;
 int FUNC_1 (struct xhci_hcd*,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static int FUNC_2(struct xhci_hcd *VAR_1,
  struct xhci_container_ctx *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_1->num_active_eps + VAR_3 > VAR_1->limit_active_eps) {
  FUNC_1(VAR_1, "Not enough ep ctxs: "
    "%u active, need to add %u, limit is %u.\n",
    VAR_1->num_active_eps, VAR_3,
    VAR_1->limit_active_eps);
  return -VAR_0;
 }
 VAR_1->num_active_eps += VAR_3;
 FUNC_1(VAR_1, "Adding %u ep ctxs, %u now active.\n", VAR_3,
   VAR_1->num_active_eps);
 return 0;
}
