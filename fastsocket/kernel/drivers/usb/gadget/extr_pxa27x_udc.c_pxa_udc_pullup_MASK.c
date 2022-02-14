
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct pxa_udc {TYPE_1__* mach; } ;
struct TYPE_2__ {int udc_command; int gpio_pullup; } ;


 int VAR_0 ;
 int FUNC_0 (struct pxa_udc*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pxa_udc*) ;
 scalar_t__ FUNC_3 (struct pxa_udc*) ;
 struct pxa_udc* FUNC_4 (struct usb_gadget*) ;
 int FUNC_5 (struct pxa_udc*) ;
 int FUNC_6 (struct pxa_udc*) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_1, int VAR_2)
{
 struct pxa_udc *VAR_3 = FUNC_4(VAR_1);

 if (!FUNC_1(VAR_3->mach->gpio_pullup) && !VAR_3->mach->udc_command)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_2);

 if (FUNC_3(VAR_3))
  FUNC_6(VAR_3);
 if (FUNC_2(VAR_3))
  FUNC_5(VAR_3);
 return 0;
}
