
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int name; int * bus; } ;
struct usb_gadget_driver {scalar_t__ speed; int (* bind ) (TYPE_6__*) ;int (* unbind ) (TYPE_6__*) ;TYPE_4__ driver; int setup; } ;
struct TYPE_12__ {TYPE_4__* driver; } ;
struct TYPE_13__ {TYPE_5__ dev; } ;
struct net2280 {int softconnect; struct usb_gadget_driver* driver; TYPE_6__ gadget; TYPE_3__* pdev; TYPE_2__* usb; TYPE_1__* ep; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int stdrsp; int usbctl; } ;
struct TYPE_8__ {scalar_t__ irqs; } ;


 int FUNC_0 (struct net2280*,char*,int ,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct net2280*) ;
 int FUNC_4 (struct net2280*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 struct net2280* VAR_6 ;

int FUNC_8 (struct usb_gadget_driver *VAR_7)
{
 struct net2280 *VAR_8 = VAR_6;
 int VAR_9;
 unsigned VAR_10;





 if (!VAR_7
   || VAR_7->speed != VAR_3
   || !VAR_7->bind
   || !VAR_7->setup)
  return -VAR_1;
 if (!VAR_8)
  return -VAR_2;
 if (VAR_8->driver)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < 7; VAR_10++)
  VAR_8->ep [VAR_10].irqs = 0;


 VAR_8->softconnect = 1;
 VAR_7->driver.bus = ((void*)0);
 VAR_8->driver = VAR_7;
 VAR_8->gadget.dev.driver = &VAR_7->driver;
 VAR_9 = VAR_7->bind (&VAR_8->gadget);
 if (VAR_9) {
  FUNC_0 (VAR_8, "bind to driver %s --> %d\n",
    VAR_7->driver.name, VAR_9);
  VAR_8->driver = ((void*)0);
  VAR_8->gadget.dev.driver = ((void*)0);
  return VAR_9;
 }

 VAR_9 = FUNC_1 (&VAR_8->pdev->dev, &VAR_4);
 if (VAR_9) goto err_unbind;
 VAR_9 = FUNC_1 (&VAR_8->pdev->dev, &VAR_5);
 if (VAR_9) goto err_func;




 FUNC_4 (VAR_8, 1);
 FUNC_3 (VAR_8);

 FUNC_0 (VAR_8, "%s ready, usbctl %08x stdrsp %08x\n",
   VAR_7->driver.name,
   FUNC_5 (&VAR_8->usb->usbctl),
   FUNC_5 (&VAR_8->usb->stdrsp));


 return 0;

err_func:
 FUNC_2 (&VAR_8->pdev->dev, &VAR_4);
err_unbind:
 VAR_7->unbind (&VAR_8->gadget);
 VAR_8->gadget.dev.driver = ((void*)0);
 VAR_8->driver = ((void*)0);
 return VAR_9;
}
