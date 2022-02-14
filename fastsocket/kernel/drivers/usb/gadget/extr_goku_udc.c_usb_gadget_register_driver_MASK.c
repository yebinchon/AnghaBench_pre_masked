
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; int * bus; } ;
struct usb_gadget_driver {scalar_t__ speed; int (* bind ) (TYPE_3__*) ;TYPE_2__ driver; int setup; int disconnect; } ;
struct TYPE_4__ {TYPE_2__* driver; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;
struct goku_udc {TYPE_3__ gadget; struct usb_gadget_driver* driver; } ;


 int FUNC_0 (struct goku_udc*,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 struct goku_udc* VAR_4 ;
 int FUNC_2 (struct goku_udc*) ;

int FUNC_3(struct usb_gadget_driver *VAR_5)
{
 struct goku_udc *VAR_6 = VAR_4;
 int VAR_7;

 if (!VAR_5
   || VAR_5->speed < VAR_3
   || !VAR_5->bind
   || !VAR_5->disconnect
   || !VAR_5->setup)
  return -VAR_1;
 if (!VAR_6)
  return -VAR_2;
 if (VAR_6->driver)
  return -VAR_0;


 VAR_5->driver.bus = ((void*)0);
 VAR_6->driver = VAR_5;
 VAR_6->gadget.dev.driver = &VAR_5->driver;
 VAR_7 = VAR_5->bind(&VAR_6->gadget);
 if (VAR_7) {
  FUNC_0(VAR_6, "bind to driver %s --> error %d\n",
    VAR_5->driver.name, VAR_7);
  VAR_6->driver = ((void*)0);
  VAR_6->gadget.dev.driver = ((void*)0);
  return VAR_7;
 }




 FUNC_2(VAR_6);

 FUNC_0(VAR_6, "registered gadget driver '%s'\n", VAR_5->driver.name);
 return 0;
}
