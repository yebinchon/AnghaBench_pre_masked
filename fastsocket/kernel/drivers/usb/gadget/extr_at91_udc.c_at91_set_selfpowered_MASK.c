
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct at91_udc {int selfpowered; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 struct at91_udc* FUNC_2 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_0, int VAR_1)
{
 struct at91_udc *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 FUNC_1(VAR_3);
 VAR_2->selfpowered = (VAR_1 != 0);
 FUNC_0(VAR_3);
 return 0;
}
