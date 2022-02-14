
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct musb {int mregs; } ;


 int VAR_0 ;
 struct musb* FUNC_0 (struct usb_gadget*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_1)
{
 struct musb *VAR_2 = FUNC_0(VAR_1);

 return (int)FUNC_1(VAR_2->mregs, VAR_0);
}
