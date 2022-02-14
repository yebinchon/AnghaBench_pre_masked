
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct usb_gadget_driver {TYPE_3__ driver; int (* unbind ) (TYPE_4__*) ;} ;
struct TYPE_6__ {int * driver; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;
struct net2280 {TYPE_2__* pdev; struct usb_gadget_driver* driver; TYPE_4__ gadget; int lock; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (struct net2280*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct net2280*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct net2280*,struct usb_gadget_driver*) ;
 int FUNC_7 (TYPE_4__*) ;
 struct net2280* VAR_4 ;

int FUNC_8 (struct usb_gadget_driver *VAR_5)
{
 struct net2280 *VAR_6 = VAR_4;
 unsigned long VAR_7;

 if (!VAR_6)
  return -VAR_1;
 if (!VAR_5 || VAR_5 != VAR_6->driver || !VAR_5->unbind)
  return -VAR_0;

 FUNC_4 (&VAR_6->lock, VAR_7);
 FUNC_6 (VAR_6, VAR_5);
 FUNC_5 (&VAR_6->lock, VAR_7);

 FUNC_3 (&VAR_6->gadget, 0);

 VAR_5->unbind (&VAR_6->gadget);
 VAR_6->gadget.dev.driver = ((void*)0);
 VAR_6->driver = ((void*)0);

 FUNC_2 (VAR_6, 0);
 FUNC_1 (&VAR_6->pdev->dev, &VAR_2);
 FUNC_1 (&VAR_6->pdev->dev, &VAR_3);

 FUNC_0 (VAR_6, "unregistered driver '%s'\n", VAR_5->driver.name);
 return 0;
}
