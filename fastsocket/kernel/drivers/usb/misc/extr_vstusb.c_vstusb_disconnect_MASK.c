
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vstusb_device {int kref; int lock; int submitted; scalar_t__ present; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_interface*,int *) ;
 struct vstusb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_interface*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_2)
{
 struct vstusb_device *VAR_3 = FUNC_4(VAR_2);

 FUNC_3(VAR_2, &VAR_0);
 FUNC_6(VAR_2, ((void*)0));

 if (VAR_3) {

  FUNC_1(&VAR_3->lock);
  VAR_3->present = 0;

  FUNC_5(&VAR_3->submitted);

  FUNC_2(&VAR_3->lock);

  FUNC_0(&VAR_3->kref, VAR_1);
 }

}
