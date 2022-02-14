
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct usb_gadget_driver {int (* unbind ) (TYPE_3__*) ;TYPE_1__ driver; } ;
struct TYPE_5__ {int * driver; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct dummy {int lock; scalar_t__ pullup; struct usb_gadget_driver* driver; TYPE_3__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dummy*) ;
 int FUNC_2 (struct dummy*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_3__*) ;
 struct dummy* VAR_2 ;
 int FUNC_6 (struct dummy*) ;
 int FUNC_7 (int ) ;

int
FUNC_8 (struct usb_gadget_driver *VAR_3)
{
 struct dummy *VAR_4 = VAR_2;
 unsigned long VAR_5;

 if (!VAR_4)
  return -VAR_1;
 if (!VAR_3 || VAR_3 != VAR_4->driver || !VAR_3->unbind)
  return -VAR_0;

 FUNC_0 (FUNC_6(VAR_4), "unregister gadget driver '%s'\n",
   VAR_3->driver.name);

 FUNC_3 (&VAR_4->lock, VAR_5);
 VAR_4->pullup = 0;
 FUNC_2 (VAR_4);
 FUNC_4 (&VAR_4->lock, VAR_5);

 VAR_3->unbind (&VAR_4->gadget);
 VAR_4->gadget.dev.driver = ((void*)0);
 VAR_4->driver = ((void*)0);

 FUNC_3 (&VAR_4->lock, VAR_5);
 VAR_4->pullup = 0;
 FUNC_2 (VAR_4);
 FUNC_4 (&VAR_4->lock, VAR_5);

 FUNC_7 (FUNC_1 (VAR_4));
 return 0;
}
