
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_endpoint {int desc; } ;
struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {scalar_t__ speed; int bus; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* free_streams ) (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,int ) ;} ;


 scalar_t__ VAR_0 ;
 struct usb_hcd* FUNC_0 (int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct usb_interface *VAR_1,
  struct usb_host_endpoint **VAR_2, unsigned int VAR_3,
  gfp_t VAR_4)
{
 struct usb_hcd *VAR_5;
 struct usb_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_1);
 VAR_5 = FUNC_0(VAR_6->bus);
 if (VAR_6->speed != VAR_0)
  return;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  if (!FUNC_3(&VAR_2[VAR_7]->desc))
   return;

 VAR_5->driver->free_streams(VAR_5, VAR_6, VAR_2, VAR_3, VAR_4);
}
