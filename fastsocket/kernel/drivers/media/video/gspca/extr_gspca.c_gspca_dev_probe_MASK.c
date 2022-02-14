
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int idProduct; int idVendor; } ;
struct TYPE_8__ {int bNumConfigurations; } ;
struct usb_device {TYPE_4__* config; TYPE_3__ descriptor; } ;
struct sd_desc {int dummy; } ;
struct module {int dummy; } ;
struct TYPE_10__ {int bNumInterfaces; } ;
struct TYPE_9__ {TYPE_5__ desc; } ;
struct TYPE_6__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct usb_interface*,struct usb_device_id const*,struct sd_desc const*,int,struct module*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;

int FUNC_3(struct usb_interface *VAR_1,
  const struct usb_device_id *VAR_2,
  const struct sd_desc *VAR_3,
  int VAR_4,
  struct module *VAR_5)
{
 struct usb_device *VAR_6 = FUNC_2(VAR_1);


 if (VAR_6->descriptor.bNumConfigurations != 1) {
  FUNC_0("%04x:%04x too many config",
    VAR_2->idVendor, VAR_2->idProduct);
  return -VAR_0;
 }


 if (VAR_6->config->desc.bNumInterfaces != 1
  && VAR_1->cur_altsetting->desc.bInterfaceNumber != 0)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
