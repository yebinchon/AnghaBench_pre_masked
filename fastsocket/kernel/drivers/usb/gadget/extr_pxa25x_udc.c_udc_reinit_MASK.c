
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int ep_list; TYPE_1__* ep0; } ;
struct pxa25x_udc {TYPE_3__ gadget; struct pxa25x_ep* ep; int ep0state; } ;
struct TYPE_5__ {int ep_list; } ;
struct pxa25x_ep {scalar_t__ pio_irqs; int queue; scalar_t__ stopped; int * desc; TYPE_2__ ep; } ;
struct TYPE_4__ {int ep_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct pxa25x_udc *VAR_2)
{
 u32 VAR_3;


 FUNC_0 (&VAR_2->gadget.ep_list);
 FUNC_0 (&VAR_2->gadget.ep0->ep_list);
 VAR_2->ep0state = VAR_0;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct pxa25x_ep *VAR_4 = &VAR_2->ep[VAR_3];

  if (VAR_3 != 0)
   FUNC_1 (&VAR_4->ep.ep_list, &VAR_2->gadget.ep_list);

  VAR_4->desc = ((void*)0);
  VAR_4->stopped = 0;
  FUNC_0 (&VAR_4->queue);
  VAR_4->pio_irqs = 0;
 }


}
