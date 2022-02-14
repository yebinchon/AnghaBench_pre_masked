
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int * vdev; int * vbi_dev; int * radio_dev; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct em28xx *VAR_0)
{



 if (VAR_0->radio_dev) {
  if (FUNC_3(VAR_0->radio_dev))
   FUNC_4(VAR_0->radio_dev);
  else
   FUNC_2(VAR_0->radio_dev);
  VAR_0->radio_dev = ((void*)0);
 }
 if (VAR_0->vbi_dev) {
  FUNC_0("V4L2 device %s deregistered\n",
       FUNC_1(VAR_0->vbi_dev));
  if (FUNC_3(VAR_0->vbi_dev))
   FUNC_4(VAR_0->vbi_dev);
  else
   FUNC_2(VAR_0->vbi_dev);
  VAR_0->vbi_dev = ((void*)0);
 }
 if (VAR_0->vdev) {
  FUNC_0("V4L2 device %s deregistered\n",
       FUNC_1(VAR_0->vdev));
  if (FUNC_3(VAR_0->vdev))
   FUNC_4(VAR_0->vdev);
  else
   FUNC_2(VAR_0->vdev);
  VAR_0->vdev = ((void*)0);
 }
}
