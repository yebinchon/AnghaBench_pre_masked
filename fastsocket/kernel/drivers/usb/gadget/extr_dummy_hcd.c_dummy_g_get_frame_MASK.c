
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct timeval {int tv_usec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static int FUNC_1 (struct usb_gadget *VAR_0)
{
 struct timeval VAR_1;

 FUNC_0 (&VAR_1);
 return VAR_1.tv_usec / 1000;
}
