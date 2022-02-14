
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
struct pxa_udc {TYPE_2__ gadget; struct usb_gadget_driver* driver; int dev; scalar_t__ transceiver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct pxa_udc*,int) ;
 int FUNC_5 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct pxa_udc*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 struct pxa_udc* VAR_4 ;
 int FUNC_9 (struct pxa_udc*) ;

int FUNC_10(struct usb_gadget_driver *VAR_5)
{
 struct pxa_udc *VAR_6 = VAR_4;
 int VAR_7;

 if (!VAR_5 || VAR_5->speed < VAR_3 || !VAR_5->bind
   || !VAR_5->disconnect || !VAR_5->setup)
  return -VAR_1;
 if (!VAR_6)
  return -VAR_2;
 if (VAR_6->driver)
  return -VAR_0;


 VAR_6->driver = VAR_5;
 VAR_6->gadget.dev.driver = &VAR_5->driver;
 FUNC_4(VAR_6, 1);

 VAR_7 = FUNC_2(&VAR_6->gadget.dev);
 if (VAR_7) {
  FUNC_1(VAR_6->dev, "device_add error %d\n", VAR_7);
  goto add_fail;
 }
 VAR_7 = VAR_5->bind(&VAR_6->gadget);
 if (VAR_7) {
  FUNC_1(VAR_6->dev, "bind to driver %s --> error %d\n",
   VAR_5->driver.name, VAR_7);
  goto bind_fail;
 }
 FUNC_0(VAR_6->dev, "registered gadget driver '%s'\n",
  VAR_5->driver.name);

 if (VAR_6->transceiver) {
  VAR_7 = FUNC_5(VAR_6->transceiver, &VAR_6->gadget);
  if (VAR_7) {
   FUNC_1(VAR_6->dev, "can't bind to transceiver\n");
   goto transceiver_fail;
  }
 }

 if (FUNC_6(VAR_6))
  FUNC_9(VAR_6);
 return 0;

transceiver_fail:
 if (VAR_5->unbind)
  VAR_5->unbind(&VAR_6->gadget);
bind_fail:
 FUNC_3(&VAR_6->gadget.dev);
add_fail:
 VAR_6->driver = ((void*)0);
 VAR_6->gadget.dev.driver = ((void*)0);
 return VAR_7;
}
