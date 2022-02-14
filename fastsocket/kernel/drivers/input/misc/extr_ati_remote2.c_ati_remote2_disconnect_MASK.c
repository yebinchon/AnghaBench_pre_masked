
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {scalar_t__ bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct ati_remote2 {int * intf; TYPE_2__* udev; int idev; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ati_remote2*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ati_remote2*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 struct ati_remote2* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_2)
{
 struct ati_remote2 *VAR_3;
 struct usb_host_interface *VAR_4 = VAR_2->cur_altsetting;

 if (VAR_4->desc.bInterfaceNumber)
  return;

 VAR_3 = FUNC_5(VAR_2);
 FUNC_6(VAR_2, ((void*)0));

 FUNC_1(VAR_3->idev);

 FUNC_3(&VAR_3->udev->dev.kobj, &VAR_0);

 FUNC_0(VAR_3);

 FUNC_4(&VAR_1, VAR_3->intf[1]);

 FUNC_2(VAR_3);
}
