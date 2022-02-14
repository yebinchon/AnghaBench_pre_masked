
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uvd {int ifaceAltInactive; int ifaceAltActive; unsigned char video_endp; int iso_packet_len; long paletteBits; long defaultPalette; int max_frame_size; void* videosize; void* canvas; int iface; struct usb_device* dev; int debug; scalar_t__ flags; scalar_t__ user_data; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; int dev; } ;
struct TYPE_7__ {int bAlternateSetting; int bNumEndpoints; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_3__ desc; TYPE_2__* endpoint; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {int bNumConfigurations; int bcdDevice; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct konicawc {size_t speed; int width; int height; size_t size; int ** sts_urb; } ;
struct TYPE_8__ {int width; int height; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (size_t,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int,int) ;
 long VAR_9 ;
 TYPE_4__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,...) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct uvd*) ;
 int FUNC_7 (struct konicawc*,struct usb_device*) ;
 int FUNC_8 (int ) ;
 size_t VAR_13 ;
 int* VAR_14 ;
 size_t VAR_15 ;
 int * FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct usb_endpoint_descriptor const*) ;
 int FUNC_11 (struct usb_endpoint_descriptor const*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct usb_interface*,struct uvd*) ;
 struct uvd* FUNC_14 (int ) ;
 int FUNC_15 (struct uvd*) ;

__attribute__((used)) static int FUNC_16(struct usb_interface *VAR_16, const struct usb_device_id *VAR_17)
{
 struct usb_device *VAR_18 = FUNC_5(VAR_16);
 struct uvd *VAR_19 = ((void*)0);
 int VAR_20, VAR_21, VAR_22;
 int VAR_23=-1, VAR_24=-1, VAR_25=0;
 unsigned char VAR_26 = 0;

 FUNC_0(1, "konicawc_probe(%p)", VAR_16);


 if (VAR_18->descriptor.bNumConfigurations != 1)
  return -VAR_1;

 FUNC_3(&VAR_16->dev, "Konica Webcam (rev. 0x%04x)\n",
   FUNC_8(VAR_18->descriptor.bcdDevice));
 FUNC_1(VAR_15, 0, VAR_5);


 VAR_22 = VAR_16->num_altsetting;
 if (VAR_22 != 8) {
  FUNC_4("Incorrect number of alternate settings (%d) for this camera!", VAR_22);
  return -VAR_1;
 }

 for (VAR_20=0; VAR_20 < VAR_22; VAR_20++) {
  const struct usb_host_interface *VAR_27;
  const struct usb_endpoint_descriptor *VAR_28;

  VAR_27 = &VAR_16->altsetting[VAR_20];
  VAR_21 = VAR_27->desc.bAlternateSetting;
  if (VAR_27->desc.bNumEndpoints != 2) {
   FUNC_4("Interface %d. has %u. endpoints!",
       VAR_27->desc.bInterfaceNumber,
       (unsigned)(VAR_27->desc.bNumEndpoints));
   return -VAR_1;
  }
  VAR_28 = &VAR_27->endpoint[1].desc;
  FUNC_0(1, "found endpoint: addr: 0x%2.2x maxps = 0x%4.4x",
      VAR_28->bEndpointAddress, FUNC_8(VAR_28->wMaxPacketSize));
  if (VAR_26 == 0)
   VAR_26 = VAR_28->bEndpointAddress;
  else if (VAR_26 != VAR_28->bEndpointAddress) {
   FUNC_4("Alternate settings have different endpoint addresses!");
   return -VAR_1;
  }
  if (!FUNC_11(VAR_28)) {
   FUNC_4("Interface %d. has non-ISO endpoint!",
       VAR_27->desc.bInterfaceNumber);
   return -VAR_1;
  }
  if (FUNC_10(VAR_28)) {
   FUNC_4("Interface %d. has ISO OUT endpoint!",
       VAR_27->desc.bInterfaceNumber);
   return -VAR_1;
  }
  if (FUNC_8(VAR_28->wMaxPacketSize) == 0) {
   if (VAR_24 < 0)
    VAR_24 = VAR_21;
   else {
    FUNC_4("More than one inactive alt. setting!");
    return -VAR_1;
   }
  } else {
   if (VAR_21 == VAR_14[VAR_15]) {

    VAR_23 = VAR_21;
   }
  }
  if (FUNC_8(VAR_28->wMaxPacketSize) > VAR_25)
   VAR_25 = FUNC_8(VAR_28->wMaxPacketSize);
 }
 if(VAR_23 == -1) {
  FUNC_4("Cant find required endpoint");
  return -VAR_1;
 }

 FUNC_0(1, "Selecting requested active setting=%d. maxPS=%d.", VAR_23, VAR_25);

 VAR_19 = FUNC_14(VAR_11);
 if (VAR_19 != ((void*)0)) {
  struct konicawc *VAR_29 = (struct konicawc *)(VAR_19->user_data);

  for(VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
   VAR_29->sts_urb[VAR_21] = FUNC_9(VAR_3, VAR_4);
   if(VAR_29->sts_urb[VAR_21] == ((void*)0)) {
    while(VAR_21--) {
     FUNC_12(VAR_29->sts_urb[VAR_21]);
    }
    FUNC_4("can't allocate urbs");
    return -VAR_2;
   }
  }
  VAR_29->speed = VAR_15;
  FUNC_1(VAR_13, VAR_6, VAR_7);
  VAR_29->width = VAR_10[VAR_13].width;
  VAR_29->height = VAR_10[VAR_13].height;
  VAR_29->size = VAR_13;

  VAR_19->flags = 0;
  VAR_19->debug = VAR_12;
  VAR_19->dev = VAR_18;
  VAR_19->iface = VAR_16->altsetting->desc.bInterfaceNumber;
  VAR_19->ifaceAltInactive = VAR_24;
  VAR_19->ifaceAltActive = VAR_23;
  VAR_19->video_endp = VAR_26;
  VAR_19->iso_packet_len = VAR_25;
  VAR_19->paletteBits = 1L << VAR_9;
  VAR_19->defaultPalette = VAR_9;
  VAR_19->canvas = FUNC_2(320, 240);
  VAR_19->videosize = FUNC_2(VAR_29->width, VAR_29->height);


  FUNC_6(VAR_19);

  VAR_21 = FUNC_15(VAR_19);
  VAR_19->max_frame_size = (320 * 240 * 3)/2;
  if (VAR_21 != 0) {
   FUNC_4("usbvideo_RegisterVideoDevice() failed.");
   VAR_19 = ((void*)0);
  }

  FUNC_7(VAR_29, VAR_18);
 }

 if (VAR_19) {
  FUNC_13 (VAR_16, VAR_19);
  return 0;
 }
 return -VAR_0;
}
