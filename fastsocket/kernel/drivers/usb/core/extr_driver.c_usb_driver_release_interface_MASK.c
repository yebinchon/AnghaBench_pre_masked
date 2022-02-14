
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int sem; int * driver; } ;
struct usb_interface {scalar_t__ condition; struct device dev; } ;
struct TYPE_2__ {int driver; } ;
struct usb_driver {TYPE_1__ drvwrap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;

void FUNC_5(struct usb_driver *VAR_2,
     struct usb_interface *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;


 if (!VAR_4->driver || VAR_4->driver != &VAR_2->drvwrap.driver)
  return;


 if (VAR_3->condition != VAR_0)
  return;
 VAR_3->condition = VAR_1;




 if (FUNC_0(VAR_4)) {
  FUNC_1(VAR_4);
 } else {
  FUNC_2(&VAR_4->sem);
  FUNC_4(VAR_4);
  VAR_4->driver = ((void*)0);
  FUNC_3(&VAR_4->sem);
 }
}
