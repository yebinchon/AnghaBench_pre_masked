
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct iowarrior {int minor; int write_wait; int read_wait; int int_in_urb; scalar_t__ opened; int mutex; scalar_t__ present; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct iowarrior*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct iowarrior* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_3)
{
 struct iowarrior *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_3);
 FUNC_2(&VAR_2);
 FUNC_7(VAR_3, ((void*)0));

 VAR_5 = VAR_4->minor;


 FUNC_4(VAR_3, &VAR_1);

 FUNC_2(&VAR_4->mutex);


 VAR_4->present = 0;

 FUNC_3(&VAR_4->mutex);
 FUNC_3(&VAR_2);

 if (VAR_4->opened) {




  FUNC_6(VAR_4->int_in_urb);
  FUNC_8(&VAR_4->read_wait);
  FUNC_8(&VAR_4->write_wait);
 } else {

  FUNC_1(VAR_4);
 }

 FUNC_0(&VAR_3->dev, "I/O-Warror #%d now disconnected\n",
   VAR_5 - VAR_0);
}
