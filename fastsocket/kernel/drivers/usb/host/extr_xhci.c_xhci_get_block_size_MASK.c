
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int speed; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;







__attribute__((used)) static unsigned int FUNC_0(struct usb_device *VAR_3)
{
 switch (VAR_3->speed) {
 case 131:
 case 133:
  return VAR_0;
 case 132:
  return VAR_1;
 case 130:
  return VAR_2;
 case 129:
 case 128:
 default:

  return 1;
 }
}
