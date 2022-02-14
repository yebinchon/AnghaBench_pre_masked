
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* shared_hcd; int flags; TYPE_2__* driver; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_4__ {scalar_t__ (* irq ) (struct usb_hcd*) ;} ;
struct TYPE_3__ {int flags; } ;


 scalar_t__ FUNC_0 (struct usb_hcd*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_hcd*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct usb_hcd*) ;
 scalar_t__ FUNC_6 (int) ;

irqreturn_t FUNC_7 (int VAR_3, void *VAR_4)
{
 struct usb_hcd *VAR_5 = VAR_4;
 unsigned long VAR_6;
 irqreturn_t VAR_7;





 FUNC_3(VAR_6);

 if (FUNC_6(FUNC_0(VAR_5) || !FUNC_1(VAR_5))) {
  VAR_7 = VAR_2;
 } else if (VAR_5->driver->irq(VAR_5) == VAR_2) {
  VAR_7 = VAR_2;
 } else {
  FUNC_4(VAR_0, &VAR_5->flags);
  if (VAR_5->shared_hcd)
   FUNC_4(VAR_0, &VAR_5->shared_hcd->flags);
  VAR_7 = VAR_1;
 }

 FUNC_2(VAR_6);
 return VAR_7;
}
