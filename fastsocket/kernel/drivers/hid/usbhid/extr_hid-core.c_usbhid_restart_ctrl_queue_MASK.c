
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {scalar_t__ ctrlhead; scalar_t__ ctrltail; int wait; int iofl; int intf; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct hid_device*) ;
 struct hid_device* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct usbhid_device *VAR_1)
{
 struct hid_device *VAR_2 = FUNC_4(VAR_1->intf);
 int VAR_3;

 FUNC_0(VAR_2 == ((void*)0));
 if (!VAR_2)
  return 0;

 if ((VAR_3 = (VAR_1->ctrlhead != VAR_1->ctrltail))) {
  FUNC_2("Kicking head %d tail %d", VAR_1->ctrlhead, VAR_1->ctrltail);
  if (FUNC_3(VAR_2)) {
   FUNC_1(VAR_0, &VAR_1->iofl);
   FUNC_5(&VAR_1->wait);
  }
 }
 return VAR_3;
}
