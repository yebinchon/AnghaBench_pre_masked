
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {scalar_t__ outhead; scalar_t__ outtail; int wait; int iofl; int intf; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hid_device*) ;
 struct hid_device* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct usbhid_device *VAR_1)
{
 struct hid_device *VAR_2 = FUNC_3(VAR_1->intf);
 int VAR_3;

 if (!VAR_2)
  return 0;

 if ((VAR_3 = (VAR_1->outhead != VAR_1->outtail))) {
  FUNC_1("Kicking head %d tail %d", VAR_1->outhead, VAR_1->outtail);
  if (FUNC_2(VAR_2)) {
   FUNC_0(VAR_0, &VAR_1->iofl);
   FUNC_4(&VAR_1->wait);
  }
 }
 return VAR_3;
}
