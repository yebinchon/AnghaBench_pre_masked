
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
struct lh7a40x_udc {TYPE_2__ gadget; int lock; struct usb_gadget_driver* driver; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct lh7a40x_udc*,struct usb_gadget_driver*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct lh7a40x_udc* VAR_2 ;
 int FUNC_6 (struct lh7a40x_udc*) ;

int FUNC_7(struct usb_gadget_driver *VAR_3)
{
 struct lh7a40x_udc *VAR_4 = VAR_2;
 unsigned long VAR_5;

 if (!VAR_4)
  return -VAR_1;
 if (!VAR_3 || VAR_3 != VAR_4->driver || !VAR_3->unbind)
  return -VAR_0;

 FUNC_2(&VAR_4->lock, VAR_5);
 VAR_4->driver = 0;
 FUNC_4(VAR_4, VAR_3);
 FUNC_3(&VAR_4->lock, VAR_5);

 VAR_3->unbind(&VAR_4->gadget);
 VAR_4->gadget.dev.driver = ((void*)0);
 FUNC_1(&VAR_4->gadget.dev);

 FUNC_6(VAR_4);

 FUNC_0("unregistered gadget driver '%s'\n", VAR_3->driver.name);
 return 0;
}
