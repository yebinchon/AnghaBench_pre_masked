
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_host_interface {TYPE_2__* endpoint; } ;
struct usb_device {int dummy; } ;
struct urb {unsigned int number_of_packets; unsigned int transfer_buffer_length; int interval; TYPE_3__* iso_frame_desc; scalar_t__ transfer_buffer; int complete; int transfer_flags; int pipe; struct et61x251_device* context; struct usb_device* dev; } ;
struct et61x251_device {scalar_t__* transfer_buffer; struct urb** urb; int * frame_current; struct usb_device* usbdev; } ;
typedef size_t s8 ;
struct TYPE_6__ {unsigned int offset; unsigned int length; } ;
struct TYPE_4__ {int wMaxPacketSize; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct et61x251_device*,int,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int const,int ) ;
 unsigned int FUNC_4 (int ) ;
 struct urb* FUNC_5 (unsigned int const,int ) ;
 struct usb_host_interface* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (struct usb_device*,int ) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (struct usb_device*,int) ;
 int FUNC_11 (struct usb_device*,int ,int ) ;
 int FUNC_12 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_13(struct et61x251_device* VAR_8)
{
 struct usb_device *VAR_9 = VAR_8->usbdev;
 struct urb* VAR_10;
 struct usb_host_interface* VAR_11 = FUNC_6(
         FUNC_8(VAR_9, 0),
         VAR_2);
 const unsigned int VAR_12 = FUNC_4(VAR_11->
          endpoint[0].desc.wMaxPacketSize);
 s8 VAR_13, VAR_14;
 int VAR_15 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_8->transfer_buffer[VAR_13] = FUNC_3(VAR_3 * VAR_12,
        VAR_5);
  if (!VAR_8->transfer_buffer[VAR_13]) {
   VAR_15 = -VAR_1;
   FUNC_0(1, "Not enough memory");
   goto free_buffers;
  }
 }

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_10 = FUNC_5(VAR_3, VAR_5);
  VAR_8->urb[VAR_13] = VAR_10;
  if (!VAR_10) {
   VAR_15 = -VAR_1;
   FUNC_0(1, "usb_alloc_urb() failed");
   goto free_urbs;
  }
  VAR_10->dev = VAR_9;
  VAR_10->context = VAR_8;
  VAR_10->pipe = FUNC_10(VAR_9, 1);
  VAR_10->transfer_flags = VAR_6;
  VAR_10->number_of_packets = VAR_3;
  VAR_10->complete = VAR_7;
  VAR_10->transfer_buffer = VAR_8->transfer_buffer[VAR_13];
  VAR_10->transfer_buffer_length = VAR_12 * VAR_3;
  VAR_10->interval = 1;
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
   VAR_10->iso_frame_desc[VAR_14].offset = VAR_12 * VAR_14;
   VAR_10->iso_frame_desc[VAR_14].length = VAR_12;
  }
 }

 VAR_15 = FUNC_1(VAR_8, 0x01, 0x03);
 VAR_15 = FUNC_1(VAR_8, 0x00, 0x03);
 VAR_15 = FUNC_1(VAR_8, 0x08, 0x03);
 if (VAR_15) {
  VAR_15 = -VAR_0;
  FUNC_0(1, "I/O hardware error");
  goto free_urbs;
 }

 VAR_15 = FUNC_11(VAR_9, 0, VAR_2);
 if (VAR_15) {
  FUNC_0(1, "usb_set_interface() failed");
  goto free_urbs;
 }

 VAR_8->frame_current = ((void*)0);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_15 = FUNC_12(VAR_8->urb[VAR_13], VAR_5);
  if (VAR_15) {
   for (VAR_14 = VAR_13-1; VAR_14 >= 0; VAR_14--)
    FUNC_9(VAR_8->urb[VAR_14]);
   FUNC_0(1, "usb_submit_urb() failed, error %d", VAR_15);
   goto free_urbs;
  }
 }

 return 0;

free_urbs:
 for (VAR_13 = 0; (VAR_13 < VAR_4) && VAR_8->urb[VAR_13]; VAR_13++)
  FUNC_7(VAR_8->urb[VAR_13]);

free_buffers:
 for (VAR_13 = 0; (VAR_13 < VAR_4) && VAR_8->transfer_buffer[VAR_13]; VAR_13++)
  FUNC_2(VAR_8->transfer_buffer[VAR_13]);

 return VAR_15;
}
