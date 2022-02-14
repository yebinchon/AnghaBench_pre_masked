
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_ring {unsigned int num_segs; int type; TYPE_3__* last_seg; int first_seg; int td_list; } ;
struct xhci_hcd {int dummy; } ;
typedef int gfp_t ;
typedef enum xhci_ring_type { ____Placeholder_xhci_ring_type } xhci_ring_type ;
struct TYPE_6__ {TYPE_2__* trbs; } ;
struct TYPE_4__ {int control; } ;
struct TYPE_5__ {TYPE_1__ link; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_ring*) ;
 struct xhci_ring* FUNC_3 (int,int ) ;
 int FUNC_4 (struct xhci_hcd*,int *,TYPE_3__**,unsigned int,unsigned int,int,int ) ;
 int FUNC_5 (struct xhci_ring*,unsigned int) ;

__attribute__((used)) static struct xhci_ring *FUNC_6(struct xhci_hcd *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5,
  enum xhci_ring_type VAR_6, gfp_t VAR_7)
{
 struct xhci_ring *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof *(VAR_8), VAR_7);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->num_segs = VAR_4;
 FUNC_0(&VAR_8->td_list);
 VAR_8->type = VAR_6;
 if (VAR_4 == 0)
  return VAR_8;

 VAR_9 = FUNC_4(VAR_3, &VAR_8->first_seg,
   &VAR_8->last_seg, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  goto fail;


 if (VAR_6 != VAR_2) {

  VAR_8->last_seg->trbs[VAR_1 - 1].link.control |=
   FUNC_1(VAR_0);
 }
 FUNC_5(VAR_8, VAR_5);
 return VAR_8;

fail:
 FUNC_2(VAR_8);
 return ((void*)0);
}
