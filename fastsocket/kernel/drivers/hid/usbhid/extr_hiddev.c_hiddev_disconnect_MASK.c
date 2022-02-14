
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {int intf; } ;
struct hiddev {int wait; TYPE_1__* hid; scalar_t__ open; int existancelock; scalar_t__ exist; } ;
struct hid_device {struct usbhid_device* driver_data; struct hiddev* hiddev; } ;
struct TYPE_2__ {size_t minor; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (struct hiddev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct hid_device *VAR_3)
{
 struct hiddev *VAR_4 = VAR_3->hiddev;
 struct usbhid_device *VAR_5 = VAR_3->driver_data;

 FUNC_1(&VAR_4->existancelock);
 VAR_4->exist = 0;
 FUNC_2(&VAR_4->existancelock);

 VAR_2[VAR_4->hid->minor - VAR_0] = ((void*)0);
 FUNC_3(VAR_5->intf, &VAR_1);

 if (VAR_4->open) {
  FUNC_4(VAR_4->hid);
  FUNC_5(&VAR_4->wait);
 } else {
  FUNC_0(VAR_4);
 }
}
