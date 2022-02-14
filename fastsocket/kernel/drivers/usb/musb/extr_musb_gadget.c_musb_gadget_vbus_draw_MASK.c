
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct musb {TYPE_1__* xceiv; } ;
struct TYPE_2__ {int set_power; } ;


 int VAR_0 ;
 struct musb* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_1, unsigned VAR_2)
{
 struct musb *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->xceiv->set_power)
  return -VAR_0;
 return FUNC_1(VAR_3->xceiv, VAR_2);
}
