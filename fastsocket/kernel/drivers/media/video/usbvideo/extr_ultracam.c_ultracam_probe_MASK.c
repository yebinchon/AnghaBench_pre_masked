
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uvd {int debug; int ifaceAltInactive; int ifaceAltActive; unsigned char video_endp; int iso_packet_len; long paletteBits; long defaultPalette; int canvas; int videosize; int iface; struct usb_device* dev; int flags; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; int dev; } ;
struct TYPE_7__ {int bAlternateSetting; int bNumEndpoints; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_3__ desc; TYPE_2__* endpoint; } ;
struct usb_endpoint_descriptor {unsigned char bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {int bNumConfigurations; int bcdDevice; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct TYPE_8__ {scalar_t__ initialized; scalar_t__ camera_model; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct uvd*) ;
 int FUNC_1 (int,int) ;
 long VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct uvd*) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor const*) ;
 int FUNC_9 (struct usb_endpoint_descriptor const*) ;
 int FUNC_10 (struct usb_interface*,struct uvd*) ;
 struct uvd* FUNC_11 (int ) ;
 int FUNC_12 (struct uvd*) ;

__attribute__((used)) static int FUNC_13(struct usb_interface *VAR_6, const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_5(VAR_6);
 struct uvd *VAR_9 = ((void*)0);
 int VAR_10, VAR_11, VAR_12;
 int VAR_13=-1, VAR_14=-1, VAR_15=0;
 unsigned char VAR_16 = 0;

 if (VAR_4 >= 1)
  FUNC_3(&VAR_6->dev, "ultracam_probe\n");


 if (VAR_8->descriptor.bNumConfigurations != 1)
  return -VAR_1;

 FUNC_3(&VAR_6->dev, "IBM Ultra camera found (rev. 0x%04x)\n",
   FUNC_6(VAR_8->descriptor.bcdDevice));


 VAR_12 = VAR_6->num_altsetting;
 if (VAR_4 > 0)
  FUNC_3(&VAR_6->dev, "Number of alternate settings=%d.\n",
    VAR_12);
 if (VAR_12 < 8) {
  FUNC_4("Too few alternate settings for this camera!");
  return -VAR_1;
 }

 for (VAR_10=0; VAR_10 < VAR_12; VAR_10++) {
  const struct usb_host_interface *VAR_17;
  const struct usb_endpoint_descriptor *VAR_18;

  VAR_17 = &VAR_6->altsetting[VAR_10];
  VAR_11 = VAR_17->desc.bAlternateSetting;
  if (VAR_17->desc.bNumEndpoints != 1) {
   FUNC_4("Interface %d. has %u. endpoints!",
       VAR_17->desc.bInterfaceNumber,
       (unsigned)(VAR_17->desc.bNumEndpoints));
   return -VAR_1;
  }
  VAR_18 = &VAR_17->endpoint[0].desc;
  if (VAR_16 == 0)
   VAR_16 = VAR_18->bEndpointAddress;
  else if (VAR_16 != VAR_18->bEndpointAddress) {
   FUNC_4("Alternate settings have different endpoint addresses!");
   return -VAR_1;
  }
  if (!FUNC_9(VAR_18)) {
   FUNC_4("Interface %d. has non-ISO endpoint!",
       VAR_17->desc.bInterfaceNumber);
   return -VAR_1;
  }
  if (FUNC_8(VAR_18)) {
   FUNC_4("Interface %d. has ISO OUT endpoint!",
       VAR_17->desc.bInterfaceNumber);
   return -VAR_1;
  }
  if (FUNC_6(VAR_18->wMaxPacketSize) == 0) {
   if (VAR_14 < 0)
    VAR_14 = VAR_11;
   else {
    FUNC_4("More than one inactive alt. setting!");
    return -VAR_1;
   }
  } else {
   if (VAR_13 < 0) {
    VAR_13 = VAR_11;
    VAR_15 = FUNC_6(VAR_18->wMaxPacketSize);
    if (VAR_4 > 0)
     FUNC_3(&VAR_6->dev,
       "Active setting=%d. "
       "maxPS=%d.\n", VAR_11, VAR_15);
   } else {

    if (VAR_15 < FUNC_6(VAR_18->wMaxPacketSize)) {

     VAR_13 = VAR_11;
     VAR_15 = FUNC_6(VAR_18->wMaxPacketSize);
     if (VAR_4 > 0) {
      FUNC_3(&VAR_6->dev,
        "Even better ctive "
        "setting=%d. "
        "maxPS=%d.\n",
        VAR_11, VAR_15);
     }
    }
   }
  }
 }
 if ((VAR_15 <= 0) || (VAR_13 < 0) || (VAR_14 < 0)) {
  FUNC_4("Failed to recognize the camera!");
  return -VAR_1;
 }

 VAR_9 = FUNC_11(VAR_3);
 if (VAR_9 != ((void*)0)) {

  VAR_9->flags = VAR_5;
  VAR_9->debug = VAR_4;
  VAR_9->dev = VAR_8;
  VAR_9->iface = VAR_6->altsetting->desc.bInterfaceNumber;
  VAR_9->ifaceAltInactive = VAR_14;
  VAR_9->ifaceAltActive = VAR_13;
  VAR_9->video_endp = VAR_16;
  VAR_9->iso_packet_len = VAR_15;
  VAR_9->paletteBits = 1L << VAR_2;
  VAR_9->defaultPalette = VAR_2;
  VAR_9->canvas = FUNC_1(640, 480);
  VAR_9->videosize = VAR_9->canvas;


  FUNC_2(FUNC_0(VAR_9) != ((void*)0));
  FUNC_0(VAR_9)->camera_model = 0;
  FUNC_0(VAR_9)->initialized = 0;

  FUNC_7(VAR_9);

  VAR_11 = FUNC_12(VAR_9);
  if (VAR_11 != 0) {
   FUNC_4("usbvideo_RegisterVideoDevice() failed.");
   VAR_9 = ((void*)0);
  }
 }

 if (VAR_9) {
  FUNC_10 (VAR_6, VAR_9);
  return 0;
 }
 return -VAR_0;
}
