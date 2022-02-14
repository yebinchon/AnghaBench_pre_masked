
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct wusb_cbaf_assoc_request {int AssociationDataIndex; int AssociationTypeInfoSize; int AssociationSubTypeId; int AssociationTypeId; } ;
struct wusb_cbaf_assoc_info {int NumAssociationRequests; int Length; } ;
struct device {int dummy; } ;
struct cbaf {struct wusb_cbaf_assoc_info* buffer; int buffer_size; TYPE_3__* usb_iface; int usb_dev; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int ,size_t,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,struct wusb_cbaf_assoc_info*,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct cbaf *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = &VAR_5->usb_iface->dev;
 struct wusb_cbaf_assoc_info *VAR_8;
 struct wusb_cbaf_assoc_request *VAR_9;
 size_t VAR_10;
 void *VAR_11, *VAR_12;
 int VAR_13 = 0, VAR_14 = 0;

 VAR_6 = FUNC_4(
  VAR_5->usb_dev, FUNC_5(VAR_5->usb_dev, 0),
  VAR_0,
  VAR_2 | VAR_4 | VAR_3,
  0, VAR_5->usb_iface->cur_altsetting->desc.bInterfaceNumber,
  VAR_5->buffer, VAR_5->buffer_size, 1000 );
 if (VAR_6 < 0) {
  FUNC_1(VAR_7, "Cannot get available association types: %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_8 = VAR_5->buffer;
 if (VAR_6 < sizeof(*VAR_8)) {
  FUNC_1(VAR_7, "Not enough data to decode association info "
   "header (%zu vs %zu bytes required)\n",
   (size_t)VAR_6, sizeof(*VAR_8));
  return VAR_6;
 }

 VAR_10 = FUNC_2(VAR_8->Length);
 if (VAR_6 < VAR_10) {
  FUNC_1(VAR_7, "Not enough data to decode association info "
   "(%zu vs %zu bytes required)\n",
   (size_t)VAR_10, sizeof(*VAR_8));
  return VAR_6;
 }





 VAR_11 = VAR_5->buffer + sizeof(*VAR_8);
 VAR_12 = VAR_5->buffer + VAR_10;
 FUNC_0(VAR_7, "Found %u association requests (%zu bytes)\n",
   VAR_8->NumAssociationRequests, VAR_10);

 while (VAR_11 < VAR_12) {
  u16 VAR_15, VAR_16;
  u32 VAR_17;
  const char *VAR_18;

  VAR_9 = VAR_11;

  if (VAR_12 - VAR_11 < sizeof(*VAR_9)) {
   FUNC_1(VAR_7, "Not enough data to decode associaton "
    "request (%zu vs %zu bytes needed)\n",
    VAR_12 - VAR_11, sizeof(*VAR_9));
   break;
  }

  VAR_15 = FUNC_2(VAR_9->AssociationTypeId);
  VAR_16 = FUNC_2(VAR_9->AssociationSubTypeId);
  VAR_17 = FUNC_3(VAR_9->AssociationTypeInfoSize);
  VAR_18 = "unknown";

  switch (VAR_15) {
  case 130:

   switch (VAR_16) {
   case 128:
    VAR_18 = "RETRIEVE_HOST_INFO";
    VAR_13 = 1;
    break;
   case 129:

    VAR_18 = "ASSOCIATE";
    VAR_14 = 1;
    break;
   };
   break;
  };

  FUNC_0(VAR_7, "Association request #%02u: 0x%04x/%04x "
    "(%zu bytes): %s\n",
    VAR_9->AssociationDataIndex, VAR_15,
    VAR_16, (size_t)VAR_17, VAR_18);

  VAR_11 += sizeof(*VAR_9);
 }

 if (!VAR_13) {
  FUNC_1(VAR_7, "Missing RETRIEVE_HOST_INFO association "
   "request\n");
  return -VAR_1;
 }
 if (!VAR_14) {
  FUNC_1(VAR_7, "Missing ASSOCIATE association request\n");
  return -VAR_1;
 }

 return 0;
}
