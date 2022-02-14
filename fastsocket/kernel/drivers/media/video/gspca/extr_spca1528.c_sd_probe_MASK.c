
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct sd {int dummy; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_interface*,struct usb_device_id const*,int *,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct usb_interface *VAR_3,
   const struct usb_device_id *VAR_4)
{

 if (VAR_3->cur_altsetting->desc.bInterfaceNumber != 1)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, &VAR_2, sizeof(struct sd),
    VAR_1);
}
