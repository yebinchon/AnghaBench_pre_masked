
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct pxa_udc {int vbus_sensed; } ;


 scalar_t__ FUNC_0 (struct pxa_udc*) ;
 scalar_t__ FUNC_1 (struct pxa_udc*) ;
 struct pxa_udc* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct pxa_udc*) ;
 int FUNC_4 (struct pxa_udc*) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_0, int VAR_1)
{
 struct pxa_udc *VAR_2 = FUNC_2(VAR_0);

 VAR_2->vbus_sensed = VAR_1;
 if (FUNC_1(VAR_2))
  FUNC_4(VAR_2);
 if (FUNC_0(VAR_2))
  FUNC_3(VAR_2);

 return 0;
}
