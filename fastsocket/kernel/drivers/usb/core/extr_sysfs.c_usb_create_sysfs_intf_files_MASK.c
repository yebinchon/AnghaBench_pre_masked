
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int sysfs_files_created; int dev; scalar_t__ unregistering; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_2__ {int iInterface; } ;
struct usb_host_interface {int * string; TYPE_1__ desc; } ;
struct usb_device {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int * FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct usb_interface *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_1(VAR_2);
 struct usb_host_interface *VAR_4 = VAR_2->cur_altsetting;
 int VAR_5;

 if (VAR_2->sysfs_files_created || VAR_2->unregistering)
  return 0;

 if (VAR_4->string == ((void*)0) &&
   !(VAR_3->quirks & VAR_0))
  VAR_4->string = FUNC_2(VAR_3, VAR_4->desc.iInterface);
 if (VAR_4->string)
  VAR_5 = FUNC_0(&VAR_2->dev, &VAR_1);
 VAR_2->sysfs_files_created = 1;
 return 0;
}
