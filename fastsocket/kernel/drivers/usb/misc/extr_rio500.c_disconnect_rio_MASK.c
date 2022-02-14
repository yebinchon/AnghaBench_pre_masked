
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct rio_usb_data {int lock; scalar_t__ present; int obuf; int ibuf; int * rio_dev; scalar_t__ isopen; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct rio_usb_data* FUNC_5 (struct usb_interface*) ;
 int VAR_0 ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct rio_usb_data *VAR_2 = FUNC_5 (VAR_1);

 FUNC_6 (VAR_1, ((void*)0));
 if (VAR_2) {
  FUNC_4(VAR_1, &VAR_0);

  FUNC_2(&(VAR_2->lock));
  if (VAR_2->isopen) {
   VAR_2->isopen = 0;

   VAR_2->rio_dev = ((void*)0);
   FUNC_3(&(VAR_2->lock));
   return;
  }
  FUNC_1(VAR_2->ibuf);
  FUNC_1(VAR_2->obuf);

  FUNC_0(&VAR_1->dev, "USB Rio disconnected.\n");

  VAR_2->present = 0;
  FUNC_3(&(VAR_2->lock));
 }
}
