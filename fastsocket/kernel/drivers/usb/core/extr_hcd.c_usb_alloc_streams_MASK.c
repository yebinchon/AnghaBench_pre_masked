
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
struct TYPE_2__ {int (* alloc_streams ) (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,unsigned int,int ) ;int free_streams; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_hcd* FUNC_0 (int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct usb_interface *VAR_2,
  struct usb_host_endpoint **VAR_3, unsigned int VAR_4,
  unsigned int VAR_5, gfp_t VAR_6)
{
 struct usb_hcd *VAR_7;
 struct usb_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_2);
 VAR_7 = FUNC_0(VAR_8->bus);
 if (!VAR_7->driver->alloc_streams || !VAR_7->driver->free_streams)
  return -VAR_0;
 if (VAR_8->speed != VAR_1)
  return -VAR_0;


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  if (!FUNC_3(&VAR_3[VAR_9]->desc))
   return -VAR_0;

 return VAR_7->driver->alloc_streams(VAR_7, VAR_8, VAR_3, VAR_4,
   VAR_5, VAR_6);
}
