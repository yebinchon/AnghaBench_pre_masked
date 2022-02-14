
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int speed; } ;
struct usba_udc {int vbus_prev; int lock; TYPE_2__ gadget; TYPE_1__* driver; int vbus_pin; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int (* disconnect ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usba_udc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct usba_udc*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct usba_udc *VAR_9 = VAR_8;
 int VAR_10;


 FUNC_6(10);

 FUNC_2(&VAR_9->lock);


 if (!VAR_9->driver)
  goto out;

 VAR_10 = FUNC_0(VAR_9->vbus_pin);
 if (VAR_10 != VAR_9->vbus_prev) {
  if (VAR_10) {
   FUNC_5(1);
   FUNC_7(VAR_9, VAR_0, VAR_4);
   FUNC_7(VAR_9, VAR_1, VAR_5);
  } else {
   VAR_9->gadget.speed = VAR_6;
   FUNC_1(VAR_9);
   FUNC_5(0);
   FUNC_7(VAR_9, VAR_0, VAR_3);
   if (VAR_9->driver->disconnect) {
    FUNC_3(&VAR_9->lock);
    VAR_9->driver->disconnect(&VAR_9->gadget);
    FUNC_2(&VAR_9->lock);
   }
  }
  VAR_9->vbus_prev = VAR_10;
 }

out:
 FUNC_3(&VAR_9->lock);

 return VAR_2;
}
