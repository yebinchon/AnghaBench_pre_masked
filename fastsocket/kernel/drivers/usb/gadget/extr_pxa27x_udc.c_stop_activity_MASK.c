
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget_driver {int (* disconnect ) (TYPE_2__*) ;} ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct pxa_udc {TYPE_2__ gadget; TYPE_1__* udc_usb_ep; } ;
struct TYPE_3__ {int usb_ep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct pxa_udc *VAR_2, struct usb_gadget_driver *VAR_3)
{
 int VAR_4;


 if (VAR_2->gadget.speed == VAR_1)
  VAR_3 = ((void*)0);
 VAR_2->gadget.speed = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(&VAR_2->udc_usb_ep[VAR_4].usb_ep);

 if (VAR_3)
  VAR_3->disconnect(&VAR_2->gadget);
}
