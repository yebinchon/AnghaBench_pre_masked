
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct usb_device {int dev; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int *,char*,int ,int,unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct usb_device *VAR_0,
  struct usb_host_endpoint *VAR_1, unsigned int VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_2(VAR_2) - 1;
 VAR_5 = FUNC_0(VAR_5, VAR_3, VAR_4);
 if ((1 << VAR_5) != VAR_2)
  FUNC_1(&VAR_0->dev,
    "ep %#x - rounding interval to %d microframes, ep desc says %d microframes\n",
    VAR_1->desc.bEndpointAddress,
    1 << VAR_5,
    VAR_2);

 return VAR_5;
}
