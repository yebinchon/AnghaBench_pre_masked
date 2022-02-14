
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usbtmc_device_data {scalar_t__ bulk_in; int bulk_out; int usb_dev; TYPE_1__* intf; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; int wMaxPacketSize; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_4__ {struct usb_host_interface* cur_altsetting; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*,int ,int*,int ) ;
 int FUNC_6 (int ,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct usbtmc_device_data *VAR_18)
{
 struct usb_host_interface *VAR_19;
 struct usb_endpoint_descriptor *VAR_20;
 struct device *VAR_21;
 u8 *VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_21 = &VAR_18->intf->dev;

 FUNC_0(VAR_21, "Sending INITIATE_CLEAR request\n");

 VAR_22 = FUNC_3(VAR_6, VAR_2);
 if (!VAR_22)
  return -VAR_0;

 VAR_23 = FUNC_6(VAR_18->usb_dev,
        FUNC_8(VAR_18->usb_dev, 0),
        VAR_5,
        VAR_10 | VAR_16 | VAR_14,
        0, 0, VAR_22, 1, VAR_9);
 if (VAR_23 < 0) {
  FUNC_1(VAR_21, "usb_control_msg returned %d\n", VAR_23);
  goto exit;
 }

 FUNC_0(VAR_21, "INITIATE_CLEAR returned %x\n", VAR_22[0]);

 if (VAR_22[0] != VAR_8) {
  FUNC_1(VAR_21, "INITIATE_CLEAR returned %x\n", VAR_22[0]);
  VAR_23 = -VAR_1;
  goto exit;
 }

 VAR_26 = 0;
 VAR_19 = VAR_18->intf->cur_altsetting;
 for (VAR_24 = 0; VAR_24 < VAR_19->desc.bNumEndpoints; VAR_24++) {
  VAR_20 = &VAR_19->endpoint[VAR_24].desc;
  if (VAR_20->bEndpointAddress == VAR_18->bulk_in)
   VAR_26 = FUNC_4(VAR_20->wMaxPacketSize);
 }

 if (VAR_26 == 0) {
  FUNC_1(VAR_21, "Couldn't get wMaxPacketSize\n");
  VAR_23 = -VAR_1;
  goto exit;
 }

 FUNC_0(VAR_21, "wMaxPacketSize is %d\n", VAR_26);

 VAR_24 = 0;

usbtmc_clear_check_status:

 FUNC_0(VAR_21, "Sending CHECK_CLEAR_STATUS request\n");

 VAR_23 = FUNC_6(VAR_18->usb_dev,
        FUNC_8(VAR_18->usb_dev, 0),
        VAR_4,
        VAR_10 | VAR_16 | VAR_14,
        0, 0, VAR_22, 2, VAR_9);
 if (VAR_23 < 0) {
  FUNC_1(VAR_21, "usb_control_msg returned %d\n", VAR_23);
  goto exit;
 }

 FUNC_0(VAR_21, "CHECK_CLEAR_STATUS returned %x\n", VAR_22[0]);

 if (VAR_22[0] == VAR_8)
  goto usbtmc_clear_bulk_out_halt;

 if (VAR_22[0] != VAR_7) {
  FUNC_1(VAR_21, "CHECK_CLEAR_STATUS returned %x\n", VAR_22[0]);
  VAR_23 = -VAR_1;
  goto exit;
 }

 if (VAR_22[1] == 1)
  do {
   FUNC_0(VAR_21, "Reading from bulk in EP\n");

   VAR_23 = FUNC_5(VAR_18->usb_dev,
       FUNC_7(VAR_18->usb_dev,
         VAR_18->bulk_in),
       VAR_22, VAR_6,
       &VAR_25, VAR_9);
   VAR_24++;

   if (VAR_23 < 0) {
    FUNC_1(VAR_21, "usb_control_msg returned %d\n",
     VAR_23);
    goto exit;
   }
  } while ((VAR_25 == VAR_26) &&
     (VAR_24 < VAR_3));

 if (VAR_25 == VAR_26) {
  FUNC_1(VAR_21, "Couldn't clear device buffer within %d cycles\n",
   VAR_3);
  VAR_23 = -VAR_1;
  goto exit;
 }

 goto usbtmc_clear_check_status;

usbtmc_clear_bulk_out_halt:

 VAR_23 = FUNC_6(VAR_18->usb_dev,
        FUNC_9(VAR_18->usb_dev, 0),
        VAR_15,
        VAR_11 | VAR_17 |
        VAR_13,
        VAR_12,
        VAR_18->bulk_out, VAR_22, 0,
        VAR_9);
 if (VAR_23 < 0) {
  FUNC_1(VAR_21, "usb_control_msg returned %d\n", VAR_23);
  goto exit;
 }
 VAR_23 = 0;

exit:
 FUNC_2(VAR_22);
 return VAR_23;
}
