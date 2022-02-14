
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct usb_gadget_driver {TYPE_2__ driver; int (* unbind ) (TYPE_3__*) ;} ;
struct TYPE_4__ {int * driver; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;
struct goku_udc {TYPE_3__ gadget; int lock; struct usb_gadget_driver* driver; } ;


 int FUNC_0 (struct goku_udc*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct goku_udc*,struct usb_gadget_driver*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct goku_udc* VAR_2 ;

int FUNC_5(struct usb_gadget_driver *VAR_3)
{
 struct goku_udc *VAR_4 = VAR_2;
 unsigned long VAR_5;

 if (!VAR_4)
  return -VAR_1;
 if (!VAR_3 || VAR_3 != VAR_4->driver || !VAR_3->unbind)
  return -VAR_0;

 FUNC_1(&VAR_4->lock, VAR_5);
 VAR_4->driver = ((void*)0);
 FUNC_3(VAR_4, VAR_3);
 FUNC_2(&VAR_4->lock, VAR_5);

 VAR_3->unbind(&VAR_4->gadget);
 VAR_4->gadget.dev.driver = ((void*)0);

 FUNC_0(VAR_4, "unregistered driver '%s'\n", VAR_3->driver.name);
 return 0;
}
