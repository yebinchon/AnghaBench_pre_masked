
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int * urbout; int * urbctrl; int * urbin; int lock; int iofl; } ;
struct hid_device {scalar_t__ claimed; struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct usbhid_device*) ;
 int FUNC_3 (int ,struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct hid_device *VAR_2)
{
 struct usbhid_device *VAR_3 = VAR_2->driver_data;

 if (FUNC_0(!VAR_3))
  return;

 FUNC_1(VAR_1, &VAR_3->iofl);
 FUNC_6(&VAR_3->lock);
 FUNC_5(VAR_0, &VAR_3->iofl);
 FUNC_7(&VAR_3->lock);
 FUNC_9(VAR_3->urbin);
 FUNC_9(VAR_3->urbout);
 FUNC_9(VAR_3->urbctrl);

 FUNC_2(VAR_3);

 VAR_2->claimed = 0;

 FUNC_8(VAR_3->urbin);
 FUNC_8(VAR_3->urbctrl);
 FUNC_8(VAR_3->urbout);
 VAR_3->urbin = ((void*)0);
 VAR_3->urbctrl = ((void*)0);
 VAR_3->urbout = ((void*)0);

 FUNC_3(FUNC_4(VAR_2), VAR_2);
}
