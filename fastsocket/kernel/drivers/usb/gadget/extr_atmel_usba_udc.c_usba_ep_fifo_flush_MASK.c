
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {int dummy; } ;
struct usba_ep {int index; struct usba_udc* udc; } ;
struct usb_ep {int dummy; } ;


 int VAR_0 ;
 struct usba_ep* FUNC_0 (struct usb_ep*) ;
 int FUNC_1 (struct usba_udc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_1)
{
 struct usba_ep *VAR_2 = FUNC_0(VAR_1);
 struct usba_udc *VAR_3 = VAR_2->udc;

 FUNC_1(VAR_3, VAR_0, 1 << VAR_2->index);
}
