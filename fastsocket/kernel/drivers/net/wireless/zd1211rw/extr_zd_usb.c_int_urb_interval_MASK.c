
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int speed; } ;






__attribute__((used)) static inline int FUNC_0(struct usb_device *VAR_0)
{
 switch (VAR_0->speed) {
 case 129:
  return 4;
 case 128:
  return 10;
 case 130:
 default:
  return 1;
 }
}
