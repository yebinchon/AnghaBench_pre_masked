
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {int num_rings_cached; TYPE_1__* eps; int ** ring_cache; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_2__ {int * ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,char*,int,...) ;
 int FUNC_1 (struct xhci_hcd*,int *) ;

void FUNC_2(struct xhci_hcd *VAR_1,
  struct xhci_virt_device *VAR_2,
  unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_2->num_rings_cached;
 if (VAR_4 < VAR_0) {
  VAR_2->ring_cache[VAR_4] =
   VAR_2->eps[VAR_3].ring;
  VAR_2->num_rings_cached++;
  FUNC_0(VAR_1, "Cached old ring, "
    "%d ring%s cached\n",
    VAR_2->num_rings_cached,
    (VAR_2->num_rings_cached > 1) ? "s" : "");
 } else {
  FUNC_1(VAR_1, VAR_2->eps[VAR_3].ring);
  FUNC_0(VAR_1, "Ring cache full (%d rings), "
    "freeing ring\n",
    VAR_2->num_rings_cached);
 }
 VAR_2->eps[VAR_3].ring = ((void*)0);
}
