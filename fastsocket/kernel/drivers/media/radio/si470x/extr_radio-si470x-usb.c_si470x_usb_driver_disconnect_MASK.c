
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct si470x_device {int disconnected; scalar_t__ users; int disconnect_lock; struct si470x_device* buffer; int videodev; struct si470x_device* int_in_buffer; int int_in_urb; } ;


 int VAR_0 ;
 int FUNC_0 (struct si470x_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct si470x_device*,int ) ;
 int FUNC_4 (int ) ;
 struct si470x_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct si470x_device *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(&VAR_2->disconnect_lock);
 VAR_2->disconnected = 1;
 FUNC_6(VAR_1, ((void*)0));
 if (VAR_2->users == 0) {

  FUNC_3(VAR_2, VAR_0);


  FUNC_4(VAR_2->int_in_urb);

  FUNC_0(VAR_2->int_in_buffer);
  FUNC_7(VAR_2->videodev);
  FUNC_0(VAR_2->buffer);
  FUNC_0(VAR_2);
 }
 FUNC_2(&VAR_2->disconnect_lock);
}
