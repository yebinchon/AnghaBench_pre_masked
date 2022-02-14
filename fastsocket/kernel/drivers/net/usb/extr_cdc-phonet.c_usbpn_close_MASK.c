
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbpn_dev {int active_setting; int usb; struct urb** urbs; TYPE_3__* data_intf; } ;
struct urb {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_4__ {unsigned int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 struct usbpn_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct usbpn_dev *VAR_2 = FUNC_0(VAR_1);
 unsigned VAR_3;
 unsigned VAR_4 = VAR_2->data_intf->cur_altsetting->desc.bInterfaceNumber;

 FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct urb *VAR_5 = VAR_2->urbs[VAR_3];

  if (!VAR_5)
   continue;
  FUNC_3(VAR_5);
  FUNC_2(VAR_5);
  VAR_2->urbs[VAR_3] = ((void*)0);
 }

 return FUNC_4(VAR_2->usb, VAR_4, !VAR_2->active_setting);
}
