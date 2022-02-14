
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_7__ {int bcdDevice; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; } ;
struct usb_device {TYPE_3__ descriptor; int dev; } ;
struct lbs_private {int fw_ready; TYPE_4__* dev; int reset_card; int hw_host_to_card; } ;
struct if_usb_card {int boot2_version; struct lbs_private* priv; int ep_out_buf; void* tx_urb; void* rx_urb; void* ep_in_size; void* ep_out_size; void* ep_out; void* ep_in; struct usb_device* udev; int fw_wq; int fw_timeout; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct if_usb_card*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct if_usb_card*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct if_usb_card*) ;
 int VAR_8 ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct if_usb_card*) ;
 int FUNC_6 (int *) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (int ,int ) ;
 struct if_usb_card* FUNC_9 (int,int ) ;
 struct lbs_private* FUNC_10 (struct if_usb_card*,int *) ;
 int FUNC_11 (int *,char*,...) ;
 int VAR_9 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct lbs_private*) ;
 scalar_t__ FUNC_14 (struct lbs_private*) ;
 void* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int *,int ,unsigned long) ;
 void* FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_20 (struct usb_endpoint_descriptor*) ;
 void* FUNC_21 (struct usb_endpoint_descriptor*) ;
 int FUNC_22 (struct usb_device*) ;
 int FUNC_23 (struct usb_interface*,struct if_usb_card*) ;

__attribute__((used)) static int FUNC_24(struct usb_interface *VAR_10,
   const struct usb_device_id *VAR_11)
{
 struct usb_device *VAR_12;
 struct usb_host_interface *VAR_13;
 struct usb_endpoint_descriptor *VAR_14;
 struct lbs_private *VAR_15;
 struct if_usb_card *VAR_16;
 int VAR_17;

 VAR_12 = FUNC_7(VAR_10);

 VAR_16 = FUNC_9(sizeof(struct if_usb_card), VAR_2);
 if (!VAR_16) {
  FUNC_12("Out of memory allocating private data.\n");
  goto error;
 }

 FUNC_17(&VAR_16->fw_timeout, VAR_6, (unsigned long)VAR_16);
 FUNC_6(&VAR_16->fw_wq);

 VAR_16->udev = VAR_12;
 VAR_13 = VAR_10->cur_altsetting;

 FUNC_11(&VAR_12->dev, "bcdUSB = 0x%X bDeviceClass = 0x%X"
       " bDeviceSubClass = 0x%X, bDeviceProtocol = 0x%X\n",
       FUNC_15(VAR_12->descriptor.bcdUSB),
       VAR_12->descriptor.bDeviceClass,
       VAR_12->descriptor.bDeviceSubClass,
       VAR_12->descriptor.bDeviceProtocol);

 for (VAR_17 = 0; VAR_17 < VAR_13->desc.bNumEndpoints; ++VAR_17) {
  VAR_14 = &VAR_13->endpoint[VAR_17].desc;
  if (FUNC_19(VAR_14)) {
   VAR_16->ep_in_size = FUNC_15(VAR_14->wMaxPacketSize);
   VAR_16->ep_in = FUNC_21(VAR_14);

   FUNC_11(&VAR_12->dev, "in_endpoint = %d\n", VAR_16->ep_in);
   FUNC_11(&VAR_12->dev, "Bulk in size is %d\n", VAR_16->ep_in_size);

  } else if (FUNC_20(VAR_14)) {
   VAR_16->ep_out_size = FUNC_15(VAR_14->wMaxPacketSize);
   VAR_16->ep_out = FUNC_21(VAR_14);

   FUNC_11(&VAR_12->dev, "out_endpoint = %d\n", VAR_16->ep_out);
   FUNC_11(&VAR_12->dev, "Bulk out size is %d\n", VAR_16->ep_out_size);
  }
 }
 if (!VAR_16->ep_out_size || !VAR_16->ep_in_size) {
  FUNC_11(&VAR_12->dev, "Endpoints not found\n");
  goto dealloc;
 }
 if (!(VAR_16->rx_urb = FUNC_18(0, VAR_2))) {
  FUNC_11(&VAR_12->dev, "Rx URB allocation failed\n");
  goto dealloc;
 }
 if (!(VAR_16->tx_urb = FUNC_18(0, VAR_2))) {
  FUNC_11(&VAR_12->dev, "Tx URB allocation failed\n");
  goto dealloc;
 }
 VAR_16->ep_out_buf = FUNC_8(VAR_3, VAR_2);
 if (!VAR_16->ep_out_buf) {
  FUNC_11(&VAR_12->dev, "Could not allocate buffer\n");
  goto dealloc;
 }


 if (FUNC_0(VAR_16, VAR_9, VAR_0)) {
  FUNC_11(&VAR_12->dev, "FW upload failed\n");
  goto err_prog_firmware;
 }

 if (!(VAR_15 = FUNC_10(VAR_16, &VAR_12->dev)))
  goto err_prog_firmware;

 VAR_16->priv = VAR_15;
 VAR_16->priv->fw_ready = 1;

 VAR_15->hw_host_to_card = VAR_7;





 VAR_16->boot2_version = VAR_12->descriptor.bcdDevice;

 FUNC_5(VAR_16);

 if (FUNC_14(VAR_15))
  goto err_start_card;

 FUNC_4(VAR_15);

 FUNC_22(VAR_12);
 FUNC_23(VAR_10, VAR_16);

 if (FUNC_1(&VAR_15->dev->dev, &VAR_5))
  FUNC_12("cannot register lbs_flash_fw attribute\n");

 if (FUNC_1(&VAR_15->dev->dev, &VAR_4))
  FUNC_12("cannot register lbs_flash_boot2 attribute\n");

 return 0;

err_start_card:
 FUNC_13(VAR_15);
err_prog_firmware:
 FUNC_3(VAR_16);
dealloc:
 FUNC_2(VAR_16);

error:
 return -VAR_1;
}
