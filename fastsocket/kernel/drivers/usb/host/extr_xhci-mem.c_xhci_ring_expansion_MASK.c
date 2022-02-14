
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_segment {int dummy; } ;
struct xhci_ring {unsigned int num_segs; int type; int cycle_state; } ;
struct xhci_hcd {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xhci_hcd*,struct xhci_segment**,struct xhci_segment**,unsigned int,int ,int ,int ) ;
 int FUNC_1 (struct xhci_hcd*,char*,unsigned int) ;
 int FUNC_2 (struct xhci_hcd*,struct xhci_ring*,struct xhci_segment*,struct xhci_segment*,unsigned int) ;

int FUNC_3(struct xhci_hcd *VAR_2, struct xhci_ring *VAR_3,
    unsigned int VAR_4, gfp_t VAR_5)
{
 struct xhci_segment *VAR_6;
 struct xhci_segment *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_9 = (VAR_4 + (VAR_1 - 1) - 1) /
    (VAR_1 - 1);


 VAR_8 = VAR_3->num_segs > VAR_9 ?
   VAR_3->num_segs : VAR_9;

 VAR_10 = FUNC_0(VAR_2, &VAR_6, &VAR_7,
   VAR_8, VAR_3->cycle_state, VAR_3->type, VAR_5);
 if (VAR_10)
  return -VAR_0;

 FUNC_2(VAR_2, VAR_3, VAR_6, VAR_7, VAR_8);
 FUNC_1(VAR_2, "ring expansion succeed, now has %d segments\n",
   VAR_3->num_segs);

 return 0;
}
