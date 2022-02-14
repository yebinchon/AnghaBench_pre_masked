
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct mdc800_data {scalar_t__ state; int * dev; int io_lock; int download_urb; int write_urb; int irq_urb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct mdc800_data* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8 (struct usb_interface *VAR_2)
{
 struct mdc800_data* VAR_3 = FUNC_5(VAR_2);

 FUNC_0 ("(mdc800_usb_disconnect) called");

 if (VAR_3) {
  if (VAR_3->state == VAR_0)
   return;

  FUNC_4(VAR_2, &VAR_1);



  FUNC_2(&VAR_3->io_lock);
  VAR_3->state=VAR_0;

  FUNC_6(VAR_3->irq_urb);
  FUNC_6(VAR_3->write_urb);
  FUNC_6(VAR_3->download_urb);
  FUNC_3(&VAR_3->io_lock);

  VAR_3->dev = ((void*)0);
  FUNC_7(VAR_2, ((void*)0));
 }
 FUNC_1(&VAR_2->dev, "Mustek MDC800 disconnected from USB.\n");
}
