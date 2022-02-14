
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct input_dev {int dummy; } ;
struct gspca_dev {int vdev; int usb_lock; int * dev; struct input_dev* input_dev; int wq; scalar_t__ present; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct gspca_dev* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct usb_interface *VAR_1)
{
 struct gspca_dev *VAR_2 = FUNC_6(VAR_1);




 FUNC_0(VAR_0, "%s disconnect",
  FUNC_8(&VAR_2->vdev));
 FUNC_4(&VAR_2->usb_lock);

 VAR_2->present = 0;
 FUNC_10(&VAR_2->wq);

 FUNC_1(VAR_2);
 VAR_2->dev = ((void*)0);
 FUNC_5(&VAR_2->usb_lock);

 FUNC_7(VAR_1, ((void*)0));



 FUNC_9(&VAR_2->vdev);


}
