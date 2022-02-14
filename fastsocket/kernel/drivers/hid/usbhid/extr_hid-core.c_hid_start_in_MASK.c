
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int lock; int iofl; int urbin; } ;
struct hid_device {scalar_t__ open; struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0;
 struct usbhid_device *VAR_7 = VAR_4->driver_data;

 FUNC_1(&VAR_7->lock, VAR_5);
 if (VAR_4->open > 0 &&
   !FUNC_4(VAR_1, &VAR_7->iofl) &&
   !FUNC_4(VAR_3, &VAR_7->iofl) &&
   !FUNC_3(VAR_2, &VAR_7->iofl)) {
  VAR_6 = FUNC_5(VAR_7->urbin, VAR_0);
  if (VAR_6 != 0)
   FUNC_0(VAR_2, &VAR_7->iofl);
 }
 FUNC_2(&VAR_7->lock, VAR_5);
 return VAR_6;
}
