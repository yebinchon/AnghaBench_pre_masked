
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_1__* cur_altsetting; } ;
struct usb_device_id {int driver_info; } ;
struct sd_desc {int dummy; } ;
struct sd {int dummy; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_3__ {TYPE_2__ desc; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_interface*,struct usb_device_id const*,struct sd_desc const*,int,int ) ;
 int VAR_2 ;
 struct sd_desc VAR_3 ;
 struct sd_desc VAR_4 ;

__attribute__((used)) static int FUNC_1(struct usb_interface *VAR_5,
   const struct usb_device_id *VAR_6)
{
 const struct sd_desc *VAR_7 = &VAR_3;

 switch (VAR_6->driver_info) {
 case 132:
 case 131:
  if (VAR_5->cur_altsetting->desc.bInterfaceNumber != 2)
   return -VAR_0;
  break;
 case 130:
 case 128:
  if (VAR_5->cur_altsetting->desc.bInterfaceNumber != 0)
   return -VAR_0;
  break;
 case 129:
  if (VAR_5->cur_altsetting->desc.bInterfaceNumber != 0)
   return -VAR_0;


  if (VAR_2)
   VAR_7 = &VAR_4;
  break;
 }

 return FUNC_0(VAR_5, VAR_6, VAR_7, sizeof(struct sd), VAR_1);
}
