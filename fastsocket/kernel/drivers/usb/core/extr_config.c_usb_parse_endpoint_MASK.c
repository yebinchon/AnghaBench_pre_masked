
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_host_ss_ep_comp {int dummy; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_1__ desc; struct usb_host_endpoint* endpoint; } ;
struct usb_endpoint_descriptor {int bLength; int bEndpointAddress; int bInterval; int wMaxPacketSize; int bmAttributes; } ;
struct usb_host_endpoint {unsigned char* extra; int extralen; struct usb_endpoint_descriptor desc; TYPE_4__* ss_ep_comp; int urb_list; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int wBytesPerInterval; scalar_t__ bMaxBurst; int bDescriptorType; int bLength; } ;
struct TYPE_8__ {TYPE_2__ desc; } ;
struct TYPE_7__ {int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;

 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int,int ,char*) ;
 int FUNC_3 (struct device*,char*,int,int,int,int,...) ;
 int FUNC_4 (unsigned char*,int,int ,int ,int*) ;
 int FUNC_5 (unsigned char*,int,int ,int ,int ,int*) ;
 int FUNC_6 (int) ;
 TYPE_4__* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_endpoint_descriptor*,struct usb_endpoint_descriptor*,int) ;
 int FUNC_10 (int) ;
 TYPE_3__* FUNC_11 (struct device*) ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor*) ;
 int FUNC_15 (struct device*,int,int,int,struct usb_host_endpoint*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_16(struct device *VAR_11, int VAR_12, int VAR_13,
    int VAR_14, struct usb_host_interface *VAR_15, int VAR_16,
    unsigned char *VAR_17, int VAR_18)
{
 unsigned char *VAR_19 = VAR_17;
 struct usb_endpoint_descriptor *VAR_20;
 struct usb_host_endpoint *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_20 = (struct usb_endpoint_descriptor *) VAR_17;
 VAR_17 += VAR_20->bLength;
 VAR_18 -= VAR_20->bLength;

 if (VAR_20->bLength >= VAR_3)
  VAR_22 = VAR_3;
 else if (VAR_20->bLength >= VAR_4)
  VAR_22 = VAR_4;
 else {
  FUNC_3(VAR_11, "config %d interface %d altsetting %d has an "
      "invalid endpoint descriptor of length %d, skipping\n",
      VAR_12, VAR_13, VAR_14, VAR_20->bLength);
  goto skip_to_next_endpoint_or_interface_descriptor;
 }

 VAR_23 = VAR_20->bEndpointAddress & ~VAR_8;
 if (VAR_23 >= 16 || VAR_23 == 0) {
  FUNC_3(VAR_11, "config %d interface %d altsetting %d has an "
      "invalid endpoint with address 0x%X, skipping\n",
      VAR_12, VAR_13, VAR_14, VAR_20->bEndpointAddress);
  goto skip_to_next_endpoint_or_interface_descriptor;
 }


 if (VAR_15->desc.bNumEndpoints >= VAR_16)
  goto skip_to_next_endpoint_or_interface_descriptor;

 VAR_21 = &VAR_15->endpoint[VAR_15->desc.bNumEndpoints];
 ++VAR_15->desc.bNumEndpoints;

 FUNC_9(&VAR_21->desc, VAR_20, VAR_22);
 FUNC_0(&VAR_21->urb_list);



 VAR_23 = 0;
 VAR_24 = 255;
 if (FUNC_13(VAR_20)) {
  VAR_23 = 1;
  switch (FUNC_11(VAR_11)->speed) {
  case 128:
  case 129:




   VAR_22 = FUNC_6(VAR_20->bInterval*8);
   if (VAR_22 == 0)
    VAR_22 = 9;
   VAR_24 = 16;
   break;
  default:



   VAR_22 = 32;
   break;
  }
 } else if (FUNC_14(VAR_20)) {
  VAR_23 = 1;
  VAR_24 = 16;
  switch (FUNC_11(VAR_11)->speed) {
  case 129:
   VAR_22 = 9;
   break;
  default:
   VAR_22 = 6;
   break;
  }
 }
 if (VAR_20->bInterval < VAR_23 || VAR_20->bInterval > VAR_24) {
  FUNC_3(VAR_11, "config %d interface %d altsetting %d "
      "endpoint 0x%X has an invalid bInterval %d, "
      "changing to %d\n",
      VAR_12, VAR_13, VAR_14,
      VAR_20->bEndpointAddress, VAR_20->bInterval, VAR_22);
  VAR_21->desc.bInterval = VAR_22;
 }





 if (FUNC_11(VAR_11)->speed == VAR_10 &&
   FUNC_12(VAR_20)) {
  FUNC_3(VAR_11, "config %d interface %d altsetting %d "
      "endpoint 0x%X is Bulk; changing to Interrupt\n",
      VAR_12, VAR_13, VAR_14, VAR_20->bEndpointAddress);
  VAR_21->desc.bmAttributes = VAR_9;
  VAR_21->desc.bInterval = 1;
  if (FUNC_8(VAR_21->desc.wMaxPacketSize) > 8)
   VAR_21->desc.wMaxPacketSize = FUNC_1(8);
 }






 if (FUNC_11(VAR_11)->speed == 129
   && FUNC_12(VAR_20)) {
  unsigned VAR_26;

  VAR_26 = FUNC_8(VAR_21->desc.wMaxPacketSize) & 0x07ff;
  if (VAR_26 != 512)
   FUNC_3(VAR_11, "config %d interface %d altsetting %d "
    "bulk endpoint 0x%X has invalid maxpacket %d\n",
    VAR_12, VAR_13, VAR_14, VAR_20->bEndpointAddress,
    VAR_26);
 }

 if (FUNC_11(VAR_11)->speed == 128) {
  VAR_21->extra = VAR_17;
  VAR_23 = FUNC_5(VAR_17, VAR_18, VAR_6,
    VAR_2, VAR_5, &VAR_22);
  VAR_21->extralen = VAR_23;
  VAR_17 += VAR_23;
  VAR_18 -= VAR_23;


  VAR_21->ss_ep_comp = FUNC_7(sizeof(struct usb_host_ss_ep_comp),
    VAR_1);
  if (!VAR_21->ss_ep_comp)
   return -VAR_0;


  VAR_21->ss_ep_comp->desc.bLength = VAR_7;
  VAR_21->ss_ep_comp->desc.bDescriptorType = VAR_6;
  VAR_21->ss_ep_comp->desc.bMaxBurst = 0;







  if (FUNC_14(&VAR_21->desc) ||
    FUNC_13(&VAR_21->desc))
   VAR_21->ss_ep_comp->desc.wBytesPerInterval =
    VAR_21->desc.wMaxPacketSize;

  if (VAR_18 > 0) {
   VAR_25 = FUNC_15(VAR_11, VAR_12,
     VAR_13, VAR_14, VAR_21, VAR_16, VAR_17,
     VAR_18);
   if (VAR_25 >= 0) {
    VAR_17 += VAR_25;
    VAR_25 = VAR_17 - VAR_19;
   }
  } else {
   FUNC_3(VAR_11, "config %d interface %d altsetting %d "
    "endpoint 0x%X has no "
    "SuperSpeed companion descriptor\n",
    VAR_12, VAR_13, VAR_14, VAR_20->bEndpointAddress);
   VAR_25 = VAR_17 - VAR_19;
  }
 } else {


  VAR_21->extra = VAR_17;
  VAR_23 = FUNC_4(VAR_17, VAR_18, VAR_2,
    VAR_5, &VAR_22);
  VAR_21->extralen = VAR_23;
  VAR_25 = VAR_17 - VAR_19 + VAR_23;
 }
 if (VAR_22 > 0)
  FUNC_2(VAR_11, "skipped %d descriptor%s after %s\n",
      VAR_22, FUNC_10(VAR_22), "endpoint");
 return VAR_25;

skip_to_next_endpoint_or_interface_descriptor:
 VAR_23 = FUNC_4(VAR_17, VAR_18, VAR_2,
     VAR_5, ((void*)0));
 return VAR_17 - VAR_19 + VAR_23;
}
