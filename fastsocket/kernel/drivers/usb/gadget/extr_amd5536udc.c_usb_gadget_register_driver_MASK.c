
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int name; int * bus; } ;
struct usb_gadget_driver {int (* bind ) (TYPE_6__*) ;scalar_t__ speed; TYPE_3__ driver; int setup; } ;
struct TYPE_10__ {TYPE_3__* driver; } ;
struct TYPE_12__ {TYPE_4__ dev; } ;
struct udc {TYPE_5__* regs; TYPE_6__ gadget; struct usb_gadget_driver* driver; TYPE_2__* ep; } ;
struct TYPE_11__ {int ctl; } ;
struct TYPE_7__ {int driver_data; } ;
struct TYPE_8__ {TYPE_1__ ep; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct udc*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct udc*) ;
 int FUNC_4 (TYPE_6__*) ;
 struct udc* VAR_7 ;
 int FUNC_5 (struct udc*) ;
 int FUNC_6 (int,int *) ;

int FUNC_7(struct usb_gadget_driver *VAR_8)
{
 struct udc *VAR_9 = VAR_7;
 int VAR_10;
 u32 VAR_11;

 if (!VAR_8 || !VAR_8->bind || !VAR_8->setup
   || VAR_8->speed != VAR_6)
  return -VAR_1;
 if (!VAR_9)
  return -VAR_2;
 if (VAR_9->driver)
  return -VAR_0;

 VAR_8->driver.bus = ((void*)0);
 VAR_9->driver = VAR_8;
 VAR_9->gadget.dev.driver = &VAR_8->driver;

 VAR_10 = VAR_8->bind(&VAR_9->gadget);




 VAR_9->ep[VAR_5].ep.driver_data =
  VAR_9->ep[VAR_4].ep.driver_data;

 if (VAR_10) {
  FUNC_1(VAR_9, "binding to %s returning %d\n",
    VAR_8->driver.name, VAR_10);
  VAR_9->driver = ((void*)0);
  VAR_9->gadget.dev.driver = ((void*)0);
  return VAR_10;
 }


 FUNC_3(VAR_9);


 VAR_11 = FUNC_2(&VAR_9->regs->ctl);
 VAR_11 = VAR_11 & FUNC_0(VAR_3);
 FUNC_6(VAR_11, &VAR_9->regs->ctl);

 FUNC_5(VAR_9);

 return 0;
}
