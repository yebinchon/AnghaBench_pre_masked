
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int idProduct; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_interface*,int *,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_3,
  const struct usb_device_id *VAR_4)
{
 int VAR_5;
 struct usb_device *VAR_6 = FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_3, &VAR_2,
      VAR_0, ((void*)0), VAR_1);
 if (VAR_5 == 0) {
  FUNC_1("found Genpix USB device pID = %x (hex)",
   FUNC_3(VAR_6->descriptor.idProduct));
 }
 return VAR_5;
}
