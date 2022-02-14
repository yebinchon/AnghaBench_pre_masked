
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bInterval; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;


 unsigned int FUNC_0 (struct usb_device*,struct usb_host_endpoint*,scalar_t__,int ,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct usb_device *VAR_0,
  struct usb_host_endpoint *VAR_1)
{
 if (VAR_1->desc.bInterval == 0)
  return 0;
 return FUNC_0(VAR_0, VAR_1,
   VAR_1->desc.bInterval, 0, 15);
}
