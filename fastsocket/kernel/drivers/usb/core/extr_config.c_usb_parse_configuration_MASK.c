
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface_descriptor {int bInterfaceNumber; int bLength; } ;
struct usb_interface_cache {int num_altsetting; TYPE_2__* altsetting; int ref; } ;
struct usb_interface_assoc_descriptor {int dummy; } ;
struct usb_host_interface {int dummy; } ;
struct TYPE_6__ {scalar_t__ bDescriptorType; scalar_t__ bLength; int bConfigurationValue; int bNumInterfaces; int wTotalLength; } ;
struct usb_host_config {unsigned char* extra; int extralen; struct usb_interface_cache** intf_cache; TYPE_3__ desc; struct usb_interface_assoc_descriptor** intf_assoc; } ;
struct usb_descriptor_header {int bLength; scalar_t__ bDescriptorType; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int bAlternateSetting; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int,int,char*) ;
 int FUNC_2 (struct device*,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct device*,char*,int,...) ;
 int FUNC_4 (unsigned char*,int,scalar_t__,scalar_t__,int*) ;
 int FUNC_5 (int *) ;
 struct usb_interface_cache* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_3__*,unsigned char*,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct device*,int,struct usb_host_config*,unsigned char*,int,int*,int*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_12, int VAR_13,
    struct usb_host_config *VAR_14, unsigned char *VAR_15, int VAR_16)
{
 unsigned char *VAR_17 = VAR_15;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;
 struct usb_interface_cache *VAR_24;
 unsigned char *VAR_25;
 int VAR_26;
 struct usb_descriptor_header *VAR_27;
 int VAR_28, VAR_29;
 u8 VAR_30[VAR_11], VAR_31[VAR_11];
 unsigned VAR_32 = 0;

 FUNC_7(&VAR_14->desc, VAR_15, VAR_4);
 if (VAR_14->desc.bDescriptorType != VAR_3 ||
     VAR_14->desc.bLength < VAR_4) {
  FUNC_2(VAR_12, "invalid descriptor for config index %d: "
      "type = 0x%X, length = %d\n", VAR_13,
      VAR_14->desc.bDescriptorType, VAR_14->desc.bLength);
  return -VAR_0;
 }
 VAR_18 = VAR_14->desc.bConfigurationValue;

 VAR_15 += VAR_14->desc.bLength;
 VAR_16 -= VAR_14->desc.bLength;

 VAR_19 = VAR_20 = VAR_14->desc.bNumInterfaces;
 if (VAR_19 > VAR_11) {
  FUNC_3(VAR_12, "config %d has too many interfaces: %d, "
      "using maximum allowed: %d\n",
      VAR_18, VAR_19, VAR_11);
  VAR_19 = VAR_11;
 }



 VAR_23 = 0;
 for ((VAR_25 = VAR_15, VAR_26 = VAR_16);
       VAR_26 > 0;
      (VAR_25 += VAR_27->bLength, VAR_26 -= VAR_27->bLength)) {

  if (VAR_26 < sizeof(struct usb_descriptor_header)) {
   FUNC_3(VAR_12, "config %d descriptor has %d excess "
       "byte%s, ignoring\n",
       VAR_18, VAR_26, FUNC_8(VAR_26));
   break;
  }

  VAR_27 = (struct usb_descriptor_header *) VAR_25;
  if ((VAR_27->bLength > VAR_26) || (VAR_27->bLength < 2)) {
   FUNC_3(VAR_12, "config %d has an invalid descriptor "
       "of length %d, skipping remainder of the config\n",
       VAR_18, VAR_27->bLength);
   break;
  }

  if (VAR_27->bDescriptorType == VAR_6) {
   struct usb_interface_descriptor *VAR_33;
   int VAR_34;

   VAR_33 = (struct usb_interface_descriptor *) VAR_27;
   if (VAR_33->bLength < VAR_8) {
    FUNC_3(VAR_12, "config %d has an invalid "
        "interface descriptor of length %d, "
        "skipping\n", VAR_18, VAR_33->bLength);
    continue;
   }

   VAR_34 = VAR_33->bInterfaceNumber;
   if (VAR_34 >= VAR_20)
    FUNC_3(VAR_12, "config %d has an invalid "
        "interface number: %d but max is %d\n",
        VAR_18, VAR_34, VAR_20 - 1);



   for (VAR_21 = 0; VAR_21 < VAR_23; ++VAR_21) {
    if (VAR_30[VAR_21] == VAR_34)
     break;
   }
   if (VAR_21 < VAR_23) {
    if (VAR_31[VAR_21] < 255)
     ++VAR_31[VAR_21];
   } else if (VAR_23 < VAR_11) {
    VAR_30[VAR_23] = VAR_34;
    VAR_31[VAR_23] = 1;
    ++VAR_23;
   }

  } else if (VAR_27->bDescriptorType ==
    VAR_7) {
   if (VAR_32 == VAR_10) {
    FUNC_3(VAR_12, "found more Interface "
            "Association Descriptors "
            "than allocated for in "
            "configuration %d\n", VAR_18);
   } else {
    VAR_14->intf_assoc[VAR_32] =
     (struct usb_interface_assoc_descriptor
     *)VAR_27;
    VAR_32++;
   }

  } else if (VAR_27->bDescriptorType == VAR_5 ||
       VAR_27->bDescriptorType == VAR_3)
   FUNC_3(VAR_12, "config %d contains an unexpected "
       "descriptor of type 0x%X, skipping\n",
       VAR_18, VAR_27->bDescriptorType);

 }
 VAR_16 = VAR_25 - VAR_15;
 VAR_14->desc.wTotalLength = FUNC_0(VAR_25 - VAR_17);

 if (VAR_23 != VAR_19)
  FUNC_3(VAR_12, "config %d has %d interface%s, different from "
      "the descriptor's value: %d\n",
      VAR_18, VAR_23, FUNC_8(VAR_23), VAR_20);
 else if (VAR_23 == 0)
  FUNC_3(VAR_12, "config %d has no interfaces?\n", VAR_18);
 VAR_14->desc.bNumInterfaces = VAR_19 = VAR_23;


 for (VAR_21 = 0; VAR_21 < VAR_19; ++VAR_21) {
  for (VAR_22 = 0; VAR_22 < VAR_19; ++VAR_22) {
   if (VAR_30[VAR_22] == VAR_21)
    break;
  }
  if (VAR_22 >= VAR_19)
   FUNC_3(VAR_12, "config %d has no interface number "
       "%d\n", VAR_18, VAR_21);
 }


 for (VAR_21 = 0; VAR_21 < VAR_19; ++VAR_21) {
  VAR_22 = VAR_31[VAR_21];
  if (VAR_22 > VAR_9) {
   FUNC_3(VAR_12, "too many alternate settings for "
       "config %d interface %d: %d, "
       "using maximum allowed: %d\n",
       VAR_18, VAR_30[VAR_21], VAR_22, VAR_9);
   VAR_31[VAR_21] = VAR_22 = VAR_9;
  }

  VAR_28 = sizeof(*VAR_24) + sizeof(struct usb_host_interface) * VAR_22;
  VAR_14->intf_cache[VAR_21] = VAR_24 = FUNC_6(VAR_28, VAR_2);
  if (!VAR_24)
   return -VAR_1;
  FUNC_5(&VAR_24->ref);
 }





 VAR_14->extra = VAR_15;
 VAR_21 = FUNC_4(VAR_15, VAR_16, VAR_6,
     VAR_6, &VAR_23);
 VAR_14->extralen = VAR_21;
 if (VAR_23 > 0)
  FUNC_1(VAR_12, "skipped %d descriptor%s after %s\n",
      VAR_23, FUNC_8(VAR_23), "configuration");
 VAR_15 += VAR_21;
 VAR_16 -= VAR_21;


 while (VAR_16 > 0) {
  VAR_29 = FUNC_9(VAR_12, VAR_18, VAR_14,
      VAR_15, VAR_16, VAR_30, VAR_31);
  if (VAR_29 < 0)
   return VAR_29;

  VAR_15 += VAR_29;
  VAR_16 -= VAR_29;
 }


 for (VAR_21 = 0; VAR_21 < VAR_19; ++VAR_21) {
  VAR_24 = VAR_14->intf_cache[VAR_21];
  for (VAR_22 = 0; VAR_22 < VAR_24->num_altsetting; ++VAR_22) {
   for (VAR_23 = 0; VAR_23 < VAR_24->num_altsetting; ++VAR_23) {
    if (VAR_24->altsetting[VAR_23].desc.
        bAlternateSetting == VAR_22)
     break;
   }
   if (VAR_23 >= VAR_24->num_altsetting)
    FUNC_3(VAR_12, "config %d interface %d has no "
        "altsetting %d\n", VAR_18, VAR_30[VAR_21], VAR_22);
  }
 }

 return 0;
}
