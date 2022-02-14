
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_wwan_intf_private {int susp_lock; int send_setup; } ;
struct usb_serial {struct usb_wwan_intf_private* private; TYPE_3__* interface; TYPE_5__* dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_9__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct TYPE_10__ {TYPE_4__ descriptor; } ;
struct TYPE_8__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_6__ {int bInterfaceClass; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_wwan_intf_private* FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_6,
   const struct usb_device_id *VAR_7)
{
 struct usb_wwan_intf_private *VAR_8;

 if (VAR_6->dev->descriptor.idVendor == VAR_1 &&
  VAR_6->dev->descriptor.idProduct == VAR_0 &&
  VAR_6->interface->cur_altsetting->desc.bInterfaceClass == 0x8)
  return -VAR_2;

 VAR_8 = VAR_6->private = FUNC_0(sizeof(struct usb_wwan_intf_private), VAR_4);
 if (!VAR_8)
  return -VAR_3;
 VAR_8->send_setup = VAR_5;
 FUNC_1(&VAR_8->susp_lock);
 return 0;
}
