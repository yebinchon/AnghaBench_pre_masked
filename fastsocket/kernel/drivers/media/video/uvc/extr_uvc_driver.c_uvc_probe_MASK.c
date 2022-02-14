
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_device {int quirks; int uvc_version; int name; int intfnum; int intf; int udev; int nmappings; int users; int nstreams; int streams; int chains; int entities; } ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int driver_info; int idProduct; int idVendor; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {char* product; scalar_t__ autosuspend_disabled; TYPE_3__ descriptor; int devpath; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 struct uvc_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,char*,int,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,struct uvc_device*) ;
 scalar_t__ FUNC_10 (struct uvc_device*) ;
 scalar_t__ FUNC_11 (struct uvc_device*) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (struct uvc_device*) ;
 scalar_t__ FUNC_14 (struct uvc_device*) ;
 int FUNC_15 (struct uvc_device*) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (struct uvc_device*) ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_6,
       const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_2(VAR_6);
 struct uvc_device *VAR_9;
 int VAR_10;

 if (VAR_7->idVendor && VAR_7->idProduct)
  FUNC_16(VAR_4, "Probing known UVC device %s "
    "(%04x:%04x)\n", VAR_8->devpath, VAR_7->idVendor,
    VAR_7->idProduct);
 else
  FUNC_16(VAR_4, "Probing generic UVC device %s\n",
    VAR_8->devpath);


 if ((VAR_9 = FUNC_3(sizeof *VAR_9, VAR_2)) == ((void*)0))
  return -VAR_1;

 FUNC_0(&VAR_9->entities);
 FUNC_0(&VAR_9->chains);
 FUNC_0(&VAR_9->streams);
 FUNC_1(&VAR_9->nstreams, 0);
 FUNC_1(&VAR_9->users, 0);
 FUNC_1(&VAR_9->nmappings, 0);

 VAR_9->udev = FUNC_7(VAR_8);
 VAR_9->intf = FUNC_8(VAR_6);
 VAR_9->intfnum = VAR_6->cur_altsetting->desc.bInterfaceNumber;
 VAR_9->quirks = (VAR_5 == -1)
      ? VAR_7->driver_info : VAR_5;

 if (VAR_8->product != ((void*)0))
  FUNC_6(VAR_9->name, VAR_8->product, sizeof VAR_9->name);
 else
  FUNC_5(VAR_9->name, sizeof VAR_9->name,
   "UVC Camera (%04x:%04x)",
   FUNC_4(VAR_8->descriptor.idVendor),
   FUNC_4(VAR_8->descriptor.idProduct));


 if (FUNC_11(VAR_9) < 0) {
  FUNC_16(VAR_4, "Unable to parse UVC "
   "descriptors.\n");
  goto error;
 }

 FUNC_12(VAR_3, "Found UVC %u.%02x device %s (%04x:%04x)\n",
  VAR_9->uvc_version >> 8, VAR_9->uvc_version & 0xff,
  VAR_8->product ? VAR_8->product : "<unnamed>",
  FUNC_4(VAR_8->descriptor.idVendor),
  FUNC_4(VAR_8->descriptor.idProduct));

 if (VAR_9->quirks != VAR_7->driver_info) {
  FUNC_12(VAR_3, "Forcing device quirks to 0x%x by module "
   "parameter for testing purpose.\n", VAR_9->quirks);
  FUNC_12(VAR_3, "Please report required quirks to the "
   "linux-uvc-devel mailing list.\n");
 }


 if (FUNC_10(VAR_9) < 0)
  goto error;


 if (FUNC_14(VAR_9) < 0)
  goto error;


 if (FUNC_13(VAR_9) < 0)
  goto error;


 FUNC_9(VAR_6, VAR_9);


 if ((VAR_10 = FUNC_15(VAR_9)) < 0) {
  FUNC_12(VAR_3, "Unable to initialize the status "
   "endpoint (%d), status interrupt will not be "
   "supported.\n", VAR_10);
 }

 FUNC_16(VAR_4, "UVC device initialized.\n");
 VAR_8->autosuspend_disabled = 0;
 return 0;

error:
 FUNC_17(VAR_9);
 return -VAR_0;
}
