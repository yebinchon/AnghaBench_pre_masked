
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int plock; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (int *) ;
 struct wdm_device* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0)
{
 struct wdm_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->plock);
 return 0;
}
