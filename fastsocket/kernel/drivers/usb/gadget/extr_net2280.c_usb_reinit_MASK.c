
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int maxpacket; int ep_list; int name; } ;
struct net2280_ep {int num; int fifo_size; scalar_t__ stopped; TYPE_1__ ep; int * regs; int * dma; struct net2280* dev; } ;
struct TYPE_5__ {TYPE_1__* ep0; } ;
struct net2280 {TYPE_3__* dep; TYPE_2__ gadget; struct net2280_ep* ep; int regs; int * epregs; int * dma; } ;
struct TYPE_6__ {int dep_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int FUNC_1 (int ,struct net2280_ep*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3 (struct net2280 *VAR_3)
{
 u32 VAR_4;
 int VAR_5;


 VAR_5 = VAR_2;


 for (VAR_4 = 0; VAR_4 < 7; VAR_4++) {
  struct net2280_ep *VAR_6 = &VAR_3->ep [VAR_4];

  VAR_6->ep.name = VAR_1 [VAR_4];
  VAR_6->dev = VAR_3;
  VAR_6->num = VAR_4;

  if (VAR_4 > 0 && VAR_4 <= 4) {
   VAR_6->fifo_size = 1024;
   if (VAR_5)
    VAR_6->dma = &VAR_3->dma [VAR_4 - 1];
  } else
   VAR_6->fifo_size = 64;
  VAR_6->regs = &VAR_3->epregs [VAR_4];
  FUNC_1 (VAR_3->regs, VAR_6);
 }
 VAR_3->ep [0].ep.maxpacket = 64;
 VAR_3->ep [5].ep.maxpacket = 64;
 VAR_3->ep [6].ep.maxpacket = 64;

 VAR_3->gadget.ep0 = &VAR_3->ep [0].ep;
 VAR_3->ep [0].stopped = 0;
 FUNC_0 (&VAR_3->gadget.ep0->ep_list);




 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  FUNC_2 (VAR_0, &VAR_3->dep [VAR_4].dep_cfg);
}
