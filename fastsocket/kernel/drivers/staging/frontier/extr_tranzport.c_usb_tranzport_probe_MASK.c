
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_tranzport {int interrupt_in_endpoint_size; int interrupt_out_endpoint_size; struct usb_endpoint_descriptor* interrupt_out_endpoint; scalar_t__ interrupt_out_interval; struct usb_endpoint_descriptor* interrupt_in_endpoint; scalar_t__ interrupt_in_interval; void* interrupt_out_urb; void* interrupt_out_buffer; void* interrupt_in_urb; void* interrupt_in_buffer; void* ring_buffer; int write_wait; int read_wait; struct usb_interface* intf; int sem; } ;
struct usb_interface {scalar_t__ minor; int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bInterval; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {void* bMaxPacketSize0; } ;
struct usb_device {TYPE_3__ descriptor; } ;
struct tranzport_cmd {int dummy; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 void* FUNC_7 (int,int ) ;
 struct usb_tranzport* FUNC_8 (int,int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (struct usb_interface*,int *) ;
 int FUNC_15 (struct usb_interface*,struct usb_tranzport*) ;
 int VAR_11 ;
 int FUNC_16 (struct usb_tranzport*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_13,
          const struct usb_device_id *VAR_14) {
 struct usb_device *VAR_15 = FUNC_6(VAR_13);
 struct usb_tranzport *VAR_16 = ((void*)0);
 struct usb_host_interface *VAR_17;
 struct usb_endpoint_descriptor *VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21 = -VAR_0;



  VAR_16 = FUNC_8(sizeof(*VAR_16), VAR_1);
 if (VAR_16 == ((void*)0)) {
  FUNC_0(&VAR_13->dev, "Out of memory\n");
  goto exit;
 }
 FUNC_4(&VAR_16->sem);
 VAR_16->intf = VAR_13;
 FUNC_5(&VAR_16->read_wait);
 FUNC_5(&VAR_16->write_wait);

 VAR_17 = VAR_13->cur_altsetting;


 for (VAR_19 = 0; VAR_19 < VAR_17->desc.bNumEndpoints; ++VAR_19) {
  VAR_18 = &VAR_17->endpoint[VAR_19].desc;

  if (FUNC_12(VAR_18))
   VAR_16->interrupt_in_endpoint = VAR_18;

  if (FUNC_13(VAR_18))
   VAR_16->interrupt_out_endpoint = VAR_18;
 }
 if (VAR_16->interrupt_in_endpoint == ((void*)0)) {
  FUNC_0(&VAR_13->dev, "Interrupt in endpoint not found\n");
  goto error;
 }
 if (VAR_16->interrupt_out_endpoint == ((void*)0))
  FUNC_2(&VAR_13->dev,
   "Interrupt out endpoint not found"
   "(using control endpoint instead)\n");

 VAR_16->interrupt_in_endpoint_size =
     FUNC_9(VAR_16->interrupt_in_endpoint->wMaxPacketSize);

 if (VAR_16->interrupt_in_endpoint_size != 8)
  FUNC_2(&VAR_13->dev, "Interrupt in endpoint size is not 8!\n");

 if (VAR_10 == 0)
  VAR_10 = VAR_2;
 VAR_20 = FUNC_10(VAR_10, VAR_2);




 VAR_16->ring_buffer =
     FUNC_7((VAR_20 * sizeof(struct tranzport_cmd)) + 8, VAR_1);

 if (!VAR_16->ring_buffer) {
  FUNC_0(&VAR_13->dev,
   "Couldn't allocate ring_buffer size %d\n", VAR_20);
  goto error;
 }
 VAR_16->interrupt_in_buffer =
     FUNC_7(VAR_16->interrupt_in_endpoint_size, VAR_1);
 if (!VAR_16->interrupt_in_buffer) {
  FUNC_0(&VAR_13->dev, "Couldn't allocate interrupt_in_buffer\n");
  goto error;
 }
 VAR_16->interrupt_in_urb = FUNC_11(0, VAR_1);
 if (!VAR_16->interrupt_in_urb) {
  FUNC_0(&VAR_13->dev, "Couldn't allocate interrupt_in_urb\n");
  goto error;
 }
 VAR_16->interrupt_out_endpoint_size =
     VAR_16->interrupt_out_endpoint ?
     FUNC_9(VAR_16->interrupt_out_endpoint->wMaxPacketSize) :
     VAR_15->descriptor.bMaxPacketSize0;

 if (VAR_16->interrupt_out_endpoint_size != 8)
  FUNC_2(&VAR_13->dev,
    "Interrupt out endpoint size is not 8!)\n");

 VAR_16->interrupt_out_buffer =
     FUNC_7(VAR_12 * VAR_16->interrupt_out_endpoint_size,
      VAR_1);
 if (!VAR_16->interrupt_out_buffer) {
  FUNC_0(&VAR_13->dev, "Couldn't allocate interrupt_out_buffer\n");
  goto error;
 }
 VAR_16->interrupt_out_urb = FUNC_11(0, VAR_1);
 if (!VAR_16->interrupt_out_urb) {
  FUNC_0(&VAR_13->dev, "Couldn't allocate interrupt_out_urb\n");
  goto error;
 }
 VAR_16->interrupt_in_interval =
     VAR_8 >
     VAR_16->interrupt_in_endpoint->bInterval ? VAR_8
     : VAR_16->interrupt_in_endpoint->bInterval;

 if (VAR_16->interrupt_out_endpoint) {
  VAR_16->interrupt_out_interval =
      VAR_9 >
      VAR_16->interrupt_out_endpoint->bInterval ?
      VAR_9 :
      VAR_16->interrupt_out_endpoint->bInterval;
 }


 FUNC_15(VAR_13, VAR_16);

 VAR_21 = FUNC_14(VAR_13, &VAR_11);
 if (VAR_21) {

  FUNC_0(&VAR_13->dev,
   "Not able to get a minor for this device.\n");
  FUNC_15(VAR_13, ((void*)0));
  goto error;
 }

 VAR_21 = FUNC_3(&VAR_13->dev, &VAR_5);
 if (VAR_21)
  goto error;
 VAR_21 = FUNC_3(&VAR_13->dev, &VAR_6);
 if (VAR_21)
  goto error;
 VAR_21 = FUNC_3(&VAR_13->dev, &VAR_7);
 if (VAR_21)
  goto error;


 FUNC_1(&VAR_13->dev,
  "Tranzport Device #%d now attached to major %d minor %d\n",
  (VAR_13->minor - VAR_4), VAR_3,
  VAR_13->minor);

exit:
 return VAR_21;

error:
 FUNC_16(VAR_16);
 return VAR_21;
}
