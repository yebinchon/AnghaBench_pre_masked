
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * field; } ;
union xhci_trb {int event_cmd; TYPE_1__ generic; } ;
typedef scalar_t__ u32 ;
struct xhci_hcd {int quirks; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xhci_hcd*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xhci_hcd*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_2,
  union xhci_trb *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(FUNC_2(VAR_3->generic.field[3]));
 FUNC_3(VAR_2, "Vendor specific event TRB type = %u\n", VAR_4);
 if (VAR_4 == VAR_0 && (VAR_2->quirks & VAR_1))
  FUNC_1(VAR_2, &VAR_3->event_cmd);
}
