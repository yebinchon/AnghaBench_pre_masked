
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_host_endpoint {TYPE_2__* ss_ep_comp; int desc; } ;
struct usb_device {scalar_t__ speed; } ;
struct TYPE_3__ {int bmAttributes; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static u32 FUNC_1(struct usb_device *VAR_1,
  struct usb_host_endpoint *VAR_2)
{
 if (VAR_1->speed != VAR_0 || !VAR_2->ss_ep_comp ||
   !FUNC_0(&VAR_2->desc))
  return 0;
 return VAR_2->ss_ep_comp->desc.bmAttributes;
}
