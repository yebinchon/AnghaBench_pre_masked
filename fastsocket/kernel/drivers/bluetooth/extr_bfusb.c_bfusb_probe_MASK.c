
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_2__* cur_altsetting; } ;
struct TYPE_6__ {int wMaxPacketSize; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct hci_dev {int owner; int ioctl; int destruct; int send; int flush; int close; int open; struct bfusb_data* driver_data; int type; } ;
struct firmware {struct usb_device_id const* size; struct usb_interface* data; } ;
struct bfusb_data {struct hci_dev* hdev; int completed_q; int pending_q; int transmit_q; int * reassembly; int lock; int bulk_pkt_size; int bulk_out_ep; int bulk_in_ep; struct usb_device* udev; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_5__ {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;


 int FUNC_0 (char*,struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hci_dev*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct bfusb_data*,struct usb_interface*,struct usb_device_id const*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct hci_dev* FUNC_4 () ;
 int FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (struct hci_dev*) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct bfusb_data*) ;
 struct bfusb_data* FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct firmware const*) ;
 scalar_t__ FUNC_12 (struct firmware const**,char*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct usb_interface*,struct bfusb_data*) ;

__attribute__((used)) static int FUNC_16(struct usb_interface *VAR_10, const struct usb_device_id *VAR_11)
{
 const struct firmware *VAR_12;
 struct usb_device *VAR_13 = FUNC_7(VAR_10);
 struct usb_host_endpoint *VAR_14;
 struct usb_host_endpoint *VAR_15;
 struct hci_dev *VAR_16;
 struct bfusb_data *VAR_17;

 FUNC_0("intf %p id %p", VAR_10, VAR_11);


 if (VAR_10->cur_altsetting->desc.bNumEndpoints < 2)
  return -VAR_0;

 VAR_14 = &VAR_10->cur_altsetting->endpoint[0];
 VAR_15 = &VAR_10->cur_altsetting->endpoint[1];

 if (!VAR_14 || !VAR_15) {
  FUNC_1("Bulk endpoints not found");
  goto done;
 }


 VAR_17 = FUNC_9(sizeof(struct bfusb_data), VAR_1);
 if (!VAR_17) {
  FUNC_1("Can't allocate memory for control structure");
  goto done;
 }

 VAR_17->udev = VAR_13;
 VAR_17->bulk_in_ep = VAR_15->desc.bEndpointAddress;
 VAR_17->bulk_out_ep = VAR_14->desc.bEndpointAddress;
 VAR_17->bulk_pkt_size = FUNC_10(VAR_14->desc.wMaxPacketSize);

 FUNC_13(&VAR_17->lock);

 VAR_17->reassembly = ((void*)0);

 FUNC_14(&VAR_17->transmit_q);
 FUNC_14(&VAR_17->pending_q);
 FUNC_14(&VAR_17->completed_q);

 if (FUNC_12(&VAR_12, "bfubase.frm", &VAR_13->dev) < 0) {
  FUNC_1("Firmware request failed");
  goto error;
 }

 FUNC_0("firmware data %p size %zu", VAR_12->data, VAR_12->size);

 if (FUNC_3(VAR_17, VAR_12->data, VAR_12->size) < 0) {
  FUNC_1("Firmware loading failed");
  goto release;
 }

 FUNC_11(VAR_12);


 VAR_16 = FUNC_4();
 if (!VAR_16) {
  FUNC_1("Can't allocate HCI device");
  goto error;
 }

 VAR_17->hdev = VAR_16;

 VAR_16->type = VAR_2;
 VAR_16->driver_data = VAR_17;
 FUNC_2(VAR_16, &VAR_10->dev);

 VAR_16->open = VAR_8;
 VAR_16->close = VAR_4;
 VAR_16->flush = VAR_6;
 VAR_16->send = VAR_9;
 VAR_16->destruct = VAR_5;
 VAR_16->ioctl = VAR_7;

 VAR_16->owner = VAR_3;

 if (FUNC_6(VAR_16) < 0) {
  FUNC_1("Can't register HCI device");
  FUNC_5(VAR_16);
  goto error;
 }

 FUNC_15(VAR_10, VAR_17);

 return 0;

release:
 FUNC_11(VAR_12);

error:
 FUNC_8(VAR_17);

done:
 return -VAR_0;
}
