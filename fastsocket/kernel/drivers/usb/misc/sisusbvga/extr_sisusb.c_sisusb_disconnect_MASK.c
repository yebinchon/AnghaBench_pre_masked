
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct sisusb_usb_data {int kref; int lock; scalar_t__ ready; scalar_t__ present; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sisusb_usb_data*) ;
 int VAR_0 ;
 int FUNC_4 (struct sisusb_usb_data*) ;
 int FUNC_5 (struct sisusb_usb_data*) ;
 int FUNC_6 (struct usb_interface*,int *) ;
 struct sisusb_usb_data* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usb_interface*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_2)
{
 struct sisusb_usb_data *VAR_3;


 if (!(VAR_3 = FUNC_7(VAR_2)))
  return;





 FUNC_6(VAR_2, &VAR_1);

 FUNC_1(&VAR_3->lock);


 if (!FUNC_5(VAR_3))
  FUNC_4(VAR_3);

 FUNC_8(VAR_2, ((void*)0));

 VAR_3->present = 0;
 VAR_3->ready = 0;

 FUNC_2(&VAR_3->lock);


 FUNC_0(&VAR_3->kref, VAR_0);
}
