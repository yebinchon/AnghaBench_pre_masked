
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {TYPE_1__* bus; } ;
struct TYPE_2__ {unsigned int sg_tablesize; } ;


 unsigned int VAR_0 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;

__attribute__((used)) static unsigned int FUNC_1(struct usb_interface *VAR_1)
{
 struct usb_device *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->bus->sg_tablesize) {
  return VAR_2->bus->sg_tablesize;
 }
 return VAR_0;
}
