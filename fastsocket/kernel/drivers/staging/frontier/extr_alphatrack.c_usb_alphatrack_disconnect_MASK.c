
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int minor; int dev; } ;
struct usb_alphatrack {int writes_pending; int sem; int * intf; int open_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct usb_alphatrack*) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 struct usb_alphatrack* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_3)
{
 struct usb_alphatrack *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_1);

 VAR_4 = FUNC_8(VAR_3);
 FUNC_9(VAR_3, ((void*)0));

 FUNC_2(&VAR_4->sem);

 VAR_5 = VAR_3->minor;


 FUNC_7(VAR_3, &VAR_2);


 if (!VAR_4->open_count) {
  FUNC_5(&VAR_4->sem);
  FUNC_6(VAR_4);
 } else {
  VAR_4->intf = ((void*)0);
  FUNC_5(&VAR_4->sem);
 }

 FUNC_0(&VAR_4->writes_pending, 0);
 FUNC_4(&VAR_1);

 FUNC_1(&VAR_3->dev, "Alphatrack Surface #%d now disconnected\n",
   (VAR_5 - VAR_0));
}
