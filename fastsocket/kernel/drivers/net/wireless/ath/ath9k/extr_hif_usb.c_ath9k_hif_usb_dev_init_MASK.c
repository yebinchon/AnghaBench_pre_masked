
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {int bmAttributes; scalar_t__ bInterval; } ;
struct hif_device_usb {TYPE_4__* udev; int fw_name; TYPE_1__* interface; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_5__ {struct usb_host_interface* altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hif_device_usb*) ;
 int FUNC_1 (struct hif_device_usb*) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static int FUNC_3(struct hif_device_usb *VAR_3)
{
 struct usb_host_interface *VAR_4 = &VAR_3->interface->altsetting[0];
 struct usb_endpoint_descriptor *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {
  FUNC_2(&VAR_3->udev->dev,
   "ath9k_htc: Firmware - %s download failed\n",
   VAR_3->fw_name);
  return VAR_6;
 }





 for (VAR_7 = 0; VAR_7 < VAR_4->desc.bNumEndpoints; VAR_7++) {
  VAR_5 = &VAR_4->endpoint[VAR_7].desc;
  if ((VAR_5->bmAttributes & VAR_0)
    == VAR_2) {
   VAR_5->bmAttributes &= ~VAR_0;
   VAR_5->bmAttributes |= VAR_1;
   VAR_5->bInterval = 0;
  }
 }


 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6) {
  FUNC_2(&VAR_3->udev->dev,
   "ath9k_htc: Unable to allocate URBs\n");
  return VAR_6;
 }

 return 0;
}
