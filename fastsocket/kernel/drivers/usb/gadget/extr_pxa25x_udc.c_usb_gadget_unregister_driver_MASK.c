
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct usb_gadget_driver {TYPE_1__ driver; int (* unbind ) (TYPE_2__*) ;} ;
struct TYPE_6__ {int * driver; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;
struct pxa25x_udc {TYPE_2__ gadget; struct usb_gadget_driver* driver; scalar_t__ transceiver; scalar_t__ pullup; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct pxa25x_udc*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (struct pxa25x_udc*) ;
 int FUNC_7 (struct pxa25x_udc*,struct usb_gadget_driver*) ;
 int FUNC_8 (TYPE_2__*) ;
 struct pxa25x_udc* VAR_2 ;

int FUNC_9(struct usb_gadget_driver *VAR_3)
{
 struct pxa25x_udc *VAR_4 = VAR_2;

 if (!VAR_4)
  return -VAR_1;
 if (!VAR_3 || VAR_3 != VAR_4->driver || !VAR_3->unbind)
  return -VAR_0;

 FUNC_3();
 VAR_4->pullup = 0;
 FUNC_6(VAR_4);
 FUNC_7(VAR_4, VAR_3);
 FUNC_4();

 if (VAR_4->transceiver)
  (void) FUNC_5(VAR_4->transceiver, ((void*)0));

 VAR_3->unbind(&VAR_4->gadget);
 VAR_4->gadget.dev.driver = ((void*)0);
 VAR_4->driver = ((void*)0);

 FUNC_1 (&VAR_4->gadget.dev);

 FUNC_0("unregistered gadget driver '%s'\n", VAR_3->driver.name);
 FUNC_2(VAR_4);
 return 0;
}
