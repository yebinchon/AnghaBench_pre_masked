
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int ep_info; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct xhci_hcd *VAR_5,
  struct xhci_ep_ctx *VAR_6,
  unsigned int VAR_7)
{

 if (VAR_7 == VAR_2 ||
   VAR_7 == VAR_0 ||
   VAR_7 == VAR_1)






  if ((VAR_6->ep_info & FUNC_0(VAR_4)) ==
      FUNC_0(VAR_3))
   return 1;

 return 0;
}
