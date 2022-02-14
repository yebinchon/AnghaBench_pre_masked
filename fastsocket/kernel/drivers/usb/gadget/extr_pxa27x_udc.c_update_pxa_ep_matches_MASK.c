
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udc_usb_ep {scalar_t__ pxa_ep; } ;
struct pxa_udc {struct udc_usb_ep* udc_usb_ep; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pxa_udc*,struct udc_usb_ep*) ;

__attribute__((used)) static void FUNC_1(struct pxa_udc *VAR_1)
{
 int VAR_2;
 struct udc_usb_ep *VAR_3;

 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = &VAR_1->udc_usb_ep[VAR_2];
  if (VAR_3->pxa_ep)
   VAR_3->pxa_ep = FUNC_0(VAR_1, VAR_3);
 }
}
