
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
struct at91_udc {struct usb_gadget_driver* driver; TYPE_2__ gadget; scalar_t__ enabled; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct at91_udc*,int ,int ) ;
 struct at91_udc VAR_2 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct at91_udc*,int ) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7 (struct usb_gadget_driver *VAR_3)
{
 struct at91_udc *VAR_4 = &VAR_2;

 if (!VAR_3 || VAR_3 != VAR_4->driver || !VAR_3->unbind)
  return -VAR_1;

 FUNC_3();
 VAR_4->enabled = 0;
 FUNC_1(VAR_4, VAR_0, ~0);
 FUNC_5(VAR_4, 0);
 FUNC_4();

 VAR_3->unbind(&VAR_4->gadget);
 VAR_4->gadget.dev.driver = ((void*)0);
 FUNC_2(&VAR_4->gadget.dev, ((void*)0));
 VAR_4->driver = ((void*)0);

 FUNC_0("unbound from %s\n", VAR_3->driver.name);
 return 0;
}
