
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qe_udc {TYPE_1__* usb_regs; } ;
struct qe_ep {int epnum; struct qe_udc* udc; } ;
struct TYPE_2__ {int usb_uscom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct qe_ep *VAR_2)
{
 struct qe_udc *VAR_3 = VAR_2->udc;

 FUNC_0(&VAR_3->usb_regs->usb_uscom,
   VAR_1 | (VAR_0 & (VAR_2->epnum)));
 return 0;
}
