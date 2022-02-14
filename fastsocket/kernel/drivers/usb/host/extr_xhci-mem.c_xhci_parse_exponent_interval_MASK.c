
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bInterval; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct usb_device {scalar_t__ speed; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,char*,int ,int,char*) ;

__attribute__((used)) static unsigned int FUNC_2(struct usb_device *VAR_1,
  struct usb_host_endpoint *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_2->desc.bInterval, 1, 16) - 1;
 if (VAR_3 != VAR_2->desc.bInterval - 1)
  FUNC_1(&VAR_1->dev,
    "ep %#x - rounding interval to %d %sframes\n",
    VAR_2->desc.bEndpointAddress,
    1 << VAR_3,
    VAR_1->speed == VAR_0 ? "" : "micro");

 if (VAR_1->speed == VAR_0) {





  VAR_3 += 3;
 }

 return VAR_3;
}
