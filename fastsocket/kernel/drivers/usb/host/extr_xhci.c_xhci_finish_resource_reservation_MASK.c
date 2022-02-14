
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xhci_hcd {int num_active_eps; } ;
struct xhci_container_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (struct xhci_hcd*,struct xhci_container_ctx*) ;
 int FUNC_1 (struct xhci_hcd*,char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_0,
  struct xhci_container_ctx *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_0->num_active_eps -= VAR_2;
 if (VAR_2)
  FUNC_1(VAR_0, "Removing %u dropped ep ctxs, %u now active.\n",
    VAR_2,
    VAR_0->num_active_eps);
}
