
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
struct xhci_hcd {int dummy; } ;


 int FUNC_0 (struct xhci_hcd*,char*,int,int ) ;

void FUNC_1(struct xhci_hcd *VAR_0, union xhci_trb *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
  FUNC_0(VAR_0, "Offset 0x%x = 0x%x\n",
    VAR_2*4, VAR_1->generic.field[VAR_2]);
}
