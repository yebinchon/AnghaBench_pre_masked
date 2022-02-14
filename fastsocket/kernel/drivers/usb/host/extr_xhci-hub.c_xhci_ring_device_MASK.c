
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_hcd {TYPE_3__** devs; } ;
struct TYPE_6__ {TYPE_2__* eps; } ;
struct TYPE_5__ {TYPE_1__* ring; } ;
struct TYPE_4__ {scalar_t__ dequeue; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,int,int,int ) ;

void FUNC_1(struct xhci_hcd *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0 + 1; VAR_3++)
  if (VAR_1->devs[VAR_2]->eps[VAR_3].ring &&
      VAR_1->devs[VAR_2]->eps[VAR_3].ring->dequeue)
   FUNC_0(VAR_1, VAR_2, VAR_3, 0);

 return;
}
