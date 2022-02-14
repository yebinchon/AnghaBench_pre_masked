
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int ep_list; int maxpacket; int name; } ;
struct udc_ep {size_t num; int in; int naking; scalar_t__ halted; TYPE_2__ ep; TYPE_1__* regs; int * dma; int desc; int fifo_depth; int txfifo; struct udc* dev; } ;
struct TYPE_7__ {scalar_t__ speed; TYPE_2__* ep0; } ;
struct udc {scalar_t__ cur_alt; scalar_t__ cur_intf; scalar_t__ cur_config; TYPE_3__ gadget; struct udc_ep* ep; TYPE_4__* regs; TYPE_1__* ep_regs; int txfifo; } ;
struct TYPE_8__ {int ctl; int sts; } ;
struct TYPE_5__ {int ctl; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct udc*,char*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (TYPE_4__*,struct udc_ep*) ;
 int * VAR_16 ;
 size_t FUNC_5 (int *) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (size_t,int *) ;

__attribute__((used)) static void FUNC_7(struct udc *VAR_18)
{
 struct udc_ep *VAR_19;
 u32 VAR_20;
 u32 VAR_21;

 FUNC_2(VAR_18, "udc_setup_endpoints()\n");


 VAR_20 = FUNC_5(&VAR_18->regs->sts);
 VAR_20 = FUNC_1(VAR_20, VAR_0);
 if (VAR_20 == VAR_2) {
  VAR_18->gadget.speed = VAR_15;
 } else if (VAR_20 == VAR_1) {
  VAR_18->gadget.speed = VAR_14;
 }


 for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
  VAR_19 = &VAR_18->ep[VAR_20];
  VAR_19->dev = VAR_18;
  VAR_19->ep.name = VAR_16[VAR_20];
  VAR_19->num = VAR_20;

  VAR_19->txfifo = VAR_18->txfifo;


  if (VAR_20 < VAR_8) {
   VAR_19->fifo_depth = VAR_13;
   VAR_19->in = 1;
  } else {
   VAR_19->fifo_depth = VAR_12;
   VAR_19->in = 0;

  }
  VAR_19->regs = &VAR_18->ep_regs[VAR_20];





  if (!VAR_19->desc) {
   FUNC_4(VAR_18->regs, VAR_19);
  }

  if (VAR_17) {





   VAR_19->dma = &VAR_18->regs->ctl;


   if (VAR_20 != VAR_3 && VAR_20 != VAR_5
      && VAR_20 > VAR_8) {

    VAR_21 = FUNC_5(&VAR_18->ep[VAR_20].regs->ctl);
    VAR_21 |= FUNC_0(VAR_7);
    FUNC_6(VAR_21, &VAR_18->ep[VAR_20].regs->ctl);
    VAR_18->ep[VAR_20].naking = 1;

   }
  }
 }

 if (VAR_18->gadget.speed == VAR_14) {
  VAR_18->ep[VAR_3].ep.maxpacket = VAR_10;
  VAR_18->ep[VAR_5].ep.maxpacket =
      VAR_11;
 } else if (VAR_18->gadget.speed == VAR_15) {
  VAR_18->ep[VAR_3].ep.maxpacket = VAR_4;
  VAR_18->ep[VAR_5].ep.maxpacket = VAR_6;
 }





 VAR_18->gadget.ep0 = &VAR_18->ep[VAR_3].ep;
 VAR_18->ep[VAR_3].halted = 0;
 FUNC_3(&VAR_18->gadget.ep0->ep_list);


 VAR_18->cur_config = 0;
 VAR_18->cur_intf = 0;
 VAR_18->cur_alt = 0;
}
