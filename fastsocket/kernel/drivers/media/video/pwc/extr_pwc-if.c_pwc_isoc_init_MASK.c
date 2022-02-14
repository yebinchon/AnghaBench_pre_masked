
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_6__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct usb_device {int actconfig; } ;
struct urb {int interval; int number_of_packets; TYPE_4__* iso_frame_desc; scalar_t__ start_frame; struct pwc_device* context; int complete; int transfer_buffer_length; int transfer_buffer; int transfer_flags; int pipe; struct usb_device* dev; } ;
struct pwc_device {int iso_init; int vmax_packet_size; int vendpoint; TYPE_5__* sbuf; int valternate; struct usb_device* udev; scalar_t__ vsync; } ;
struct TYPE_10__ {struct urb* urb; int data; } ;
struct TYPE_9__ {int offset; int length; } ;
struct TYPE_7__ {int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_8__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,struct urb*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pwc_device*) ;
 int VAR_9 ;
 struct urb* FUNC_5 (int,int ) ;
 struct usb_host_interface* FUNC_6 (struct usb_interface*,int ) ;
 int FUNC_7 (struct urb*) ;
 struct usb_interface* FUNC_8 (struct usb_device*,int ) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (struct usb_device*,int ,int ) ;
 int FUNC_11 (struct urb*,int ) ;

int FUNC_12(struct pwc_device *VAR_10)
{
 struct usb_device *VAR_11;
 struct urb *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 struct usb_interface *VAR_16;
 struct usb_host_interface *VAR_17 = ((void*)0);

 if (VAR_10 == ((void*)0))
  return -VAR_0;
 if (VAR_10->iso_init)
  return 0;
 VAR_10->vsync = 0;
 VAR_11 = VAR_10->udev;


 if (!VAR_11->actconfig)
  return -VAR_0;
 VAR_16 = FUNC_8(VAR_11, 0);
 if (VAR_16)
  VAR_17 = FUNC_6(VAR_16, VAR_10->valternate);

 if (!VAR_17)
  return -VAR_0;


 VAR_10->vmax_packet_size = -1;
 for (VAR_13 = 0; VAR_13 < VAR_17->desc.bNumEndpoints; VAR_13++) {
  if ((VAR_17->endpoint[VAR_13].desc.bEndpointAddress & 0xF) == VAR_10->vendpoint) {
   VAR_10->vmax_packet_size = FUNC_3(VAR_17->endpoint[VAR_13].desc.wMaxPacketSize);
   break;
  }
 }

 if (VAR_10->vmax_packet_size < 0 || VAR_10->vmax_packet_size > VAR_6) {
  FUNC_2("Failed to find packet size for video endpoint in current alternate setting.\n");
  return -VAR_1;
 }


 VAR_15 = 0;
 FUNC_1("Setting alternate interface %d\n", VAR_10->valternate);
 VAR_15 = FUNC_10(VAR_10->udev, 0, VAR_10->valternate);
 if (VAR_15 < 0)
  return VAR_15;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_12 = FUNC_5(VAR_5, VAR_3);
  if (VAR_12 == ((void*)0)) {
   FUNC_2("Failed to allocate urb %d\n", VAR_13);
   VAR_15 = -VAR_2;
   break;
  }
  VAR_10->sbuf[VAR_13].urb = VAR_12;
  FUNC_0("Allocated URB at 0x%p\n", VAR_12);
 }
 if (VAR_15) {

  while (VAR_13--) {
   FUNC_7(VAR_10->sbuf[VAR_13].urb);
   VAR_10->sbuf[VAR_13].urb = ((void*)0);
  }
  return VAR_15;
 }


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_12 = VAR_10->sbuf[VAR_13].urb;

  VAR_12->interval = 1;
  VAR_12->dev = VAR_11;
  VAR_12->pipe = FUNC_9(VAR_11, VAR_10->vendpoint);
  VAR_12->transfer_flags = VAR_8;
  VAR_12->transfer_buffer = VAR_10->sbuf[VAR_13].data;
  VAR_12->transfer_buffer_length = VAR_4;
  VAR_12->complete = VAR_9;
  VAR_12->context = VAR_10;
  VAR_12->start_frame = 0;
  VAR_12->number_of_packets = VAR_5;
  for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
   VAR_12->iso_frame_desc[VAR_14].offset = VAR_14 * VAR_6;
   VAR_12->iso_frame_desc[VAR_14].length = VAR_10->vmax_packet_size;
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_15 = FUNC_11(VAR_10->sbuf[VAR_13].urb, VAR_3);
  if (VAR_15) {
   FUNC_2("isoc_init() submit_urb %d failed with error %d\n", VAR_13, VAR_15);
   VAR_10->iso_init = 1;
   FUNC_4(VAR_10);
   return VAR_15;
  }
  FUNC_0("URB 0x%p submitted.\n", VAR_10->sbuf[VAR_13].urb);
 }


 VAR_10->iso_init = 1;
 FUNC_1("<< pwc_isoc_init()\n");
 return 0;
}
