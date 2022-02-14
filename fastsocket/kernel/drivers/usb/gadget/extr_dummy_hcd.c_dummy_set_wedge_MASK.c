
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ep*,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct usb_ep *VAR_2)
{
 if (!VAR_2 || VAR_2->name == VAR_1)
  return -VAR_0;
 return FUNC_0(VAR_2, 1, 1);
}
