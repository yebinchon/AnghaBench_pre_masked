
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct usba_udc {int devstatus; scalar_t__ vbus_prev; TYPE_3__ gadget; struct usb_gadget_driver* driver; int lock; int vbus_pin; int hclk; int pclk; int pdev; } ;
struct TYPE_4__ {int name; } ;
struct usb_gadget_driver {int (* bind ) (TYPE_3__*) ;TYPE_1__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_3__*) ;
 struct usba_udc VAR_9 ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct usba_udc*,int ,int ) ;
 scalar_t__ FUNC_10 (struct usba_udc*) ;

int FUNC_11(struct usb_gadget_driver *VAR_10)
{
 struct usba_udc *VAR_11 = &VAR_9;
 unsigned long VAR_12;
 int VAR_13;

 if (!VAR_11->pdev)
  return -VAR_4;

 FUNC_5(&VAR_11->lock, VAR_12);
 if (VAR_11->driver) {
  FUNC_6(&VAR_11->lock, VAR_12);
  return -VAR_3;
 }

 VAR_11->devstatus = 1 << VAR_8;
 VAR_11->driver = VAR_10;
 VAR_11->gadget.dev.driver = &VAR_10->driver;
 FUNC_6(&VAR_11->lock, VAR_12);

 FUNC_1(VAR_11->pclk);
 FUNC_1(VAR_11->hclk);

 VAR_13 = VAR_10->bind(&VAR_11->gadget);
 if (VAR_13) {
  FUNC_0(VAR_1, "Could not bind to driver %s: error %d\n",
   VAR_10->driver.name, VAR_13);
  goto err_driver_bind;
 }

 FUNC_0(VAR_2, "registered driver `%s'\n", VAR_10->driver.name);

 VAR_11->vbus_prev = 0;
 if (FUNC_3(VAR_11->vbus_pin))
  FUNC_2(FUNC_4(VAR_11->vbus_pin));


 FUNC_5(&VAR_11->lock, VAR_12);
 if (FUNC_10(VAR_11) && VAR_11->vbus_prev == 0) {
  FUNC_8(1);
  FUNC_9(VAR_11, VAR_0, VAR_6);
  FUNC_9(VAR_11, VAR_5, VAR_7);
 }
 FUNC_6(&VAR_11->lock, VAR_12);

 return 0;

err_driver_bind:
 VAR_11->driver = ((void*)0);
 VAR_11->gadget.dev.driver = ((void*)0);
 return VAR_13;
}
