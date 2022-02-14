
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct usbtmc_device_data {scalar_t__ bulk_in; int usb_dev; TYPE_4__* intf; int bTag_last_read; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct device {int dummy; } ;
struct TYPE_8__ {struct device dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_6__ {scalar_t__ bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;


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
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*,int ,int*,int ) ;
 int FUNC_6 (int ,int ,int ,int,int ,scalar_t__,int*,int,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct usbtmc_device_data *VAR_14)
{
 u8 *VAR_15;
 struct device *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 struct usb_host_interface *VAR_20;
 int VAR_21;

 VAR_16 = &VAR_14->intf->dev;
 VAR_15 = FUNC_3(VAR_6, VAR_2);
 if (!VAR_15)
  return -VAR_0;

 VAR_17 = FUNC_6(VAR_14->usb_dev,
        FUNC_8(VAR_14->usb_dev, 0),
        VAR_5,
        VAR_11 | VAR_13 | VAR_12,
        VAR_14->bTag_last_read, VAR_14->bulk_in,
        VAR_15, 2, VAR_10);

 if (VAR_17 < 0) {
  FUNC_1(VAR_16, "usb_control_msg returned %d\n", VAR_17);
  goto exit;
 }

 FUNC_0(VAR_16, "INITIATE_ABORT_BULK_IN returned %x\n", VAR_15[0]);

 if (VAR_15[0] == VAR_7) {
  VAR_17 = 0;
  goto exit;
 }

 if (VAR_15[0] != VAR_9) {
  FUNC_1(VAR_16, "INITIATE_ABORT_BULK_IN returned %x\n",
   VAR_15[0]);
  VAR_17 = -VAR_1;
  goto exit;
 }

 VAR_21 = 0;
 VAR_20 = VAR_14->intf->cur_altsetting;
 for (VAR_18 = 0; VAR_18 < VAR_20->desc.bNumEndpoints; VAR_18++)
  if (VAR_20->endpoint[VAR_18].desc.bEndpointAddress ==
   VAR_14->bulk_in)
   VAR_21 = FUNC_4(VAR_20->endpoint[VAR_18].
      desc.wMaxPacketSize);

 if (VAR_21 == 0) {
  FUNC_1(VAR_16, "Couldn't get wMaxPacketSize\n");
  VAR_17 = -VAR_1;
  goto exit;
 }

 FUNC_0(&VAR_14->intf->dev, "wMaxPacketSize is %d\n", VAR_21);

 VAR_18 = 0;

 do {
  FUNC_0(VAR_16, "Reading from bulk in EP\n");

  VAR_17 = FUNC_5(VAR_14->usb_dev,
      FUNC_7(VAR_14->usb_dev,
        VAR_14->bulk_in),
      VAR_15, VAR_6,
      &VAR_19, VAR_10);

  VAR_18++;

  if (VAR_17 < 0) {
   FUNC_1(VAR_16, "usb_bulk_msg returned %d\n", VAR_17);
   goto exit;
  }
 } while ((VAR_19 == VAR_21) &&
   (VAR_18 < VAR_3));

 if (VAR_19 == VAR_21) {
  FUNC_1(VAR_16, "Couldn't clear device buffer within %d cycles\n",
   VAR_3);
  VAR_17 = -VAR_1;
  goto exit;
 }

 VAR_18 = 0;

usbtmc_abort_bulk_in_status:
 VAR_17 = FUNC_6(VAR_14->usb_dev,
        FUNC_8(VAR_14->usb_dev, 0),
        VAR_4,
        VAR_11 | VAR_13 | VAR_12,
        0, VAR_14->bulk_in, VAR_15, 0x08,
        VAR_10);

 if (VAR_17 < 0) {
  FUNC_1(VAR_16, "usb_control_msg returned %d\n", VAR_17);
  goto exit;
 }

 FUNC_0(VAR_16, "INITIATE_ABORT_BULK_IN returned %x\n", VAR_15[0]);

 if (VAR_15[0] == VAR_9) {
  VAR_17 = 0;
  goto exit;
 }

 if (VAR_15[0] != VAR_8) {
  FUNC_1(VAR_16, "INITIATE_ABORT_BULK_IN returned %x\n", VAR_15[0]);
  VAR_17 = -VAR_1;
  goto exit;
 }

 if (VAR_15[1] == 1)
  do {
   FUNC_0(VAR_16, "Reading from bulk in EP\n");

   VAR_17 = FUNC_5(VAR_14->usb_dev,
       FUNC_7(VAR_14->usb_dev,
         VAR_14->bulk_in),
       VAR_15, VAR_6,
       &VAR_19, VAR_10);

   VAR_18++;

   if (VAR_17 < 0) {
    FUNC_1(VAR_16, "usb_bulk_msg returned %d\n", VAR_17);
    goto exit;
   }
  } while ((VAR_19 = VAR_21) &&
    (VAR_18 < VAR_3));

 if (VAR_19 == VAR_21) {
  FUNC_1(VAR_16, "Couldn't clear device buffer within %d cycles\n",
   VAR_3);
  VAR_17 = -VAR_1;
  goto exit;
 }

 goto usbtmc_abort_bulk_in_status;

exit:
 FUNC_2(VAR_15);
 return VAR_17;

}
