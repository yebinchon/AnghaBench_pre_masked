
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct urb_priv {struct urb_priv** td; } ;


 int FUNC_0 (struct urb_priv*) ;

void FUNC_1(struct xhci_hcd *VAR_0, struct urb_priv *VAR_1)
{
 if (VAR_1) {
  FUNC_0(VAR_1->td[0]);
  FUNC_0(VAR_1);
 }
}
