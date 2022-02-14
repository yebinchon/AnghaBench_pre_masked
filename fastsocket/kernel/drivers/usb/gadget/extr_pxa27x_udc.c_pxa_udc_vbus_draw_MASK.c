
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct pxa_udc {scalar_t__ transceiver; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int) ;
 struct pxa_udc* FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_1, unsigned VAR_2)
{
 struct pxa_udc *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3->transceiver)
  return FUNC_0(VAR_3->transceiver, VAR_2);
 return -VAR_0;
}
