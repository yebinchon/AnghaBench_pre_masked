
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int control; int intr_target; int segment_ptr; } ;
union xhci_trb {TYPE_1__ link; } ;
typedef int u64 ;
struct xhci_segment {int dma; union xhci_trb* trbs; } ;
struct xhci_hcd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xhci_hcd*,char*,int,int ,int ,int ,int ) ;

void FUNC_5(struct xhci_hcd *VAR_1, struct xhci_segment *VAR_2)
{
 int VAR_3;
 u64 VAR_4 = VAR_2->dma;
 union xhci_trb *VAR_5 = VAR_2->trbs;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_5 = &VAR_2->trbs[VAR_3];
  FUNC_4(VAR_1, "@%016llx %08x %08x %08x %08x\n", VAR_4,
    FUNC_2(FUNC_1(VAR_5->link.segment_ptr)),
    FUNC_3(FUNC_1(VAR_5->link.segment_ptr)),
    FUNC_0(VAR_5->link.intr_target),
    FUNC_0(VAR_5->link.control));
  VAR_4 += sizeof(*VAR_5);
 }
}
