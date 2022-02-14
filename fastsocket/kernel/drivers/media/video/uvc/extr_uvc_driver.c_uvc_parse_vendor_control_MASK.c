
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned char bNumControls; unsigned char bControlSize; int * bmControls; int * bmControlsType; int * guidExtensionCode; } ;
struct uvc_entity {int list; int name; TYPE_4__ extension; int * baSourceID; } ;
struct uvc_device {int entities; struct usb_device* udev; TYPE_1__* intf; } ;
struct TYPE_7__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_3__ desc; } ;
struct TYPE_6__ {int idVendor; } ;
struct usb_device {int devnum; TYPE_2__ descriptor; } ;
typedef int __u8 ;
struct TYPE_5__ {struct usb_host_interface* cur_altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (int ,char*,unsigned char const) ;
 int FUNC_4 (struct usb_device*,unsigned char const,int ,int) ;
 struct uvc_entity* FUNC_5 (int ,unsigned char const,unsigned int,int) ;
 int FUNC_6 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct uvc_device *VAR_3,
 const unsigned char *VAR_4, int VAR_5)
{
 struct usb_device *VAR_6 = VAR_3->udev;
 struct usb_host_interface *VAR_7 = VAR_3->intf->cur_altsetting;
 struct uvc_entity *VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11 = 0;

 switch (FUNC_0(VAR_3->udev->descriptor.idVendor)) {
 case 0x046d:
  if (VAR_4[1] != 0x41 || VAR_4[2] != 0x01)
   break;
  VAR_10 = VAR_5 >= 22 ? VAR_4[21] : 0;
  VAR_9 = VAR_5 >= 25 + VAR_10 ? VAR_4[22+VAR_10] : 0;

  if (VAR_5 < 25 + VAR_10 + 2*VAR_9) {
   FUNC_6(VAR_1, "device %d videocontrol "
    "interface %d EXTENSION_UNIT error\n",
    VAR_6->devnum, VAR_7->desc.bInterfaceNumber);
   break;
  }

  VAR_8 = FUNC_5(VAR_2, VAR_4[3],
     VAR_10 + 1, 2*VAR_9);
  if (VAR_8 == ((void*)0))
   return -VAR_0;

  FUNC_2(VAR_8->extension.guidExtensionCode, &VAR_4[4], 16);
  VAR_8->extension.bNumControls = VAR_4[20];
  FUNC_2(VAR_8->baSourceID, &VAR_4[22], VAR_10);
  VAR_8->extension.bControlSize = VAR_4[22+VAR_10];
  VAR_8->extension.bmControls = (__u8 *)VAR_8 + sizeof(*VAR_8);
  VAR_8->extension.bmControlsType = (__u8 *)VAR_8 + sizeof(*VAR_8)
            + VAR_9;
  FUNC_2(VAR_8->extension.bmControls, &VAR_4[23+VAR_10], 2*VAR_9);

  if (VAR_4[24+VAR_10+2*VAR_9] != 0)
   FUNC_4(VAR_6, VAR_4[24+VAR_10+2*VAR_9], VAR_8->name,
       sizeof VAR_8->name);
  else
   FUNC_3(VAR_8->name, "Extension %u", VAR_4[3]);

  FUNC_1(&VAR_8->list, &VAR_3->entities);
  VAR_11 = 1;
  break;
 }

 return VAR_11;
}
