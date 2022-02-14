
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct ignore_entry {int vid; unsigned int pid; unsigned int bcdmin; unsigned int bcdmax; } ;


 int VAR_0 ;
 struct ignore_entry* VAR_1 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 unsigned int FUNC_1 (int ) ;

int FUNC_2(struct usb_interface *VAR_2)
{
 struct usb_device *VAR_3;
 unsigned VAR_4, VAR_5, VAR_6;
 struct ignore_entry *VAR_7;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_3->descriptor.idVendor);
 VAR_5 = FUNC_1(VAR_3->descriptor.idProduct);
 VAR_6 = FUNC_1(VAR_3->descriptor.bcdDevice);

 for (VAR_7 = VAR_1; VAR_7->vid; ++VAR_7) {
  if (VAR_7->vid == VAR_4 && VAR_7->pid == VAR_5 &&
    VAR_7->bcdmin <= VAR_6 && VAR_7->bcdmax >= VAR_6)
   return -VAR_0;
 }
 return 0;
}
