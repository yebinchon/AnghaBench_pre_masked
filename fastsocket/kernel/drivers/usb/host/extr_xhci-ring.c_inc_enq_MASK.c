
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int control; } ;
struct TYPE_6__ {int * field; } ;
union xhci_trb {TYPE_2__ link; TYPE_1__ generic; } ;
typedef int u32 ;
struct xhci_ring {scalar_t__ type; int cycle_state; union xhci_trb* enqueue; TYPE_3__* enq_seg; int enq_updates; int num_trbs_free; } ;
struct xhci_hcd {int quirks; } ;
struct TYPE_8__ {union xhci_trb* trbs; struct TYPE_8__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xhci_hcd*,struct xhci_ring*,TYPE_3__*,union xhci_trb*) ;
 scalar_t__ FUNC_2 (struct xhci_hcd*,struct xhci_ring*,TYPE_3__*,union xhci_trb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct xhci_hcd*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,union xhci_trb*) ;

__attribute__((used)) static void FUNC_7(struct xhci_hcd *VAR_5, struct xhci_ring *VAR_6,
   bool VAR_7)
{
 u32 VAR_8;
 union xhci_trb *VAR_9;
 unsigned long long VAR_10;

 VAR_8 = FUNC_3(VAR_6->enqueue->generic.field[3]) & VAR_0;

 if (VAR_6->type != VAR_2 &&
   !FUNC_1(VAR_5, VAR_6, VAR_6->enq_seg, VAR_6->enqueue))
  VAR_6->num_trbs_free--;
 VAR_9 = ++(VAR_6->enqueue);

 VAR_6->enq_updates++;



 while (FUNC_1(VAR_5, VAR_6, VAR_6->enq_seg, VAR_9)) {
  if (VAR_6->type != VAR_2) {
   if (!VAR_8 && !VAR_7)
    break;






   if (!(VAR_6->type == VAR_3 &&
     (VAR_5->quirks & VAR_4))
      && !FUNC_5(VAR_5)) {
    VAR_9->link.control &=
     FUNC_0(~VAR_0);
    VAR_9->link.control |=
     FUNC_0(VAR_8);
   }

   FUNC_4();
   VAR_9->link.control ^= FUNC_0(VAR_1);


   if (FUNC_2(VAR_5, VAR_6, VAR_6->enq_seg, VAR_9)) {
    VAR_6->cycle_state = (VAR_6->cycle_state ? 0 : 1);
   }
  }
  VAR_6->enq_seg = VAR_6->enq_seg->next;
  VAR_6->enqueue = VAR_6->enq_seg->trbs;
  VAR_9 = VAR_6->enqueue;
 }
 VAR_10 = (unsigned long long) FUNC_6(VAR_6->enq_seg, VAR_6->enqueue);
}
