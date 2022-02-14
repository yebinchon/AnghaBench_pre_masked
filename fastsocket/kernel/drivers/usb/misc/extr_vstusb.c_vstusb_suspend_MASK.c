
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vstusb_device {int lock; int submitted; } ;
struct usb_interface {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vstusb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct vstusb_device *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;
 if (!VAR_2)
  return 0;

 FUNC_0(&VAR_2->lock);
 VAR_3 = FUNC_4(&VAR_2->submitted, 1000);
 if (!VAR_3)
  FUNC_3(&VAR_2->submitted);
 FUNC_1(&VAR_2->lock);

 return 0;
}
