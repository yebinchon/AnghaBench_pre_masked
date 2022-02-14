
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct usb_gadget_driver {scalar_t__ speed; int (* bind ) (TYPE_1__*) ;TYPE_3__ driver; int setup; } ;
struct TYPE_5__ {TYPE_3__* driver; } ;
struct TYPE_4__ {TYPE_2__ dev; } ;
struct at91_udc {int enabled; int selfpowered; TYPE_1__ gadget; struct usb_gadget_driver* driver; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct at91_udc VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct at91_udc*,int) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6 (struct usb_gadget_driver *VAR_4)
{
 struct at91_udc *VAR_5 = &VAR_3;
 int VAR_6;

 if (!VAR_4
   || VAR_4->speed < VAR_2
   || !VAR_4->bind
   || !VAR_4->setup) {
  FUNC_0("bad parameter.\n");
  return -VAR_1;
 }

 if (VAR_5->driver) {
  FUNC_0("UDC already has a gadget driver\n");
  return -VAR_0;
 }

 VAR_5->driver = VAR_4;
 VAR_5->gadget.dev.driver = &VAR_4->driver;
 FUNC_1(&VAR_5->gadget.dev, &VAR_4->driver);
 VAR_5->enabled = 1;
 VAR_5->selfpowered = 1;

 VAR_6 = VAR_4->bind(&VAR_5->gadget);
 if (VAR_6) {
  FUNC_0("driver->bind() returned %d\n", VAR_6);
  VAR_5->driver = ((void*)0);
  VAR_5->gadget.dev.driver = ((void*)0);
  FUNC_1(&VAR_5->gadget.dev, ((void*)0));
  VAR_5->enabled = 0;
  VAR_5->selfpowered = 0;
  return VAR_6;
 }

 FUNC_2();
 FUNC_4(VAR_5, 1);
 FUNC_3();

 FUNC_0("bound to %s\n", VAR_4->driver.name);
 return 0;
}
