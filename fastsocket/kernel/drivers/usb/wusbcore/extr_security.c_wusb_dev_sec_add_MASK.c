
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct usb_encryption_descriptor {int bLength; scalar_t__ bEncryptionType; int bEncryptionValue; int bAuthKeyIndex; } ;
struct wusb_dev {struct usb_encryption_descriptor ccm1_etd; } ;
struct usb_security_descriptor {int wTotalLength; } ;
struct device {int dummy; } ;
struct usb_device {struct device dev; } ;
typedef int secd ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*,char*,char*,int,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct usb_security_descriptor*) ;
 struct usb_security_descriptor* FUNC_3 (int,int ) ;
 struct usb_security_descriptor* FUNC_4 (struct usb_security_descriptor*,int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int,char*,char*,int,int) ;
 int FUNC_7 (struct usb_device*,int ,int ,struct usb_security_descriptor*,int) ;
 char* FUNC_8 (scalar_t__) ;

int FUNC_9(struct wusbhc *VAR_5,
       struct usb_device *VAR_6, struct wusb_dev *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct device *VAR_11 = &VAR_6->dev;
 struct usb_security_descriptor *VAR_12;
 const struct usb_encryption_descriptor *VAR_13, *VAR_14 = ((void*)0);
 const void *VAR_15, *VAR_16;
 char VAR_17[64];

 VAR_12 = FUNC_3(sizeof(struct usb_security_descriptor), VAR_2);
 if (VAR_12 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_7(VAR_6, VAR_3,
        0, VAR_12, sizeof(struct usb_security_descriptor));
 if (VAR_8 < sizeof(VAR_12)) {
  FUNC_1(VAR_11, "Can't read security descriptor or "
   "not enough data: %d\n", VAR_8);
  goto out;
 }
 VAR_10 = FUNC_5(VAR_12->wTotalLength);
 VAR_12 = FUNC_4(VAR_12, VAR_10, VAR_2);
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_11, "Can't allocate space for security descriptors\n");
  goto out;
 }
 VAR_8 = FUNC_7(VAR_6, VAR_3,
        0, VAR_12, VAR_10);
 if (VAR_8 < VAR_10) {
  FUNC_1(VAR_11, "Can't read security descriptor or "
   "not enough data: %d\n", VAR_8);
  goto out;
 }
 VAR_9 = 0;
 VAR_15 = &VAR_12[1];
 VAR_16 = (void *)VAR_12 + VAR_8;
 while (VAR_15 < VAR_16) {
  VAR_13 = VAR_15;
  if (VAR_16 - VAR_15 < sizeof(*VAR_13)) {
   FUNC_1(VAR_11, "BUG: bad device security descriptor; "
    "not enough data (%zu vs %zu bytes left)\n",
    VAR_16 - VAR_15, sizeof(*VAR_13));
   break;
  }
  if (VAR_13->bLength < sizeof(*VAR_13)) {
   FUNC_1(VAR_11, "BUG: bad device encryption descriptor; "
    "descriptor is too short "
    "(%u vs %zu needed)\n",
    VAR_13->bLength, sizeof(*VAR_13));
   break;
  }
  VAR_15 += VAR_13->bLength;
  VAR_9 += FUNC_6(VAR_17 + VAR_9, sizeof(VAR_17) - VAR_9,
      "%s (0x%02x/%02x) ",
      FUNC_8(VAR_13->bEncryptionType),
      VAR_13->bEncryptionValue, VAR_13->bAuthKeyIndex);
  if (VAR_13->bEncryptionType == VAR_4)
   VAR_14 = VAR_13;
 }



 if (VAR_14 == ((void*)0)) {
  FUNC_1(VAR_11, "WUSB device doesn't support CCM1 encryption, "
   "can't use!\n");
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_7->ccm1_etd = *VAR_14;
 FUNC_0(VAR_11, "supported encryption: %s; using %s (0x%02x/%02x)\n",
  VAR_17, FUNC_8(VAR_14->bEncryptionType),
  VAR_14->bEncryptionValue, VAR_14->bAuthKeyIndex);
 VAR_8 = 0;
out:
 FUNC_2(VAR_12);
 return VAR_8;
}
