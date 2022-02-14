
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct trancevibrator {int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct trancevibrator*) ;
 struct trancevibrator* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_1)
{
 struct trancevibrator *VAR_2;

 VAR_2 = FUNC_2 (VAR_1);
 FUNC_0(&VAR_1->dev, &VAR_0);
 FUNC_4(VAR_1, ((void*)0));
 FUNC_3(VAR_2->udev);
 FUNC_1(VAR_2);
}
