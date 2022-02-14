
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net2280 {int softconnect; TYPE_3__* usb; TYPE_2__* regs; TYPE_1__* epregs; } ;
struct TYPE_6__ {int usbctl; int stdrsp; } ;
struct TYPE_5__ {int pciirqenb1; int pciirqenb0; } ;
struct TYPE_4__ {int ep_rsp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2 (struct net2280 *VAR_22)
{
 FUNC_1 ( (1 << VAR_1)
  | (1 << VAR_2)
  | (1 << VAR_0)
  , &VAR_22->epregs [0].ep_rsp);







 FUNC_1 ( (1 << VAR_17)
  | (1 << VAR_16)
  | (1 << VAR_3)
  | (1 << VAR_5)
  | (1 << VAR_6)
  , &VAR_22->usb->stdrsp);
 FUNC_1 ( (1 << VAR_20)
  | (1 << VAR_14)
  | (1 << VAR_11)
  | (VAR_22->softconnect << VAR_19)
  | (1 << VAR_13)
  , &VAR_22->usb->usbctl);


 FUNC_1 ( (1 << VAR_15)
  | (1 << VAR_4)
  , &VAR_22->regs->pciirqenb0);
 FUNC_1 ( (1 << VAR_7)
  | (1 << VAR_8)
  | (1 << VAR_10)
  | (1 << VAR_9)
  | (1 << VAR_21)
  | (1 << VAR_12)
  | (1 << VAR_18)
  , &VAR_22->regs->pciirqenb1);


 (void) FUNC_0 (&VAR_22->usb->usbctl);
}
