
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ep_list; int speed; TYPE_3__* ep0; } ;
struct goku_udc {struct goku_ep* ep; TYPE_2__ gadget; TYPE_1__* regs; scalar_t__ irqs; int ep0state; } ;
struct TYPE_6__ {char* name; int ep_list; int maxpacket; int * ops; } ;
struct goku_ep {unsigned int num; TYPE_3__ ep; int * reg_mode; int queue; struct goku_udc* dev; int * reg_status; int * reg_fifo; } ;
struct TYPE_4__ {int * ep_mode; int * ep_status; int * ep_fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct goku_ep*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (struct goku_udc *VAR_4)
{
 static char *VAR_5 [] = { "ep0", "ep1-bulk", "ep2-bulk", "ep3-bulk" };

 unsigned VAR_6;

 FUNC_0 (&VAR_4->gadget.ep_list);
 VAR_4->gadget.ep0 = &VAR_4->ep [0].ep;
 VAR_4->gadget.speed = VAR_2;
 VAR_4->ep0state = VAR_0;
 VAR_4->irqs = 0;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  struct goku_ep *VAR_7 = &VAR_4->ep[VAR_6];

  VAR_7->num = VAR_6;
  VAR_7->ep.name = VAR_5[VAR_6];
  VAR_7->reg_fifo = &VAR_4->regs->ep_fifo [VAR_6];
  VAR_7->reg_status = &VAR_4->regs->ep_status [VAR_6];
  VAR_7->reg_mode = &VAR_4->regs->ep_mode[VAR_6];

  VAR_7->ep.ops = &VAR_3;
  FUNC_2 (&VAR_7->ep.ep_list, &VAR_4->gadget.ep_list);
  VAR_7->dev = VAR_4;
  FUNC_0 (&VAR_7->queue);

  FUNC_1(((void*)0), VAR_7);
 }

 VAR_4->ep[0].reg_mode = ((void*)0);
 VAR_4->ep[0].ep.maxpacket = VAR_1;
 FUNC_3 (&VAR_4->ep[0].ep.ep_list);
}
