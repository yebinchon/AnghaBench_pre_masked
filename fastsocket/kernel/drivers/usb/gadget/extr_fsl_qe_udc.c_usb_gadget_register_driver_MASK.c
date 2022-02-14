
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int name; int * bus; } ;
struct usb_gadget_driver {scalar_t__ speed; int (* bind ) (TYPE_5__*) ;TYPE_3__ driver; int setup; int disconnect; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_6__ {TYPE_3__* driver; } ;
struct TYPE_10__ {int speed; int name; TYPE_1__ dev; } ;
struct TYPE_9__ {TYPE_5__ gadget; int dev; int ep0_dir; int ep0_state; int usb_state; TYPE_2__* usb_regs; struct usb_gadget_driver* driver; int lock; } ;
struct TYPE_7__ {int usb_usbmr; int usb_usber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_4__* VAR_9 ;

int FUNC_7(struct usb_gadget_driver *VAR_10)
{
 int VAR_11;
 unsigned long VAR_12 = 0;


 if (!VAR_9)
  return -VAR_2;

 if (!VAR_10 || (VAR_10->speed != VAR_5
   && VAR_10->speed != VAR_6)
   || !VAR_10->bind || !VAR_10->disconnect
   || !VAR_10->setup)
  return -VAR_1;

 if (VAR_9->driver)
  return -VAR_0;


 FUNC_4(&VAR_9->lock, VAR_12);

 VAR_10->driver.bus = ((void*)0);

 VAR_9->driver = VAR_10;
 VAR_9->gadget.dev.driver = &VAR_10->driver;
 VAR_9->gadget.speed = (enum usb_device_speed)(VAR_10->speed);
 FUNC_5(&VAR_9->lock, VAR_12);

 VAR_11 = VAR_10->bind(&VAR_9->gadget);
 if (VAR_11) {
  FUNC_0(VAR_9->dev, "bind to %s --> %d",
    VAR_10->driver.name, VAR_11);
  VAR_9->gadget.dev.driver = ((void*)0);
  VAR_9->driver = ((void*)0);
  return VAR_11;
 }


 FUNC_3();

 FUNC_2(&VAR_9->usb_regs->usb_usber, 0xffff);
 FUNC_2(&VAR_9->usb_regs->usb_usbmr, VAR_4);
 VAR_9->usb_state = VAR_7;
 VAR_9->ep0_state = VAR_8;
 VAR_9->ep0_dir = VAR_3;
 FUNC_1(VAR_9->dev, "%s bind to driver %s \n",
  VAR_9->gadget.name, VAR_10->driver.name);
 return 0;
}
