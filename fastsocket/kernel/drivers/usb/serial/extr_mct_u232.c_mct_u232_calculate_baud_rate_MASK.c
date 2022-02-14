
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial {TYPE_2__* dev; } ;
typedef int speed_t ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_2,
     speed_t VAR_3, speed_t *VAR_4)
{
 *VAR_4 = VAR_3;

 if (FUNC_0(VAR_2->dev->descriptor.idProduct) == VAR_1
  || FUNC_0(VAR_2->dev->descriptor.idProduct) == VAR_0) {
  switch (VAR_3) {
  case 300:
   return 0x01;
  case 600:
   return 0x02;
  case 1200:
   return 0x03;
  case 2400:
   return 0x04;
  case 4800:
   return 0x06;
  case 9600:
   return 0x08;
  case 19200:
   return 0x09;
  case 38400:
   return 0x0a;
  case 57600:
   return 0x0b;
  case 115200:
   return 0x0c;
  default:
   *VAR_4 = 9600;
   return 0x08;
  }
 } else {



  switch (VAR_3) {
  case 300: break;
  case 600: break;
  case 1200: break;
  case 2400: break;
  case 4800: break;
  case 9600: break;
  case 19200: break;
  case 38400: break;
  case 57600: break;
  case 115200: break;
  default:
   VAR_3 = 9600;
   *VAR_4 = 9600;
  }
  return 115200/VAR_3;
 }
}
