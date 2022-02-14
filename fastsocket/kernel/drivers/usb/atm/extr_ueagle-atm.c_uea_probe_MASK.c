
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 size_t FUNC_0 (struct usb_device_id const*) ;
 scalar_t__ FUNC_1 (struct usb_device_id const*) ;
 int * VAR_0 ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_device*,char*,int ,int ,int ,int ) ;
 int FUNC_6 (struct usb_device*,size_t) ;
 int VAR_1 ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_interface*,struct usb_device_id const*,int *) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_2, const struct usb_device_id *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_2(VAR_2);

 FUNC_4(VAR_4);
 FUNC_5(VAR_4, "ADSL device founded vid (%#X) pid (%#X) Rev (%#X): %s\n",
  FUNC_3(VAR_4->descriptor.idVendor),
  FUNC_3(VAR_4->descriptor.idProduct),
  FUNC_3(VAR_4->descriptor.bcdDevice),
  VAR_0[FUNC_0(VAR_3)]);

 FUNC_7(VAR_4);

 if (FUNC_1(VAR_3))
  return FUNC_6(VAR_4, FUNC_0(VAR_3));

 return FUNC_8(VAR_2, VAR_3, &VAR_1);
}
