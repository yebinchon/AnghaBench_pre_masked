
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct stub_device {int ud; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct stub_device*) ;
 int FUNC_2 (int *) ;
 struct stub_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct stub_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_7("Enter\n");


 if (!VAR_2) {
  FUNC_0(" could not get device from inteface data");

  return;
 }

 FUNC_4(VAR_1, ((void*)0));






 FUNC_2(&VAR_1->dev);


 FUNC_5(&VAR_2->ud, VAR_0);


 FUNC_6(&VAR_2->ud);


 FUNC_1(VAR_2);


 FUNC_7("bye\n");
}
