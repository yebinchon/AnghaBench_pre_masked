
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {int fsbr; } ;
struct urb {int transfer_flags; struct urb_priv* hcpriv; } ;
struct uhci_hcd {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct uhci_hcd *VAR_1, struct urb *VAR_2)
{
 struct urb_priv *VAR_3 = VAR_2->hcpriv;

 if (!(VAR_2->transfer_flags & VAR_0))
  VAR_3->fsbr = 1;
}
