
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct usb_gadget *VAR_2)
{
 return ((VAR_0 & 0x07) << 8) | (VAR_1 & 0xff);
}
