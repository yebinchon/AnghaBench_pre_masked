
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_input_control_ctx {int add_flags; int drop_flags; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_container_ctx {int dummy; } ;


 int FUNC_0 (int) ;
 struct xhci_input_control_ctx* FUNC_1 (struct xhci_hcd*,struct xhci_container_ctx*) ;

__attribute__((used)) static u32 FUNC_2(struct xhci_hcd *VAR_0,
  struct xhci_container_ctx *VAR_1)
{
 struct xhci_input_control_ctx *VAR_2;
 u32 VAR_3;
 u32 VAR_4;

 VAR_2 = FUNC_1(VAR_0, VAR_1);




 VAR_3 = VAR_2->add_flags >> 2;
 VAR_4 = VAR_2->drop_flags >> 2;





 return FUNC_0(VAR_3) -
  FUNC_0(VAR_3 & VAR_4);
}
