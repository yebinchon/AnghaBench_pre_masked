
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ds_device {int udev; int ds_entry; } ;


 int VAR_0 ;
 int FUNC_0 (struct ds_device*) ;
 int FUNC_1 (struct ds_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ds_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct ds_device *VAR_2;

 VAR_2 = FUNC_5(VAR_1);
 if (!VAR_2)
  return;

 FUNC_3(&VAR_0);
 FUNC_2(&VAR_2->ds_entry);
 FUNC_4(&VAR_0);

 FUNC_0(VAR_2);

 FUNC_7(VAR_1, ((void*)0));

 FUNC_6(VAR_2->udev);
 FUNC_1(VAR_2);
}
