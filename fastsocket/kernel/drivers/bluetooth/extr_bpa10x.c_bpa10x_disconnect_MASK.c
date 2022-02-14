
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct bpa10x_data {int hdev; } ;


 int FUNC_0 (char*,struct usb_interface*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct bpa10x_data* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct bpa10x_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_0("intf %p", VAR_0);

 if (!VAR_1)
  return;

 FUNC_4(VAR_0, ((void*)0));

 FUNC_2(VAR_1->hdev);

 FUNC_1(VAR_1->hdev);
}
