
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct usb_gadget_driver {TYPE_1__ driver; int (* unbind ) (TYPE_2__*) ;} ;
struct TYPE_4__ {int dev; } ;
struct pxa_udc {scalar_t__ transceiver; int dev; TYPE_2__ gadget; struct usb_gadget_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pxa_udc*,int ) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (struct pxa_udc*,struct usb_gadget_driver*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct pxa_udc* VAR_2 ;
 int FUNC_6 (struct pxa_udc*) ;

int FUNC_7(struct usb_gadget_driver *VAR_3)
{
 struct pxa_udc *VAR_4 = VAR_2;

 if (!VAR_4)
  return -VAR_1;
 if (!VAR_3 || VAR_3 != VAR_4->driver || !VAR_3->unbind)
  return -VAR_0;

 FUNC_4(VAR_4, VAR_3);
 FUNC_6(VAR_4);
 FUNC_2(VAR_4, 0);

 VAR_3->unbind(&VAR_4->gadget);
 VAR_4->driver = ((void*)0);

 FUNC_1(&VAR_4->gadget.dev);
 FUNC_0(VAR_4->dev, "unregistered gadget driver '%s'\n",
   VAR_3->driver.name);

 if (VAR_4->transceiver)
  return FUNC_3(VAR_4->transceiver, ((void*)0));
 return 0;
}
