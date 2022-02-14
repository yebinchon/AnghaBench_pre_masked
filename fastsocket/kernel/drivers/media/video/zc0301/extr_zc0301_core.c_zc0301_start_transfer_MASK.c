
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zc0301_device {scalar_t__* transfer_buffer; struct urb** urb; int * frame_current; struct usb_device* usbdev; } ;
struct usb_host_interface {TYPE_2__* endpoint; } ;
struct usb_device {int dummy; } ;
struct urb {unsigned int number_of_packets; unsigned int transfer_buffer_length; int interval; TYPE_3__* iso_frame_desc; scalar_t__ transfer_buffer; int complete; int transfer_flags; int pipe; struct zc0301_device* context; struct usb_device* dev; } ;
typedef size_t s8 ;
struct TYPE_6__ {unsigned int offset; unsigned int length; } ;
struct TYPE_4__ {int wMaxPacketSize; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int const VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int const,int ) ;
 unsigned int FUNC_3 (int ) ;
 struct urb* FUNC_4 (unsigned int const,int ) ;
 struct usb_host_interface* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct usb_device*,int ) ;
 int FUNC_8 (struct urb*) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (struct usb_device*,int ,int ) ;
 int FUNC_11 (struct urb*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(struct zc0301_device* VAR_7)
{
 struct usb_device *VAR_8 = VAR_7->usbdev;
 struct usb_host_interface* VAR_9 = FUNC_5(
           FUNC_7(VAR_8, 0),
           VAR_3);
 const unsigned int VAR_10 = FUNC_3(VAR_9->
          endpoint[0].desc.wMaxPacketSize);
 struct urb* VAR_11;
 s8 VAR_12, VAR_13;
 int VAR_14 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_7->transfer_buffer[VAR_12] = FUNC_2(VAR_4 * VAR_10,
        VAR_1);
  if (!VAR_7->transfer_buffer[VAR_12]) {
   VAR_14 = -VAR_0;
   FUNC_0(1, "Not enough memory");
   goto free_buffers;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11 = FUNC_4(VAR_4, VAR_1);
  VAR_7->urb[VAR_12] = VAR_11;
  if (!VAR_11) {
   VAR_14 = -VAR_0;
   FUNC_0(1, "usb_alloc_urb() failed");
   goto free_urbs;
  }
  VAR_11->dev = VAR_8;
  VAR_11->context = VAR_7;
  VAR_11->pipe = FUNC_9(VAR_8, 1);
  VAR_11->transfer_flags = VAR_2;
  VAR_11->number_of_packets = VAR_4;
  VAR_11->complete = VAR_6;
  VAR_11->transfer_buffer = VAR_7->transfer_buffer[VAR_12];
  VAR_11->transfer_buffer_length = VAR_10 * VAR_4;
  VAR_11->interval = 1;
  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
   VAR_11->iso_frame_desc[VAR_13].offset = VAR_10 * VAR_13;
   VAR_11->iso_frame_desc[VAR_13].length = VAR_10;
  }
 }

 VAR_14 = FUNC_10(VAR_8, 0, VAR_3);
 if (VAR_14) {
  FUNC_0(1, "usb_set_interface() failed");
  goto free_urbs;
 }

 VAR_7->frame_current = ((void*)0);

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_14 = FUNC_11(VAR_7->urb[VAR_12], VAR_1);
  if (VAR_14) {
   for (VAR_13 = VAR_12-1; VAR_13 >= 0; VAR_13--)
    FUNC_8(VAR_7->urb[VAR_13]);
   FUNC_0(1, "usb_submit_urb() failed, error %d", VAR_14);
   goto free_urbs;
  }
 }

 return 0;

free_urbs:
 for (VAR_12 = 0; (VAR_12 < VAR_5) && VAR_7->urb[VAR_12]; VAR_12++)
  FUNC_6(VAR_7->urb[VAR_12]);

free_buffers:
 for (VAR_12 = 0; (VAR_12 < VAR_5) && VAR_7->transfer_buffer[VAR_12]; VAR_12++)
  FUNC_1(VAR_7->transfer_buffer[VAR_12]);

 return VAR_14;
}
