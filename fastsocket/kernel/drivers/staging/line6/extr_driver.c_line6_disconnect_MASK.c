
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_line6 {TYPE_4__* properties; struct usb_device* usbdev; int ifcdev; int * urb_listen; } ;
struct TYPE_10__ {int kobj; } ;
struct usb_interface {TYPE_5__ dev; TYPE_2__* cur_altsetting; } ;
struct TYPE_8__ {int idProduct; } ;
struct usb_device {TYPE_3__ descriptor; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_6__ {int bInterfaceNumber; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_5__*,char*,int ) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*) ;
 struct usb_line6** VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct usb_interface*) ;
 struct usb_line6* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_interface*) ;
 int FUNC_12 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_13(struct usb_interface *VAR_3)
{
 struct usb_line6 *VAR_4;
 struct usb_device *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_3 == ((void*)0))
  return;
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == ((void*)0))
  return;

 FUNC_6(&VAR_3->dev.kobj, "usb_device");

 VAR_6 = VAR_3->cur_altsetting->desc.bInterfaceNumber;
 VAR_4 = FUNC_8(VAR_3);

 if (VAR_4 != ((void*)0)) {
  if (VAR_4->urb_listen != ((void*)0))
   FUNC_9(VAR_4->urb_listen);

  if (VAR_5 != VAR_4->usbdev)
   FUNC_0(VAR_4->ifcdev,
    "driver bug: inconsistent usb device\n");

  switch (VAR_4->usbdev->descriptor.idProduct) {
  case 143:
  case 142:
  case 141:
  case 139:
  case 138:
  case 137:
  case 136:
  case 134:
   FUNC_5(VAR_3);
   break;

  case 135:
   switch (VAR_6) {
   case 129:
    FUNC_5(VAR_3);
    break;

   case 128:
    FUNC_12(VAR_3);
    break;
   }

   break;

  case 130:
   FUNC_12(VAR_3);
   break;

  case 133:
  case 132:
  case 131:
  case 140:
   FUNC_7(VAR_3);
   break;

  default:
   VAR_1;
  }

  FUNC_1(&VAR_3->dev, "Line6 %s now disconnected\n", VAR_4->properties->name);

  for (VAR_7 = VAR_0; VAR_7--;)
   if (VAR_2[VAR_7] == VAR_4)
    VAR_2[VAR_7] = ((void*)0);
 }

 FUNC_3(VAR_3);


 FUNC_11(VAR_3);
 FUNC_10(VAR_5);

 FUNC_4();
}
