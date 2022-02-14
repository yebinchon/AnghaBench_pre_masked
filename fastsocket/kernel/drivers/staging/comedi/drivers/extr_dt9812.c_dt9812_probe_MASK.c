
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_8__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_14__ {int addr; void* size; } ;
struct TYPE_13__ {int addr; void* size; } ;
struct TYPE_12__ {int addr; void* size; } ;
struct TYPE_11__ {int addr; void* size; } ;
struct TYPE_10__ {int addr; void* size; } ;
struct usb_dt9812 {int vendor; int product; int device; int serial; int* analog_out_shadow; int kref; struct slot_dt9812* slot; scalar_t__ digital_out_shadow; int udev; TYPE_7__ read_stream; TYPE_6__ write_stream; TYPE_5__ command_read; TYPE_4__ command_write; TYPE_3__ message_pipe; struct usb_interface* interface; } ;
struct usb_device_id {int dummy; } ;
struct slot_dt9812 {scalar_t__ serial; int mutex; struct usb_dt9812* usb; } ;
typedef int fw ;
struct TYPE_9__ {struct usb_endpoint_descriptor desc; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *) ;
 struct slot_dt9812* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct usb_dt9812*,int,int*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct usb_dt9812* FUNC_8 (int,int ) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct usb_interface*,struct usb_dt9812*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_9,
   const struct usb_device_id *VAR_10)
{
 int VAR_11 = -VAR_2;
 struct usb_dt9812 *VAR_12 = ((void*)0);
 struct usb_host_interface *VAR_13;
 struct usb_endpoint_descriptor *VAR_14;
 int VAR_15;
 u8 VAR_16;


 VAR_12 = FUNC_8(sizeof(*VAR_12), VAR_3);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(&VAR_9->dev, "Out of memory\n");
  goto error;
 }
 FUNC_6(&VAR_12->kref);

 VAR_12->udev = FUNC_12(FUNC_5(VAR_9));
 VAR_12->interface = VAR_9;


 VAR_13 = VAR_9->cur_altsetting;

 if (VAR_13->desc.bNumEndpoints != 5) {
  FUNC_4("Wrong number of endpints.");
  VAR_11 = -VAR_1;
  goto error;
 }

 for (VAR_15 = 0; VAR_15 < VAR_13->desc.bNumEndpoints; ++VAR_15) {
  int VAR_17 = -1;
  VAR_14 = &VAR_13->endpoint[VAR_15].desc;
  switch (VAR_15) {
  case 0:
   VAR_17 = VAR_4;
   VAR_12->message_pipe.addr = VAR_14->bEndpointAddress;
   VAR_12->message_pipe.size =
       FUNC_9(VAR_14->wMaxPacketSize);

   break;
  case 1:
   VAR_17 = VAR_5;
   VAR_12->command_write.addr = VAR_14->bEndpointAddress;
   VAR_12->command_write.size =
       FUNC_9(VAR_14->wMaxPacketSize);
   break;
  case 2:
   VAR_17 = VAR_4;
   VAR_12->command_read.addr = VAR_14->bEndpointAddress;
   VAR_12->command_read.size =
       FUNC_9(VAR_14->wMaxPacketSize);
   break;
  case 3:
   VAR_17 = VAR_5;
   VAR_12->write_stream.addr = VAR_14->bEndpointAddress;
   VAR_12->write_stream.size =
       FUNC_9(VAR_14->wMaxPacketSize);
   break;
  case 4:
   VAR_17 = VAR_4;
   VAR_12->read_stream.addr = VAR_14->bEndpointAddress;
   VAR_12->read_stream.size =
       FUNC_9(VAR_14->wMaxPacketSize);
   break;
  }
  if ((VAR_14->bEndpointAddress & VAR_4) != VAR_17) {
   FUNC_0(&VAR_9->dev,
    "Endpoint has wrong direction.\n");
   VAR_11 = -VAR_1;
   goto error;
  }
 }
 if (FUNC_3(VAR_12, 0, &VAR_16, sizeof(VAR_16)) != 0) {




  FUNC_13(VAR_12->udev);
  for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
   VAR_11 = FUNC_3(VAR_12, 1, &VAR_16, sizeof(VAR_16));
   if (VAR_11 == 0) {
    FUNC_1(&VAR_9->dev,
      "usb_reset_configuration succeded "
      "after %d iterations\n", VAR_15);
    break;
   }
  }
 }

 if (FUNC_3(VAR_12, 1, &VAR_12->vendor, sizeof(VAR_12->vendor)) != 0) {
  FUNC_4("Failed to read vendor.");
  VAR_11 = -VAR_1;
  goto error;
 }
 if (FUNC_3(VAR_12, 3, &VAR_12->product, sizeof(VAR_12->product)) != 0) {
  FUNC_4("Failed to read product.");
  VAR_11 = -VAR_1;
  goto error;
 }
 if (FUNC_3(VAR_12, 5, &VAR_12->device, sizeof(VAR_12->device)) != 0) {
  FUNC_4("Failed to read device.");
  VAR_11 = -VAR_1;
  goto error;
 }
 if (FUNC_3(VAR_12, 7, &VAR_12->serial, sizeof(VAR_12->serial)) != 0) {
  FUNC_4("Failed to read serial.");
  VAR_11 = -VAR_1;
  goto error;
 }

 VAR_12->vendor = FUNC_9(VAR_12->vendor);
 VAR_12->product = FUNC_9(VAR_12->product);
 VAR_12->device = FUNC_9(VAR_12->device);
 VAR_12->serial = FUNC_10(VAR_12->serial);
 switch (VAR_12->device) {
 case 129:
  VAR_12->analog_out_shadow[0] = 0x0800;
  VAR_12->analog_out_shadow[1] = 0x800;
  break;
 case 128:
  VAR_12->analog_out_shadow[0] = 0x0000;
  VAR_12->analog_out_shadow[1] = 0x0000;
  break;
 }
 VAR_12->digital_out_shadow = 0;


 FUNC_14(VAR_9, VAR_12);


 FUNC_1(&VAR_9->dev, "USB DT9812 (%4.4x.%4.4x.%4.4x) #0x%8.8x\n",
   VAR_12->vendor, VAR_12->product, VAR_12->device, VAR_12->serial);

 FUNC_2(&VAR_8);
 {

  struct slot_dt9812 *VAR_18 = ((void*)0);
  struct slot_dt9812 *VAR_19 = ((void*)0);

  for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
   if (!VAR_18 && !VAR_6[VAR_15].usb && VAR_6[VAR_15].serial == 0)
    VAR_18 = &VAR_6[VAR_15];
   if (!VAR_19 && VAR_6[VAR_15].serial == VAR_12->serial)
    VAR_19 = &VAR_6[VAR_15];
  }

  if (!VAR_19)
   VAR_19 = VAR_18;

  if (VAR_19) {
   FUNC_2(&VAR_19->mutex);
   VAR_19->usb = VAR_12;
   VAR_12->slot = VAR_19;
   FUNC_11(&VAR_19->mutex);
  }
 }
 FUNC_11(&VAR_8);

 return 0;

error:
 if (VAR_12)
  FUNC_7(&VAR_12->kref, VAR_7);
 return VAR_11;
}
