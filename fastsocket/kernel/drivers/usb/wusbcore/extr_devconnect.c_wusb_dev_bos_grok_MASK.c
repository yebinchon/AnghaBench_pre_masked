
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusb_dev {void* wusb_cap_descr; } ;
struct device {int dummy; } ;
struct usb_device {struct device dev; } ;
struct usb_dev_cap_header {size_t bLength; int bDevCapabilityType; } ;
struct usb_bos_descriptor {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct device*,char*,int,size_t,...) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_2,
        struct wusb_dev *VAR_3,
        struct usb_bos_descriptor *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;
 struct device *VAR_7 = &VAR_2->dev;
 void *VAR_8, *VAR_9;


 VAR_8 = (void *)VAR_4 + sizeof(*VAR_4);
 VAR_9 = VAR_8 + VAR_5 - sizeof(*VAR_4);
 while (VAR_8 < VAR_9) {
  struct usb_dev_cap_header *VAR_10 = VAR_8;
  size_t VAR_11;
  u8 VAR_12;
  if (VAR_9 - VAR_8 < sizeof(*VAR_10)) {
   FUNC_0(VAR_7, "Device BUG? premature end of BOS header "
    "data [offset 0x%02x]: only %zu bytes left\n",
    (int)(VAR_8 - (void *)VAR_4), VAR_9 - VAR_8);
   VAR_6 = -VAR_1;
   goto error_bad_cap;
  }
  VAR_11 = VAR_10->bLength;
  VAR_12 = VAR_10->bDevCapabilityType;
  if (VAR_11 == 0)
   break;
  if (VAR_11 > VAR_9 - VAR_8) {
   FUNC_0(VAR_7, "Device BUG? premature end of BOS data "
    "[offset 0x%02x cap %02x %zu bytes]: "
    "only %zu bytes left\n",
    (int)(VAR_8 - (void *)VAR_4),
    VAR_12, VAR_11, VAR_9 - VAR_8);
   VAR_6 = -VAR_0;
   goto error_bad_cap;
  }
  switch (VAR_12) {
  case 128:
   if (VAR_11 != sizeof(*VAR_3->wusb_cap_descr))
    FUNC_0(VAR_7, "Device BUG? WUSB Capability "
     "descriptor is %zu bytes vs %zu "
     "needed\n", VAR_11,
     sizeof(*VAR_3->wusb_cap_descr));
   else
    VAR_3->wusb_cap_descr = VAR_8;
   break;
  default:
   FUNC_0(VAR_7, "BUG? Unknown BOS capability 0x%02x "
    "(%zu bytes) at offset 0x%02x\n", VAR_12,
    VAR_11, (int)(VAR_8 - (void *)VAR_4));
  }
  VAR_8 += VAR_11;
 }
 VAR_6 = 0;
error_bad_cap:
 return VAR_6;
}
