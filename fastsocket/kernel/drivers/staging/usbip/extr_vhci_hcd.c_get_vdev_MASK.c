
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vhci_device {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vdev; } ;
struct TYPE_3__ {struct usb_device* udev; } ;


 int VAR_0 ;
 struct vhci_device* FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static struct vhci_device *FUNC_1(struct usb_device *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->vdev[VAR_3].udev == VAR_2)
   return FUNC_0(VAR_3);

 return ((void*)0);
}
