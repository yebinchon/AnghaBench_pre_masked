
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct ep_device* ep_dev; } ;
struct ep_device {int dev; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct usb_host_endpoint *VAR_0)
{
 struct ep_device *VAR_1 = VAR_0->ep_dev;

 if (VAR_1) {
  FUNC_0(&VAR_1->dev);
  VAR_0->ep_dev = ((void*)0);
 }
}
