
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * driver; } ;
struct TYPE_7__ {TYPE_1__ dev; int speed; } ;
struct usba_udc {int pclk; int hclk; struct usb_gadget_driver* driver; TYPE_3__ gadget; int lock; int vbus_pin; int pdev; } ;
struct TYPE_6__ {int name; } ;
struct usb_gadget_driver {TYPE_2__ driver; int (* unbind ) (TYPE_3__*) ;int (* disconnect ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usba_udc*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 struct usba_udc VAR_6 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct usba_udc*,int ,int ) ;

int FUNC_12(struct usb_gadget_driver *VAR_7)
{
 struct usba_udc *VAR_8 = &VAR_6;
 unsigned long VAR_9;

 if (!VAR_8->pdev)
  return -VAR_3;
 if (VAR_7 != VAR_8->driver || !VAR_7->unbind)
  return -VAR_2;

 if (FUNC_3(VAR_8->vbus_pin))
  FUNC_2(FUNC_4(VAR_8->vbus_pin));

 FUNC_6(&VAR_8->lock, VAR_9);
 VAR_8->gadget.speed = VAR_5;
 FUNC_5(VAR_8);
 FUNC_7(&VAR_8->lock, VAR_9);


 FUNC_10(0);
 FUNC_11(VAR_8, VAR_0, VAR_4);

 if (VAR_8->driver->disconnect)
  VAR_8->driver->disconnect(&VAR_8->gadget);

 VAR_7->unbind(&VAR_8->gadget);
 VAR_8->gadget.dev.driver = ((void*)0);
 VAR_8->driver = ((void*)0);

 FUNC_1(VAR_8->hclk);
 FUNC_1(VAR_8->pclk);

 FUNC_0(VAR_1, "unregistered driver `%s'\n", VAR_7->driver.name);

 return 0;
}
