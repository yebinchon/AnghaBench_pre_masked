
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {int dummy; } ;


 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor*) ;
 int FUNC_1 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_2 (struct usb_endpoint_descriptor*) ;

unsigned int FUNC_3(struct usb_endpoint_descriptor *VAR_0)
{
 unsigned int VAR_1;
 if (FUNC_2(VAR_0))
  VAR_1 = (unsigned int) (FUNC_1(VAR_0)*2);
 else
  VAR_1 = (unsigned int) (FUNC_1(VAR_0)*2) +
   (FUNC_0(VAR_0) ? 1 : 0) - 1;
 return VAR_1;
}
