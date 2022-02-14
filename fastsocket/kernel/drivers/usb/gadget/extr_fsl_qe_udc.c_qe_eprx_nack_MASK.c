
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct qe_udc {TYPE_1__* usb_regs; } ;
struct qe_ep {size_t epnum; scalar_t__ state; struct qe_udc* udc; } ;
struct TYPE_2__ {int usb_usbmr; int * usb_usep; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct qe_ep *VAR_6)
{
 u8 VAR_7 = VAR_6->epnum;
 struct qe_udc *VAR_8 = VAR_6->udc;

 if (VAR_6->state == VAR_0) {

  FUNC_1(&VAR_8->usb_regs->usb_usep[VAR_7],
    VAR_4, VAR_5);


  FUNC_0(&VAR_8->usb_regs->usb_usbmr,
    (VAR_3 | VAR_2));

  VAR_6->state = VAR_1;
 }
 return 0;
}
