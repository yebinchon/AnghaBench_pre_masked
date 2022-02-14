
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {TYPE_1__* intf; } ;
struct hid_device {int open; struct usbhid_device* driver_data; } ;
struct TYPE_3__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(struct hid_device *VAR_2)
{
 struct usbhid_device *VAR_3 = VAR_2->driver_data;
 int VAR_4;

 FUNC_2(&VAR_1);
 if (!VAR_2->open++) {
  VAR_4 = FUNC_4(VAR_3->intf);

  if (VAR_4 < 0) {
   VAR_2->open--;
   FUNC_3(&VAR_1);
   return -VAR_0;
  }
  VAR_3->intf->needs_remote_wakeup = 1;
  if (FUNC_1(VAR_2))
   FUNC_0(VAR_2);

  FUNC_5(VAR_3->intf);
 }
 FUNC_3(&VAR_1);
 return 0;
}
