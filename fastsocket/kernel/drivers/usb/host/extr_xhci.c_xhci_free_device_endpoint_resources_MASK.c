
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {TYPE_1__* eps; } ;
struct xhci_hcd {unsigned int num_active_eps; } ;
struct TYPE_2__ {scalar_t__ ring; } ;


 int FUNC_0 (struct xhci_hcd*,char*,unsigned int,unsigned int,unsigned int) ;

void FUNC_1(struct xhci_hcd *VAR_0,
 struct xhci_virt_device *VAR_1, bool VAR_2)
{
 int VAR_3;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;

 for (VAR_3 = (VAR_2 ? 0 : 1); VAR_3 < 31; VAR_3++) {
  if (VAR_1->eps[VAR_3].ring) {
   VAR_5 |= 1 << VAR_3;
   VAR_4++;
  }
 }
 VAR_0->num_active_eps -= VAR_4;
 if (VAR_4)
  FUNC_0(VAR_0, "Dropped %u ep ctxs, flags = 0x%x, "
    "%u now active.\n",
    VAR_4, VAR_5,
    VAR_0->num_active_eps);
}
