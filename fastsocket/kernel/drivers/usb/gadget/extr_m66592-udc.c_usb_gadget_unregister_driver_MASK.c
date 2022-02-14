
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget_driver {int (* unbind ) (TYPE_1__*) ;} ;
struct TYPE_4__ {int * driver; } ;
struct TYPE_3__ {scalar_t__ speed; TYPE_2__ dev; } ;
struct m66592 {struct usb_gadget_driver* driver; TYPE_1__ gadget; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct m66592*) ;
 int FUNC_2 (struct m66592*) ;
 int FUNC_3 (struct m66592*,int,int ) ;
 int FUNC_4 (struct m66592*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_1__*) ;
 struct m66592* VAR_5 ;

int FUNC_8(struct usb_gadget_driver *VAR_6)
{
 struct m66592 *VAR_7 = VAR_5;
 unsigned long VAR_8;

 if (VAR_6 != VAR_7->driver || !VAR_6->unbind)
  return -VAR_0;

 FUNC_5(&VAR_7->lock, VAR_8);
 if (VAR_7->gadget.speed != VAR_4)
  FUNC_4(VAR_7);
 FUNC_6(&VAR_7->lock, VAR_8);

 FUNC_3(VAR_7, VAR_3 | VAR_2, VAR_1);

 VAR_6->unbind(&VAR_7->gadget);
 VAR_7->gadget.dev.driver = ((void*)0);

 FUNC_2(VAR_7);
 FUNC_1(VAR_7);

 FUNC_0(&VAR_7->gadget.dev);
 VAR_7->driver = ((void*)0);
 return 0;
}
