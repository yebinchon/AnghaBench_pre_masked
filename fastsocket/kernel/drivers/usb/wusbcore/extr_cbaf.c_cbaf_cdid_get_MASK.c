
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wusb_cbaf_device_info {int BandGroups; int CDID; int DeviceFriendlyName; int Length; } ;
struct device {int dummy; } ;
struct cbaf {int device_band_groups; int cdid; int device_name; int buffer_size; TYPE_3__* usb_iface; int usb_dev; struct wusb_cbaf_device_info* buffer; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,size_t,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int,int ,struct wusb_cbaf_device_info*,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct cbaf *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = &VAR_5->usb_iface->dev;
 struct wusb_cbaf_device_info *VAR_8;
 size_t VAR_9;

 VAR_8 = VAR_5->buffer;
 VAR_6 = FUNC_4(
  VAR_5->usb_dev, FUNC_5(VAR_5->usb_dev, 0),
  VAR_0,
  VAR_2 | VAR_4 | VAR_3,
  0x0200, VAR_5->usb_iface->cur_altsetting->desc.bInterfaceNumber,
  VAR_8, VAR_5->buffer_size, 1000 );
 if (VAR_6 < 0) {
  FUNC_0(VAR_7, "Cannot request device information: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_9 = VAR_6 < sizeof(*VAR_8) ? sizeof(*VAR_8) : FUNC_2(VAR_8->Length);
 if (VAR_6 < VAR_9) {
  FUNC_0(VAR_7, "Not enough data in DEVICE_INFO reply (%zu vs "
   "%zu bytes needed)\n", (size_t)VAR_6, VAR_9);
  return VAR_6;
 }

 FUNC_3(VAR_5->device_name, VAR_8->DeviceFriendlyName, VAR_1);
 VAR_5->cdid = VAR_8->CDID;
 VAR_5->device_band_groups = FUNC_1(VAR_8->BandGroups);

 return 0;
}
