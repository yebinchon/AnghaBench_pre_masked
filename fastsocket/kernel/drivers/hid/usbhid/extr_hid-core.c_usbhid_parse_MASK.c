
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_8__ {scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; int bInterfaceNumber; int bNumEndpoints; } ;
struct usb_host_interface {TYPE_4__ desc; struct usb_host_interface* endpoint; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_2__ descriptor; } ;
struct TYPE_5__ {int parent; } ;
struct hid_device {int quirks; int country; void* version; TYPE_1__ dev; } ;
struct hid_descriptor {int bNumDescriptors; TYPE_3__* desc; int bCountryCode; int bcdHID; } ;
struct TYPE_7__ {scalar_t__ bDescriptorType; int wDescriptorLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct usb_device*,int ,scalar_t__,char*,unsigned int) ;
 int FUNC_2 (struct hid_device*,char*,unsigned int) ;
 int FUNC_3 (struct usb_device*,int ,int ,int ) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (unsigned int,int ) ;
 void* FUNC_7 (int ) ;
 struct usb_interface* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct usb_host_interface*,int ,struct hid_descriptor**) ;
 int FUNC_10 (void*,void*) ;

__attribute__((used)) static int FUNC_11(struct hid_device *VAR_12)
{
 struct usb_interface *VAR_13 = FUNC_8(VAR_12->dev.parent);
 struct usb_host_interface *VAR_14 = VAR_13->cur_altsetting;
 struct usb_device *VAR_15 = FUNC_4 (VAR_13);
 struct hid_descriptor *VAR_16;
 u32 VAR_17 = 0;
 unsigned int VAR_18 = 0;
 char *VAR_19;
 int VAR_20, VAR_21;

 VAR_17 = FUNC_10(FUNC_7(VAR_15->descriptor.idVendor),
   FUNC_7(VAR_15->descriptor.idProduct));

 if (VAR_17 & VAR_7)
  return -VAR_1;



 if (VAR_14->desc.bInterfaceSubClass == VAR_11) {
  if (VAR_14->desc.bInterfaceProtocol == VAR_9 ||
   VAR_14->desc.bInterfaceProtocol == VAR_10)
    VAR_17 |= VAR_8;
 }

 if (FUNC_9(VAR_14, VAR_4, &VAR_16) &&
     (!VAR_14->desc.bNumEndpoints ||
      FUNC_9(&VAR_14->endpoint[0], VAR_4, &VAR_16))) {
  FUNC_0("class descriptor not present\n");
  return -VAR_1;
 }

 VAR_12->version = FUNC_7(VAR_16->bcdHID);
 VAR_12->country = VAR_16->bCountryCode;

 for (VAR_21 = 0; VAR_21 < VAR_16->bNumDescriptors; VAR_21++)
  if (VAR_16->desc[VAR_21].bDescriptorType == VAR_5)
   VAR_18 = FUNC_7(VAR_16->desc[VAR_21].wDescriptorLength);

 if (!VAR_18 || VAR_18 > VAR_6) {
  FUNC_0("weird size of report descriptor (%u)\n", VAR_18);
  return -VAR_0;
 }

 if (!(VAR_19 = FUNC_6(VAR_18, VAR_3))) {
  FUNC_0("couldn't allocate rdesc memory\n");
  return -VAR_2;
 }

 FUNC_3(VAR_15, VAR_14->desc.bInterfaceNumber, 0, 0);

 VAR_20 = FUNC_1(VAR_15, VAR_14->desc.bInterfaceNumber,
   VAR_5, VAR_19, VAR_18);
 if (VAR_20 < 0) {
  FUNC_0("reading report descriptor failed\n");
  FUNC_5(VAR_19);
  goto err;
 }

 VAR_20 = FUNC_2(VAR_12, VAR_19, VAR_18);
 FUNC_5(VAR_19);
 if (VAR_20) {
  FUNC_0("parsing report descriptor failed\n");
  goto err;
 }

 VAR_12->quirks |= VAR_17;

 return 0;
err:
 return VAR_20;
}
