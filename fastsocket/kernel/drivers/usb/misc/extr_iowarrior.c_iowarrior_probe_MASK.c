
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; scalar_t__ minor; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_6__ {int bNumEndpoints; scalar_t__ bInterfaceNumber; } ;
struct usb_host_interface {TYPE_3__ desc; TYPE_1__* endpoint; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {int iSerialNumber; int idProduct; } ;
struct usb_device {TYPE_2__ descriptor; } ;
struct iowarrior {scalar_t__ product_id; int report_size; int present; scalar_t__ minor; int chip_serial; struct usb_interface* interface; void* read_queue; struct usb_endpoint_descriptor* int_in_endpoint; void* int_in_buffer; struct usb_device* udev; int int_in_urb; struct usb_endpoint_descriptor* int_out_endpoint; int write_wait; int write_busy; int read_wait; int overflow_flag; int intr_idx_lock; int read_idx; int intr_idx; int mutex; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct iowarrior*) ;
 void* FUNC_6 (int,int ) ;
 struct iowarrior* FUNC_7 (int,int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct usb_device*,int ,int,int,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_16 (struct usb_endpoint_descriptor*) ;
 int FUNC_17 (int ,struct usb_device*,int ,void*,int,int ,struct iowarrior*,int ) ;
 int FUNC_18 (struct usb_device*,int ) ;
 int FUNC_19 (struct usb_interface*,int *) ;
 int FUNC_20 (struct usb_interface*,struct iowarrior*) ;
 int FUNC_21 (struct usb_device*,int ) ;
 int FUNC_22 (struct usb_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_23(struct usb_interface *VAR_10,
      const struct usb_device_id *VAR_11)
{
 struct usb_device *VAR_12 = FUNC_4(VAR_10);
 struct iowarrior *VAR_13 = ((void*)0);
 struct usb_host_interface *VAR_14;
 struct usb_endpoint_descriptor *VAR_15;
 int VAR_16;
 int VAR_17 = -VAR_0;


 VAR_13 = FUNC_7(sizeof(struct iowarrior), VAR_1);
 if (VAR_13 == ((void*)0)) {
  FUNC_1(&VAR_10->dev, "Out of memory\n");
  return VAR_17;
 }

 FUNC_10(&VAR_13->mutex);

 FUNC_0(&VAR_13->intr_idx, 0);
 FUNC_0(&VAR_13->read_idx, 0);
 FUNC_11(&VAR_13->intr_idx_lock);
 FUNC_0(&VAR_13->overflow_flag, 0);
 FUNC_3(&VAR_13->read_wait);
 FUNC_0(&VAR_13->write_busy, 0);
 FUNC_3(&VAR_13->write_wait);

 VAR_13->udev = VAR_12;
 VAR_13->interface = VAR_10;

 VAR_14 = VAR_10->cur_altsetting;
 VAR_13->product_id = FUNC_8(VAR_12->descriptor.idProduct);


 for (VAR_16 = 0; VAR_16 < VAR_14->desc.bNumEndpoints; ++VAR_16) {
  VAR_15 = &VAR_14->endpoint[VAR_16].desc;

  if (FUNC_15(VAR_15))
   VAR_13->int_in_endpoint = VAR_15;
  if (FUNC_16(VAR_15))

   VAR_13->int_out_endpoint = VAR_15;
 }

 VAR_13->report_size = FUNC_8(VAR_13->int_in_endpoint->wMaxPacketSize);
 if ((VAR_13->interface->cur_altsetting->desc.bInterfaceNumber == 0) &&
     (VAR_13->product_id == VAR_5))

  VAR_13->report_size = 7;


 VAR_13->int_in_urb = FUNC_13(0, VAR_1);
 if (!VAR_13->int_in_urb) {
  FUNC_1(&VAR_10->dev, "Couldn't allocate interrupt_in_urb\n");
  goto error;
 }
 VAR_13->int_in_buffer = FUNC_6(VAR_13->report_size, VAR_1);
 if (!VAR_13->int_in_buffer) {
  FUNC_1(&VAR_10->dev, "Couldn't allocate int_in_buffer\n");
  goto error;
 }
 FUNC_17(VAR_13->int_in_urb, VAR_13->udev,
    FUNC_18(VAR_13->udev,
     VAR_13->int_in_endpoint->bEndpointAddress),
    VAR_13->int_in_buffer, VAR_13->report_size,
    VAR_8, VAR_13,
    VAR_13->int_in_endpoint->bInterval);

 VAR_13->read_queue =
     FUNC_6(((VAR_13->report_size + 1) * VAR_3),
      VAR_1);
 if (!VAR_13->read_queue) {
  FUNC_1(&VAR_10->dev, "Couldn't allocate read_queue\n");
  goto error;
 }

 FUNC_9(VAR_13->chip_serial, 0x00, sizeof(VAR_13->chip_serial));
 FUNC_22(VAR_12, VAR_12->descriptor.iSerialNumber, VAR_13->chip_serial,
     sizeof(VAR_13->chip_serial));
 if (FUNC_12(VAR_13->chip_serial) != 8)
  FUNC_9(VAR_13->chip_serial, 0x00, sizeof(VAR_13->chip_serial));


 if (VAR_13->interface->cur_altsetting->desc.bInterfaceNumber == 0) {
     FUNC_14(VAR_12, FUNC_21(VAR_12, 0),
       0x0A,
       VAR_7 | VAR_6, 0,
       0, ((void*)0), 0, VAR_4);
 }

 VAR_13->present = 1;


 FUNC_20(VAR_10, VAR_13);

 VAR_17 = FUNC_19(VAR_10, &VAR_9);
 if (VAR_17) {

  FUNC_1(&VAR_10->dev, "Not able to get a minor for this device.\n");
  FUNC_20(VAR_10, ((void*)0));
  goto error;
 }

 VAR_13->minor = VAR_10->minor;


 FUNC_2(&VAR_10->dev, "IOWarrior product=0x%x, serial=%s interface=%d "
   "now attached to iowarrior%d\n", VAR_13->product_id, VAR_13->chip_serial,
   VAR_14->desc.bInterfaceNumber, VAR_13->minor - VAR_2);
 return VAR_17;

error:
 FUNC_5(VAR_13);
 return VAR_17;
}
