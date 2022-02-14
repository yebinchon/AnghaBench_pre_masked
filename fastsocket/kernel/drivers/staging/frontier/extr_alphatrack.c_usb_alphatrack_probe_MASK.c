
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
struct TYPE_6__ {void* bMaxPacketSize0; } ;
struct usb_device {TYPE_3__ descriptor; } ;
struct usb_alphatrack {int interrupt_in_endpoint_size; int interrupt_out_endpoint_size; int writes_pending; struct usb_endpoint_descriptor* interrupt_out_endpoint; scalar_t__ interrupt_out_interval; struct usb_endpoint_descriptor* interrupt_in_endpoint; scalar_t__ interrupt_in_interval; void* interrupt_out_urb; void* write_buffer; void* interrupt_out_buffer; void* interrupt_in_urb; void* oldi_buffer; void* interrupt_in_buffer; void* ring_buffer; int write_wait; int read_wait; struct usb_interface* intf; int sem; } ;
struct alphatrack_ocmd {int dummy; } ;
struct alphatrack_icmd {int dummy; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 void* FUNC_7 (int,int ) ;
 struct usb_alphatrack* FUNC_8 (int,int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_11 (int ,int ) ;
 int VAR_9 ;
 int FUNC_12 (struct usb_alphatrack*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor*) ;
 int FUNC_15 (struct usb_interface*,int *) ;
 int FUNC_16 (struct usb_interface*,struct usb_alphatrack*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_11,
    const struct usb_device_id *VAR_12)
{
 struct usb_device *VAR_13 = FUNC_6(VAR_11);
 struct usb_alphatrack *VAR_14 = ((void*)0);
 struct usb_host_interface *VAR_15;
 struct usb_endpoint_descriptor *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19 = -VAR_0;



 VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_1);
 if (VAR_14 == ((void*)0)) {
  FUNC_1(&VAR_11->dev, "Out of memory\n");
  goto exit;
 }
 FUNC_4(&VAR_14->sem);
 VAR_14->intf = VAR_11;
 FUNC_5(&VAR_14->read_wait);
 FUNC_5(&VAR_14->write_wait);

 VAR_15 = VAR_11->cur_altsetting;


 for (VAR_17 = 0; VAR_17 < VAR_15->desc.bNumEndpoints; ++VAR_17) {
  VAR_16 = &VAR_15->endpoint[VAR_17].desc;

  if (FUNC_13(VAR_16))
   VAR_14->interrupt_in_endpoint = VAR_16;

  if (FUNC_14(VAR_16))
   VAR_14->interrupt_out_endpoint = VAR_16;
 }
 if (VAR_14->interrupt_in_endpoint == ((void*)0)) {
  FUNC_1(&VAR_11->dev, "Interrupt in endpoint not found\n");
  goto error;
 }
 if (VAR_14->interrupt_out_endpoint == ((void*)0))
  FUNC_3(&VAR_11->dev,
    "Interrupt out endpoint not found"
    "(using control endpoint instead)\n");

 VAR_14->interrupt_in_endpoint_size =
     FUNC_9(VAR_14->interrupt_in_endpoint->wMaxPacketSize);

 if (VAR_14->interrupt_in_endpoint_size != 64)
  FUNC_3(&VAR_11->dev, "Interrupt in endpoint size is not 64!\n");

 if (VAR_8 == 0)
  VAR_8 = VAR_2;

 VAR_18 = FUNC_10(VAR_8, VAR_2);



 VAR_14->ring_buffer =
     FUNC_7((VAR_18 * sizeof(struct alphatrack_icmd)), VAR_1);

 if (!VAR_14->ring_buffer) {
  FUNC_1(&VAR_11->dev,
   "Couldn't allocate input ring_buffer of size %d\n",
   VAR_18);
  goto error;
 }

 VAR_14->interrupt_in_buffer =
     FUNC_7(VAR_14->interrupt_in_endpoint_size, VAR_1);

 if (!VAR_14->interrupt_in_buffer) {
  FUNC_1(&VAR_11->dev, "Couldn't allocate interrupt_in_buffer\n");
  goto error;
 }
 VAR_14->oldi_buffer = FUNC_7(VAR_14->interrupt_in_endpoint_size, VAR_1);
 if (!VAR_14->oldi_buffer) {
  FUNC_1(&VAR_11->dev, "Couldn't allocate old buffer\n");
  goto error;
 }
 VAR_14->interrupt_in_urb = FUNC_11(0, VAR_1);
 if (!VAR_14->interrupt_in_urb) {
  FUNC_1(&VAR_11->dev, "Couldn't allocate interrupt_in_urb\n");
  goto error;
 }

 VAR_14->interrupt_out_endpoint_size =
     VAR_14->interrupt_out_endpoint ? FUNC_9(VAR_14->
            interrupt_out_endpoint->
            wMaxPacketSize) : VAR_13->
     descriptor.bMaxPacketSize0;

 if (VAR_14->interrupt_out_endpoint_size != 64)
  FUNC_3(&VAR_11->dev,
    "Interrupt out endpoint size is not 64!)\n");

 if (VAR_10 == 0)
  VAR_10 = VAR_5;
 VAR_18 = FUNC_10(VAR_10, VAR_5);

 VAR_14->interrupt_out_buffer =
     FUNC_7(VAR_18 * VAR_14->interrupt_out_endpoint_size, VAR_1);

 if (!VAR_14->interrupt_out_buffer) {
  FUNC_1(&VAR_11->dev, "Couldn't allocate interrupt_out_buffer\n");
  goto error;
 }

 VAR_14->write_buffer =
     FUNC_7(sizeof(struct alphatrack_ocmd) * VAR_18, VAR_1);

 if (!VAR_14->write_buffer) {
  FUNC_1(&VAR_11->dev, "Couldn't allocate write_buffer \n");
  goto error;
 }

 VAR_14->interrupt_out_urb = FUNC_11(0, VAR_1);
 if (!VAR_14->interrupt_out_urb) {
  FUNC_1(&VAR_11->dev, "Couldn't allocate interrupt_out_urb\n");
  goto error;
 }
 VAR_14->interrupt_in_interval =
     VAR_6 >
     VAR_14->interrupt_in_endpoint->
     bInterval ? VAR_6 : VAR_14->interrupt_in_endpoint->
     bInterval;
 if (VAR_14->interrupt_out_endpoint)
  VAR_14->interrupt_out_interval =
      VAR_7 >
      VAR_14->interrupt_out_endpoint->
      bInterval ? VAR_7 : VAR_14->
      interrupt_out_endpoint->bInterval;


 FUNC_16(VAR_11, VAR_14);

 FUNC_0(&VAR_14->writes_pending, 0);
 VAR_19 = FUNC_15(VAR_11, &VAR_9);
 if (VAR_19) {

  FUNC_1(&VAR_11->dev,
   "Not able to get a minor for this device.\n");
  FUNC_16(VAR_11, ((void*)0));
  goto error;
 }


 FUNC_2(&VAR_11->dev,
   "Alphatrack Device #%d now attached to major %d minor %d\n",
   (VAR_11->minor - VAR_3), VAR_4,
   VAR_11->minor);

exit:
 return VAR_19;

error:
 FUNC_12(VAR_14);

 return VAR_19;
}
