
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx {scalar_t__ model; int * vdev; int * vbi_dev; int * radio_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct cx231xx *VAR_1)
{



 if (VAR_1->radio_dev) {
  if (FUNC_4(VAR_1->radio_dev))
   FUNC_5(VAR_1->radio_dev);
  else
   FUNC_3(VAR_1->radio_dev);
  VAR_1->radio_dev = ((void*)0);
 }
 if (VAR_1->vbi_dev) {
  FUNC_1("V4L2 device %s deregistered\n",
        FUNC_2(VAR_1->vbi_dev));
  if (FUNC_4(VAR_1->vbi_dev))
   FUNC_5(VAR_1->vbi_dev);
  else
   FUNC_3(VAR_1->vbi_dev);
  VAR_1->vbi_dev = ((void*)0);
 }
 if (VAR_1->vdev) {
  FUNC_1("V4L2 device %s deregistered\n",
        FUNC_2(VAR_1->vdev));

  if (VAR_1->model == VAR_0)
   FUNC_0(VAR_1);

  if (FUNC_4(VAR_1->vdev))
   FUNC_5(VAR_1->vdev);
  else
   FUNC_3(VAR_1->vdev);
  VAR_1->vdev = ((void*)0);
 }
}
