
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct at91_udc {int clocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct at91_udc*,int ) ;
 struct at91_udc* FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_3)
{
 struct at91_udc *VAR_4 = FUNC_1(VAR_3);

 if (!FUNC_1(VAR_3)->clocked)
  return -VAR_2;
 return FUNC_0(VAR_4, VAR_0) & VAR_1;
}
