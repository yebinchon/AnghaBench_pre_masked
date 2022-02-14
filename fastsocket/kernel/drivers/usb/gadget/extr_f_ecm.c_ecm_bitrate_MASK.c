
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_gadget*) ;

__attribute__((used)) static inline unsigned FUNC_1(struct usb_gadget *VAR_1)
{
 if (FUNC_0(VAR_1) && VAR_1->speed == VAR_0)
  return 13 * 512 * 8 * 1000 * 8;
 else
  return 19 * 64 * 1 * 1000 * 8;
}
