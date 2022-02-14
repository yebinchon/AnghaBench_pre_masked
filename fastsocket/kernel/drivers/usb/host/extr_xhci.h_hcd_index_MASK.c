
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct usb_hcd *VAR_1)
{
 if (VAR_1->speed == VAR_0)
  return 0;
 else
  return 1;
}
