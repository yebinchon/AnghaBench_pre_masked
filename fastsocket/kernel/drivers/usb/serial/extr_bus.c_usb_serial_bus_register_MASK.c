
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * bus; } ;
struct TYPE_3__ {int list; int lock; } ;
struct usb_serial_driver {TYPE_2__ driver; TYPE_1__ dynids; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

int FUNC_3(struct usb_serial_driver *VAR_1)
{
 int VAR_2;

 VAR_1->driver.bus = &VAR_0;
 FUNC_2(&VAR_1->dynids.lock);
 FUNC_0(&VAR_1->dynids.list);

 VAR_2 = FUNC_1(&VAR_1->driver);

 return VAR_2;
}
