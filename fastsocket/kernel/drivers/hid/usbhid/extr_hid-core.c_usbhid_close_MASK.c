
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {int lock; TYPE_1__* intf; int urbin; } ;
struct hid_device {int open; struct usbhid_device* driver_data; } ;
struct TYPE_2__ {scalar_t__ needs_remote_wakeup; } ;


 int FUNC_0 (struct usbhid_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct hid_device *VAR_1)
{
 struct usbhid_device *VAR_2 = VAR_1->driver_data;

 FUNC_1(&VAR_0);





 FUNC_3(&VAR_2->lock);
 if (!--VAR_1->open) {
  FUNC_4(&VAR_2->lock);
  FUNC_0(VAR_2);
  FUNC_5(VAR_2->urbin);
  VAR_2->intf->needs_remote_wakeup = 0;
 } else {
  FUNC_4(&VAR_2->lock);
 }
 FUNC_2(&VAR_0);
}
