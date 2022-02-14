
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int * vdev; int * rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct usb_usbvision *VAR_1)
{

 if (VAR_1->rdev) {
  FUNC_0(VAR_0, "unregister %s [v4l2]",
         FUNC_1(VAR_1->rdev));
  if (FUNC_3(VAR_1->rdev))
   FUNC_4(VAR_1->rdev);
  else
   FUNC_2(VAR_1->rdev);
  VAR_1->rdev = ((void*)0);
 }


 if (VAR_1->vdev) {
  FUNC_0(VAR_0, "unregister %s [v4l2]",
         FUNC_1(VAR_1->vdev));
  if (FUNC_3(VAR_1->vdev))
   FUNC_4(VAR_1->vdev);
  else
   FUNC_2(VAR_1->vdev);
  VAR_1->vdev = ((void*)0);
 }
}
