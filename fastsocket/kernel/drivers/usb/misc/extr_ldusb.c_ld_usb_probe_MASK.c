
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {scalar_t__ minor; int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bInterval; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int bMaxPacketSize0; int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {TYPE_3__ descriptor; } ;
struct ld_usb {int interrupt_in_endpoint_size; int interrupt_out_endpoint_size; struct usb_endpoint_descriptor* interrupt_out_endpoint; scalar_t__ interrupt_out_interval; struct usb_endpoint_descriptor* interrupt_in_endpoint; scalar_t__ interrupt_in_interval; void* interrupt_out_urb; void* interrupt_out_buffer; void* interrupt_in_urb; void* interrupt_in_buffer; void* ring_buffer; int write_wait; int read_wait; struct usb_interface* intf; int rbsl; int mutex; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (int,int ) ;
 struct ld_usb* FUNC_7 (int,int ) ;
 int VAR_7 ;
 int FUNC_8 (struct ld_usb*) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int *) ;
 int VAR_10 ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor*) ;
 int FUNC_15 (struct usb_interface*,int *) ;
 int FUNC_16 (struct usb_interface*,struct ld_usb*) ;
 int FUNC_17 (struct usb_device*,int,char*,int) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_12, const struct usb_device_id *VAR_13)
{
 struct usb_device *VAR_14 = FUNC_4(VAR_12);
 struct ld_usb *VAR_15 = ((void*)0);
 struct usb_host_interface *VAR_16;
 struct usb_endpoint_descriptor *VAR_17;
 char *VAR_18;
 int VAR_19;
 int VAR_20 = -VAR_0;



 VAR_15 = FUNC_7(sizeof(*VAR_15), VAR_1);
 if (VAR_15 == ((void*)0)) {
  FUNC_0(&VAR_12->dev, "Out of memory\n");
  goto exit;
 }
 FUNC_10(&VAR_15->mutex);
 FUNC_11(&VAR_15->rbsl);
 VAR_15->intf = VAR_12;
 FUNC_3(&VAR_15->read_wait);
 FUNC_3(&VAR_15->write_wait);


 if ((FUNC_9(VAR_14->descriptor.idVendor) == VAR_6) &&
     ((FUNC_9(VAR_14->descriptor.idProduct) == VAR_2) ||
      (FUNC_9(VAR_14->descriptor.idProduct) == VAR_3)) &&
     (FUNC_9(VAR_14->descriptor.bcdDevice) <= 0x103)) {
  VAR_18 = FUNC_6(256, VAR_1);
  if (VAR_18 == ((void*)0)) {
   FUNC_0(&VAR_12->dev, "Couldn't allocate string buffer\n");
   goto error;
  }

  FUNC_17(VAR_14, 255, VAR_18, 256);
  FUNC_5(VAR_18);
 }

 VAR_16 = VAR_12->cur_altsetting;


 for (VAR_19 = 0; VAR_19 < VAR_16->desc.bNumEndpoints; ++VAR_19) {
  VAR_17 = &VAR_16->endpoint[VAR_19].desc;

  if (FUNC_13(VAR_17))
   VAR_15->interrupt_in_endpoint = VAR_17;

  if (FUNC_14(VAR_17))
   VAR_15->interrupt_out_endpoint = VAR_17;
 }
 if (VAR_15->interrupt_in_endpoint == ((void*)0)) {
  FUNC_0(&VAR_12->dev, "Interrupt in endpoint not found\n");
  goto error;
 }
 if (VAR_15->interrupt_out_endpoint == ((void*)0))
  FUNC_2(&VAR_12->dev, "Interrupt out endpoint not found (using control endpoint instead)\n");

 VAR_15->interrupt_in_endpoint_size = FUNC_9(VAR_15->interrupt_in_endpoint->wMaxPacketSize);
 VAR_15->ring_buffer = FUNC_6(VAR_10*(sizeof(size_t)+VAR_15->interrupt_in_endpoint_size), VAR_1);
 if (!VAR_15->ring_buffer) {
  FUNC_0(&VAR_12->dev, "Couldn't allocate ring_buffer\n");
  goto error;
 }
 VAR_15->interrupt_in_buffer = FUNC_6(VAR_15->interrupt_in_endpoint_size, VAR_1);
 if (!VAR_15->interrupt_in_buffer) {
  FUNC_0(&VAR_12->dev, "Couldn't allocate interrupt_in_buffer\n");
  goto error;
 }
 VAR_15->interrupt_in_urb = FUNC_12(0, VAR_1);
 if (!VAR_15->interrupt_in_urb) {
  FUNC_0(&VAR_12->dev, "Couldn't allocate interrupt_in_urb\n");
  goto error;
 }
 VAR_15->interrupt_out_endpoint_size = VAR_15->interrupt_out_endpoint ? FUNC_9(VAR_15->interrupt_out_endpoint->wMaxPacketSize) :
          VAR_14->descriptor.bMaxPacketSize0;
 VAR_15->interrupt_out_buffer = FUNC_6(VAR_11*VAR_15->interrupt_out_endpoint_size, VAR_1);
 if (!VAR_15->interrupt_out_buffer) {
  FUNC_0(&VAR_12->dev, "Couldn't allocate interrupt_out_buffer\n");
  goto error;
 }
 VAR_15->interrupt_out_urb = FUNC_12(0, VAR_1);
 if (!VAR_15->interrupt_out_urb) {
  FUNC_0(&VAR_12->dev, "Couldn't allocate interrupt_out_urb\n");
  goto error;
 }
 VAR_15->interrupt_in_interval = VAR_8 > VAR_15->interrupt_in_endpoint->bInterval ? VAR_8 : VAR_15->interrupt_in_endpoint->bInterval;
 if (VAR_15->interrupt_out_endpoint)
  VAR_15->interrupt_out_interval = VAR_9 > VAR_15->interrupt_out_endpoint->bInterval ? VAR_9 : VAR_15->interrupt_out_endpoint->bInterval;


 FUNC_16(VAR_12, VAR_15);

 VAR_20 = FUNC_15(VAR_12, &VAR_7);
 if (VAR_20) {

  FUNC_0(&VAR_12->dev, "Not able to get a minor for this device.\n");
  FUNC_16(VAR_12, ((void*)0));
  goto error;
 }


 FUNC_1(&VAR_12->dev, "LD USB Device #%d now attached to major %d minor %d\n",
  (VAR_12->minor - VAR_4), VAR_5, VAR_12->minor);

exit:
 return VAR_20;

error:
 FUNC_8(VAR_15);

 return VAR_20;
}
