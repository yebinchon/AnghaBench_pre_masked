
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_cytherm {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct usb_cytherm*) ;
 struct usb_cytherm* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_5)
{
 struct usb_cytherm *VAR_6;

 VAR_6 = FUNC_3 (VAR_5);

 FUNC_1(&VAR_5->dev, &VAR_0);
 FUNC_1(&VAR_5->dev, &VAR_4);
 FUNC_1(&VAR_5->dev, &VAR_1);
 FUNC_1(&VAR_5->dev, &VAR_2);
 FUNC_1(&VAR_5->dev, &VAR_3);


 FUNC_5 (VAR_5, ((void*)0));

 FUNC_4(VAR_6->udev);

 FUNC_2(VAR_6);

 FUNC_0(&VAR_5->dev, "Cypress thermometer now disconnected\n");
}
