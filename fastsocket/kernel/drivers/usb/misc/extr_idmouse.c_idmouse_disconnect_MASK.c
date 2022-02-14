
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_idmouse {int lock; int open; scalar_t__ present; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_idmouse*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct usb_idmouse* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_2)
{
 struct usb_idmouse *VAR_3;


 VAR_3 = FUNC_5(VAR_2);


 FUNC_4(VAR_2, &VAR_0);

 FUNC_2(&VAR_1);
 FUNC_6(VAR_2, ((void*)0));

 FUNC_2(&VAR_3->lock);
 FUNC_3(&VAR_1);


 VAR_3->present = 0;


 if (!VAR_3->open) {
  FUNC_3(&VAR_3->lock);
  FUNC_1(VAR_3);
 } else {

  FUNC_3(&VAR_3->lock);
 }

 FUNC_0(&VAR_2->dev, "disconnected\n");
}
