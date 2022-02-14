
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct pxa_udc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pxa_udc* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct pxa_udc*,int ) ;
 int FUNC_2 (struct pxa_udc*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_4)
{
 struct pxa_udc *VAR_5 = FUNC_0(VAR_4);


 if ((FUNC_1(VAR_5, VAR_1) & VAR_2) == 0)
  return -VAR_0;
 FUNC_2(VAR_5, VAR_3);
 return 0;
}
