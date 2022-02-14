
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
struct usb_gadget_driver {TYPE_2__ driver; int (* unbind ) (TYPE_5__*) ;} ;
struct TYPE_8__ {int * driver; } ;
struct TYPE_11__ {TYPE_1__ dev; } ;
struct TYPE_10__ {int * dc_clk; struct usb_gadget_driver* driver; TYPE_5__ gadget; int lock; scalar_t__ transceiver; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_9 (TYPE_3__*) ;

int FUNC_10 (struct usb_gadget_driver *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = -VAR_1;

 if (!VAR_2)
  return -VAR_1;
 if (!VAR_3 || VAR_3 != VAR_2->driver || !VAR_3->unbind)
  return -VAR_0;

 if (VAR_2->dc_clk != ((void*)0))
  FUNC_2(1);

 if (FUNC_1())
  FUNC_3(&VAR_2->gadget, 0);

 if (VAR_2->transceiver)
  (void) FUNC_4(VAR_2->transceiver, ((void*)0));
 else
  FUNC_5(VAR_2);

 FUNC_6(&VAR_2->lock, VAR_4);
 FUNC_9(VAR_2);
 FUNC_7(&VAR_2->lock, VAR_4);

 VAR_3->unbind(&VAR_2->gadget);
 VAR_2->gadget.dev.driver = ((void*)0);
 VAR_2->driver = ((void*)0);

 if (VAR_2->dc_clk != ((void*)0))
  FUNC_2(0);
 FUNC_0("unregistered driver '%s'\n", VAR_3->driver.name);
 return VAR_5;
}
