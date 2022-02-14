
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bEndpointAddress; } ;
struct usb_host_endpoint {struct ep_device* ep_dev; TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;
struct TYPE_5__ {int release; struct device* parent; int * type; int groups; } ;
struct ep_device {TYPE_2__ dev; struct usb_device* udev; TYPE_1__* desc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ep_device*) ;
 struct ep_device* FUNC_3 (int,int ) ;
 int VAR_4 ;

int FUNC_4(struct device *VAR_5,
   struct usb_host_endpoint *VAR_6,
   struct usb_device *VAR_7)
{
 struct ep_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto exit;
 }

 VAR_8->desc = &VAR_6->desc;
 VAR_8->udev = VAR_7;
 VAR_8->dev.groups = VAR_2;
 VAR_8->dev.type = &VAR_4;
 VAR_8->dev.parent = VAR_5;
 VAR_8->dev.release = VAR_3;
 FUNC_0(&VAR_8->dev, "ep_%02x", VAR_6->desc.bEndpointAddress);

 VAR_9 = FUNC_1(&VAR_8->dev);
 if (VAR_9)
  goto error_register;

 VAR_6->ep_dev = VAR_8;
 return VAR_9;

error_register:
 FUNC_2(VAR_8);
exit:
 return VAR_9;
}
