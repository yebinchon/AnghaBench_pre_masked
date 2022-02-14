
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
struct xhci_td {union xhci_trb* last_trb; union xhci_trb* first_trb; struct xhci_segment* start_seg; } ;
struct xhci_segment {scalar_t__ dma; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_ring*,struct xhci_segment**,union xhci_trb**) ;
 int FUNC_4 (struct xhci_hcd*,char*,...) ;
 scalar_t__ FUNC_5 (struct xhci_segment*,union xhci_trb*) ;

__attribute__((used)) static void FUNC_6(struct xhci_hcd *VAR_3, struct xhci_ring *VAR_4,
  struct xhci_td *VAR_5, bool VAR_6)
{
 struct xhci_segment *VAR_7;
 union xhci_trb *VAR_8;

 for (VAR_7 = VAR_5->start_seg, VAR_8 = VAR_5->first_trb;
   1;
   FUNC_3(VAR_3, VAR_4, &VAR_7, &VAR_8)) {
  if (FUNC_1(VAR_8->generic.field[3])) {



   VAR_8->generic.field[3] &= FUNC_2(~VAR_0);



   if (VAR_6)
    VAR_8->generic.field[3] ^=
     FUNC_2(VAR_1);
   FUNC_4(VAR_3, "Cancel (unchain) link TRB\n");
   FUNC_4(VAR_3, "Address = %p (0x%llx dma); "
     "in seg %p (0x%llx dma)\n",
     VAR_8,
     (unsigned long long)FUNC_5(VAR_7, VAR_8),
     VAR_7,
     (unsigned long long)VAR_7->dma);
  } else {
   VAR_8->generic.field[0] = 0;
   VAR_8->generic.field[1] = 0;
   VAR_8->generic.field[2] = 0;

   VAR_8->generic.field[3] &= FUNC_2(VAR_1);

   if (VAR_6 && VAR_8 != VAR_5->first_trb &&
     VAR_8 != VAR_5->last_trb)
    VAR_8->generic.field[3] ^=
     FUNC_2(VAR_1);
   VAR_8->generic.field[3] |= FUNC_2(
    FUNC_0(VAR_2));
   FUNC_4(VAR_3, "TRB to noop at offset 0x%llx\n",
     (unsigned long long)
     FUNC_5(VAR_7, VAR_8));
  }
  if (VAR_8 == VAR_5->last_trb)
   break;
 }
}
