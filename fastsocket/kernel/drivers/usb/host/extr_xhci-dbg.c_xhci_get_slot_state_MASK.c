
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_slot_ctx {int dev_state; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_container_ctx {int dummy; } ;


 int FUNC_0 (int ) ;




 int FUNC_1 (int ) ;
 struct xhci_slot_ctx* FUNC_2 (struct xhci_hcd*,struct xhci_container_ctx*) ;

char *FUNC_3(struct xhci_hcd *VAR_0,
  struct xhci_container_ctx *VAR_1)
{
 struct xhci_slot_ctx *VAR_2 = FUNC_2(VAR_0, VAR_1);

 switch (FUNC_0(FUNC_1(VAR_2->dev_state))) {
 case 128:
  return "enabled/disabled";
 case 129:
  return "default";
 case 131:
  return "addressed";
 case 130:
  return "configured";
 default:
  return "reserved";
 }
}
