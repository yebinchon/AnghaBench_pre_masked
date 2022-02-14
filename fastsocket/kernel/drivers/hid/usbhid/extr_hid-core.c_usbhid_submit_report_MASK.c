
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int lock; } ;
struct hid_report {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int FUNC_0 (struct hid_device*,struct hid_report*,unsigned char) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct hid_device *VAR_0, struct hid_report *VAR_1, unsigned char VAR_2)
{
 struct usbhid_device *VAR_3 = VAR_0->driver_data;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock, VAR_4);
}
