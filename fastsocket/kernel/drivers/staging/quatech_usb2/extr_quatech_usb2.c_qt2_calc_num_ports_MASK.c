
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial {TYPE_2__* dev; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;
__attribute__((used)) static int FUNC_0(struct usb_serial *VAR_0)
{
 int VAR_1;
 int VAR_2;
 switch (VAR_0->dev->descriptor.idProduct) {
 case 128:
  VAR_1 = 1;
  break;

 case 133:
  VAR_2 = 1;
 case 134:
  VAR_1 = 2;
 break;

 case 129:
  VAR_2 = 1;
 case 130:
  VAR_1 = 4;
 break;

 case 131:
  VAR_2 = 1;
 case 132:
  VAR_1 = 8;
 break;
 default:
 VAR_1 = 1;
 break;
 }
 return VAR_1;
}
