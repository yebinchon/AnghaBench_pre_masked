
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u8 ;
struct TYPE_4__ {scalar_t__ data; void* function; } ;
struct TYPE_3__ {TYPE_2__ timer; } ;
struct w6692_hw {int imask; scalar_t__ subtype; int pctl; int xdata; int xaddr; int fmask; int name; int * bc; int state; TYPE_1__ dch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w6692_hw*,int ) ;
 scalar_t__ VAR_2 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct w6692_hw*,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (struct w6692_hw*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_28 ;
 int FUNC_5 (struct w6692_hw*,int ) ;
 int VAR_29 ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(struct w6692_hw *VAR_30)
{
 u8 VAR_31;

 VAR_30->dch.timer.function = (void *)VAR_26;
 VAR_30->dch.timer.data = (u_long)&VAR_30->dch;
 FUNC_4(&VAR_30->dch.timer);
 FUNC_7(&VAR_30->bc[0], VAR_1);
 FUNC_7(&VAR_30->bc[1], VAR_1);
 FUNC_1(VAR_30, VAR_10, 0x00);
 FUNC_3(VAR_30);
 FUNC_1(VAR_30, VAR_14, 0xff);
 FUNC_1(VAR_30, VAR_15, 0xff);
 FUNC_1(VAR_30, VAR_12, VAR_13);
 VAR_30->state = VAR_17;
 FUNC_5(VAR_30, VAR_17);
 FUNC_5(VAR_30, VAR_16);

 VAR_30->imask = 0x18;
 FUNC_1(VAR_30, VAR_11, 0x00);
 FUNC_2(&VAR_30->bc[0], VAR_6, 0);
 FUNC_2(&VAR_30->bc[1], VAR_6, 0);

 FUNC_1(VAR_30, VAR_7, VAR_8 | VAR_9);

 FUNC_2(&VAR_30->bc[0], VAR_3, VAR_4 | VAR_5);
 FUNC_2(&VAR_30->bc[1], VAR_3, VAR_4 | VAR_5);

 if (VAR_30->subtype == VAR_2) {




  VAR_30->pctl = 0x80;
  VAR_30->xdata = 0;
  FUNC_1(VAR_30, VAR_18, VAR_30->pctl);
  FUNC_1(VAR_30, VAR_25, VAR_30->xdata);
 } else {
  VAR_30->pctl = VAR_23 | VAR_22 | VAR_21 |
   VAR_20 | VAR_19;
  VAR_30->xaddr = 0x00;
  if (VAR_30->fmask & VAR_29)
   VAR_30->xdata |= 0x06;
  if (VAR_30->fmask & VAR_28)
   VAR_30->xdata |= 0x04;
  if ((VAR_30->fmask & VAR_29) || (VAR_30->fmask & VAR_28)) {
   FUNC_1(VAR_30, VAR_18, VAR_30->pctl);
   FUNC_1(VAR_30, VAR_24, VAR_30->xaddr);
   FUNC_1(VAR_30, VAR_25, VAR_30->xdata);
   VAR_31 = FUNC_0(VAR_30, VAR_24);
   if (VAR_27 & VAR_0)
    FUNC_6("%s: W_XADDR=%02x\n",
     VAR_30->name, VAR_31);
  }
 }
}
