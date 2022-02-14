
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct cypress {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct cypress*) ;
 struct cypress* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_2)
{
 struct cypress *VAR_3;

 VAR_3 = FUNC_3(VAR_2);


 FUNC_1(&VAR_2->dev, &VAR_0);
 FUNC_1(&VAR_2->dev, &VAR_1);


 FUNC_5(VAR_2, ((void*)0));

 FUNC_4(VAR_3->udev);

 FUNC_0(&VAR_2->dev,
   "Cypress CY7C63xxx device now disconnected\n");

 FUNC_2(VAR_3);
}
