
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
struct usb_gadget_driver {scalar_t__ speed; int (* bind ) (TYPE_2__*) ;int (* unbind ) (TYPE_2__*) ;TYPE_1__ driver; int setup; int disconnect; } ;
struct TYPE_9__ {TYPE_1__* driver; } ;
struct TYPE_8__ {TYPE_5__ dev; } ;
struct pxa25x_udc {int pullup; TYPE_2__ gadget; scalar_t__ transceiver; struct usb_gadget_driver* driver; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct pxa25x_udc*) ;
 int FUNC_4 (scalar_t__,TYPE_2__*) ;
 int FUNC_5 (struct pxa25x_udc*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 struct pxa25x_udc* VAR_4 ;

int FUNC_8(struct usb_gadget_driver *VAR_5)
{
 struct pxa25x_udc *VAR_6 = VAR_4;
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


 VAR_6->driver = VAR_5;
 VAR_6->gadget.dev.driver = &VAR_5->driver;
 VAR_6->pullup = 1;

 VAR_7 = FUNC_1 (&VAR_6->gadget.dev);
 if (VAR_7) {
fail:
  VAR_6->driver = ((void*)0);
  VAR_6->gadget.dev.driver = ((void*)0);
  return VAR_7;
 }
 VAR_7 = VAR_5->bind(&VAR_6->gadget);
 if (VAR_7) {
  FUNC_0("bind to driver %s --> error %d\n",
    VAR_5->driver.name, VAR_7);
  FUNC_2 (&VAR_6->gadget.dev);
  goto fail;
 }




 FUNC_0("registered gadget driver '%s'\n", VAR_5->driver.name);


 if (VAR_6->transceiver) {
  VAR_7 = FUNC_4(VAR_6->transceiver, &VAR_6->gadget);
  if (VAR_7) {
   FUNC_0("can't bind to transceiver\n");
   if (VAR_5->unbind)
    VAR_5->unbind(&VAR_6->gadget);
   goto bind_fail;
  }
 }

 FUNC_5(VAR_6);
 FUNC_3(VAR_6);
 return 0;
bind_fail:
 return VAR_7;
}
