
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udc_usb_ep {int dummy; } ;
struct pxa_udc {int config; int last_interface; int last_alternate; struct pxa_ep* pxa_ep; struct udc_usb_ep* udc_usb_ep; } ;
struct pxa_ep {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct udc_usb_ep*,struct pxa_ep*,int,int,int) ;

__attribute__((used)) static struct pxa_ep *FUNC_1(struct pxa_udc *VAR_1,
  struct udc_usb_ep *VAR_2)
{
 int VAR_3;
 struct pxa_ep *VAR_4;
 int VAR_5 = VAR_1->config;
 int VAR_6 = VAR_1->last_interface;
 int VAR_7 = VAR_1->last_alternate;

 if (VAR_2 == &VAR_1->udc_usb_ep[0])
  return &VAR_1->pxa_ep[0];

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_1->pxa_ep[VAR_3];
  if (FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7))
   return VAR_4;
 }
 return ((void*)0);
}
