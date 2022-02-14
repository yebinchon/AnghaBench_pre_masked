
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial {TYPE_3__* interface; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_4__ {int bInterfaceProtocol; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct usb_serial *VAR_2)
{
 switch (VAR_2->interface->cur_altsetting->desc.bInterfaceProtocol) {
 case 129:
  break;
 case 128:
  VAR_1 = 1;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
