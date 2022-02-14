
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uvd {int debug; int iface; int ifaceAltInactive; int ifaceAltActive; unsigned char video_endp; int iso_packet_len; long paletteBits; long defaultPalette; int videosize; int canvas; struct usb_device* dev; int flags; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_6__ {int bInterfaceNumber; int bAlternateSetting; int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {unsigned char bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {int bNumConfigurations; int bcdDevice; int idProduct; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
typedef int __u8 ;
struct TYPE_8__ {int camera_model; scalar_t__ initialized; } ;
struct TYPE_7__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;





 TYPE_4__* FUNC_0 (struct uvd*) ;

 int FUNC_1 (int,int,int) ;




 int VAR_1 ;




 int FUNC_2 (int,int) ;
 long VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct uvd*) ;
 int FUNC_7 (int) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (struct usb_endpoint_descriptor const*) ;
 int FUNC_11 (struct usb_endpoint_descriptor const*) ;
 int FUNC_12 (struct usb_interface*,struct uvd*) ;
 struct uvd* FUNC_13 (int ) ;
 int FUNC_14 (struct uvd*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_9, const struct usb_device_id *VAR_10)
{
 struct usb_device *VAR_11 = FUNC_8(VAR_9);
 struct uvd *VAR_12 = ((void*)0);
 int VAR_13, VAR_14, VAR_15, VAR_16=0, VAR_17=0, VAR_18=0;
 int VAR_19=-1, VAR_20=-1, VAR_21=0;
 __u8 VAR_22 = VAR_9->altsetting->desc.bInterfaceNumber;
 unsigned char VAR_23 = 0;

 if (VAR_4 >= 1)
  FUNC_4(&VAR_11->dev, "ibmcam_probe(%p,%u.)\n", VAR_9, VAR_22);


 if (VAR_11->descriptor.bNumConfigurations != 1)
  return -VAR_0;


 switch (FUNC_9(VAR_11->descriptor.bcdDevice)) {
 case 0x0002:
  if (VAR_22 != 2)
   return -VAR_0;
  VAR_16 = 141;
  break;
 case 0x030A:
  if (VAR_22 != 0)
   return -VAR_0;
  if ((FUNC_9(VAR_11->descriptor.idProduct) == 136) ||
      (FUNC_9(VAR_11->descriptor.idProduct) == 128))
   VAR_16 = 138;
  else
   VAR_16 = 140;
  break;
 case 0x0301:
  if (VAR_22 != 0)
   return -VAR_0;
  VAR_16 = 139;
  break;
 default:
  FUNC_5("IBM camera with revision 0x%04x is not supported.",
   FUNC_9(VAR_11->descriptor.bcdDevice));
  return -VAR_0;
 }


 do {
  char *VAR_24 = ((void*)0);
  switch (FUNC_9(VAR_11->descriptor.idProduct)) {
  case 136:
   VAR_24 = "IBM NetCamera";
   break;
  case 129:
   VAR_24 = "Veo Stingray [800C]";
   break;
  case 128:
   VAR_24 = "Veo Stingray [800D]";
   break;
  case 137:
  default:
   VAR_24 = "IBM PC Camera";
   break;
  }
  FUNC_4(&VAR_11->dev,
    "%s USB camera found (model %d, rev. 0x%04x)\n",
    VAR_24, VAR_16, FUNC_9(VAR_11->descriptor.bcdDevice));
 } while (0);


 VAR_15 = VAR_9->num_altsetting;
 if (VAR_4 > 0)
  FUNC_4(&VAR_11->dev, "Number of alternate settings=%d.\n",
    VAR_15);
 if (VAR_15 < 2) {
  FUNC_5("Too few alternate settings for this camera!");
  return -VAR_0;
 }

 for (VAR_13=0; VAR_13 < VAR_15; VAR_13++) {
  const struct usb_host_interface *VAR_25;
  const struct usb_endpoint_descriptor *VAR_26;

  VAR_25 = &VAR_9->altsetting[VAR_13];
  VAR_14 = VAR_25->desc.bAlternateSetting;
  if (VAR_25->desc.bNumEndpoints != 1) {
   FUNC_5("Interface %d. has %u. endpoints!",
       VAR_22, (unsigned)(VAR_25->desc.bNumEndpoints));
   return -VAR_0;
  }
  VAR_26 = &VAR_25->endpoint[0].desc;
  if (VAR_23 == 0)
   VAR_23 = VAR_26->bEndpointAddress;
  else if (VAR_23 != VAR_26->bEndpointAddress) {
   FUNC_5("Alternate settings have different endpoint addresses!");
   return -VAR_0;
  }
  if (!FUNC_11(VAR_26)) {
   FUNC_5("Interface %d. has non-ISO endpoint!", VAR_22);
   return -VAR_0;
  }
  if (FUNC_10(VAR_26)) {
   FUNC_5("Interface %d. has ISO OUT endpoint!", VAR_22);
   return -VAR_0;
  }
  if (FUNC_9(VAR_26->wMaxPacketSize) == 0) {
   if (VAR_20 < 0)
    VAR_20 = VAR_14;
   else {
    FUNC_5("More than one inactive alt. setting!");
    return -VAR_0;
   }
  } else {
   if (VAR_19 < 0) {
    VAR_19 = VAR_14;
    VAR_21 = FUNC_9(VAR_26->wMaxPacketSize);
    if (VAR_4 > 0)
     FUNC_4(&VAR_11->dev,
       "Active setting=%d. "
       "maxPS=%d.\n", VAR_14, VAR_21);
   } else
    FUNC_5("More than one active alt. setting! Ignoring #%d.", VAR_14);
  }
 }
 if ((VAR_21 <= 0) || (VAR_19 < 0) || (VAR_20 < 0)) {
  FUNC_5("Failed to recognize the camera!");
  return -VAR_0;
 }


 switch (VAR_16) {
 case 141:
  FUNC_1(VAR_7, 0, 2);
  FUNC_1(VAR_8, 135, 131);
  if (VAR_6 < 0)
   VAR_6 = 2;
  VAR_17 = 352;
  VAR_18 = 288;
  break;
 case 140:
  FUNC_1(VAR_7, 0, 15);
  FUNC_1(VAR_8, 133, VAR_1);
  if (VAR_6 < 0)
   VAR_6 = 2;
  VAR_17 = 352;
  VAR_18 = 240;
  break;
 case 139:
  FUNC_1(VAR_7, 0, 15);
  switch (VAR_8) {
  case 134:
   VAR_17 = 160;
   VAR_18 = 120;
   if (VAR_6 < 0)
    VAR_6 = 2;
   FUNC_1(VAR_6, 0, 5);
   break;
  default:
   FUNC_4(&VAR_11->dev, "IBM camera: using 320x240\n");
   VAR_8 = 132;

  case 132:
   VAR_17 = 320;
   VAR_18 = 240;
   if (VAR_6 < 0)
    VAR_6 = 3;
   FUNC_1(VAR_6, 0, 5);
   break;
  case 130:
   VAR_17 = 640;
   VAR_18 = 480;
   VAR_6 = 0;
   break;
  }
  break;
 case 138:
  FUNC_1(VAR_7, 0, 2);
  switch (VAR_8) {
  case 135:
   VAR_17 = 128;
   VAR_18 = 96;
   break;
  case 134:
   VAR_17 = 160;
   VAR_18 = 120;
   break;
  default:
   FUNC_4(&VAR_11->dev, "IBM NetCamera: using 176x144\n");
   VAR_8 = 133;

  case 133:
   VAR_17 = 176;
   VAR_18 = 144;
   break;
  case 132:
   VAR_17 = 320;
   VAR_18 = 240;
   break;
  case 131:
   VAR_17 = 352;
   VAR_18 = 288;
   break;
  }
  break;
 default:
  FUNC_5("IBM camera: Model %d. not supported!", VAR_16);
  return -VAR_0;
 }

 VAR_12 = FUNC_13(VAR_3);
 if (VAR_12 != ((void*)0)) {

  VAR_12->flags = VAR_5;
  VAR_12->debug = VAR_4;
  VAR_12->dev = VAR_11;
  VAR_12->iface = VAR_22;
  VAR_12->ifaceAltInactive = VAR_20;
  VAR_12->ifaceAltActive = VAR_19;
  VAR_12->video_endp = VAR_23;
  VAR_12->iso_packet_len = VAR_21;
  VAR_12->paletteBits = 1L << VAR_2;
  VAR_12->defaultPalette = VAR_2;
  VAR_12->canvas = FUNC_2(VAR_17, VAR_18);
  VAR_12->videosize = FUNC_7(VAR_8);


  FUNC_3(FUNC_0(VAR_12) != ((void*)0));
  FUNC_0(VAR_12)->camera_model = VAR_16;
  FUNC_0(VAR_12)->initialized = 0;

  FUNC_6(VAR_12);

  VAR_14 = FUNC_14(VAR_12);
  if (VAR_14 != 0) {
   FUNC_5("usbvideo_RegisterVideoDevice() failed.");
   VAR_12 = ((void*)0);
  }
 }
 FUNC_12 (VAR_9, VAR_12);
 return 0;
}
