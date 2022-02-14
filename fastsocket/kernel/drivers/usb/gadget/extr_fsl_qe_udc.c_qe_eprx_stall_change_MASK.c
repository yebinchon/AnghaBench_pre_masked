
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct qe_udc {TYPE_1__* usb_regs; } ;
struct qe_ep {size_t epnum; scalar_t__ dir; struct qe_udc* udc; } ;
struct TYPE_2__ {int * usb_usep; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct qe_ep *VAR_4, int VAR_5)
{
 u16 VAR_6;
 u8 VAR_7 = VAR_4->epnum;
 struct qe_udc *VAR_8 = VAR_4->udc;

 VAR_6 = FUNC_0(&VAR_8->usb_regs->usb_usep[VAR_7]);
 VAR_6 = VAR_6 & ~VAR_2;
 if (VAR_5 == 1)
  VAR_6 |= VAR_3;
 else if (VAR_4->dir == VAR_0)
  VAR_6 |= VAR_1;

 FUNC_1(&VAR_8->usb_regs->usb_usep[VAR_7], VAR_6);
 return 0;
}
