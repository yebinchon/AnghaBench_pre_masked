
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int *,struct usb_interface*) ;
 int FUNC_1 (struct usb_interface*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (struct usb_device *VAR_1, struct usb_interface *VAR_2, int VAR_3)
{
 if (VAR_3) {
  FUNC_1(VAR_2, ((void*)0));
  FUNC_0(&VAR_0, VAR_2);
 }
}
