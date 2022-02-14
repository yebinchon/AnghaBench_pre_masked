
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_sevsegdev {int udev; } ;
struct TYPE_2__ {int kobj; } ;
struct usb_interface {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct usb_sevsegdev*) ;
 int FUNC_2 (int *,int *) ;
 struct usb_sevsegdev* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_1)
{
 struct usb_sevsegdev *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_2(&VAR_1->dev.kobj, &VAR_0);
 FUNC_5(VAR_1, ((void*)0));
 FUNC_4(VAR_2->udev);
 FUNC_1(VAR_2);
 FUNC_0(&VAR_1->dev, "USB 7 Segment now disconnected\n");
}
