
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct usb_device* root_hub; int controller; } ;
struct usb_hcd {scalar_t__ irq; TYPE_3__ self; int rh_timer; int flags; int state; TYPE_2__* driver; int wakeup_work; scalar_t__ rh_registered; } ;
struct TYPE_4__ {int kobj; } ;
struct usb_device {TYPE_1__ dev; } ;
struct TYPE_5__ {int (* stop ) (struct usb_hcd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (scalar_t__,struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct usb_hcd*) ;
 int FUNC_13 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct usb_device**) ;
 int FUNC_16 (struct usb_device*) ;
 scalar_t__ FUNC_17 (struct usb_hcd*) ;
 int FUNC_18 (struct usb_device*) ;

void FUNC_19(struct usb_hcd *VAR_8)
{
 struct usb_device *VAR_9 = VAR_8->self.root_hub;

 FUNC_5(VAR_8->self.controller, "remove, state %x\n", VAR_8->state);

 FUNC_16(VAR_9);
 FUNC_13(&VAR_9->dev.kobj, &VAR_6);

 FUNC_2(VAR_2, &VAR_8->flags);
 if (FUNC_0 (VAR_8->state))
  VAR_8->state = VAR_4;

 FUNC_4(VAR_8->self.controller, "roothub graceful disconnect\n");
 FUNC_10 (&VAR_5);
 VAR_8->rh_registered = 0;
 FUNC_11 (&VAR_5);




 FUNC_8(&VAR_7);
 FUNC_15(&VAR_9);
 FUNC_9(&VAR_7);






 FUNC_2(VAR_1, &VAR_8->flags);
 FUNC_2(VAR_0, &VAR_8->flags);
 FUNC_3(&VAR_8->rh_timer);

 VAR_8->driver->stop(VAR_8);
 VAR_8->state = VAR_3;


 FUNC_2(VAR_0, &VAR_8->flags);
 FUNC_3(&VAR_8->rh_timer);

 if (FUNC_17(VAR_8)) {
  if (VAR_8->irq >= 0)
   FUNC_6(VAR_8->irq, VAR_8);
 }

 FUNC_18(VAR_8->self.root_hub);
 FUNC_14(&VAR_8->self);
 FUNC_7(VAR_8);
}
