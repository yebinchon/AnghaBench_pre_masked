
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_tranzport {int sem; int * intf; int open_count; } ;
struct usb_interface {int minor; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 struct usb_tranzport* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int VAR_2 ;
 int FUNC_8 (struct usb_tranzport*) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_3)
{
 struct usb_tranzport *VAR_4;
 int VAR_5;
 FUNC_2(&VAR_1);
 VAR_4 = FUNC_6(VAR_3);
 FUNC_7(VAR_3, ((void*)0));
 FUNC_1(&VAR_4->sem);
 VAR_5 = VAR_3->minor;

 FUNC_5(VAR_3, &VAR_2);


 if (!VAR_4->open_count) {
  FUNC_4(&VAR_4->sem);
  FUNC_8(VAR_4);
 } else {
  VAR_4->intf = ((void*)0);
  FUNC_4(&VAR_4->sem);
 }

 FUNC_3(&VAR_1);

 FUNC_0(&VAR_3->dev, "Tranzport Surface #%d now disconnected\n",
  (VAR_5 - VAR_0));
}
