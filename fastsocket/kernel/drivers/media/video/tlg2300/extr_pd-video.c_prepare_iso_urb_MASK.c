
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_data {int endpoint_addr; int front; struct urb** urb_array; TYPE_1__* pd; } ;
struct usb_device {int dummy; } ;
struct urb {int interval; int transfer_flags; int number_of_packets; int transfer_buffer_length; TYPE_2__* iso_frame_desc; void* transfer_buffer; int pipe; int context; struct usb_device* dev; int complete; int transfer_dma; } ;
struct TYPE_4__ {int offset; int length; } ;
struct TYPE_3__ {struct usb_device* udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct urb* FUNC_0 (int,int ) ;
 void* FUNC_1 (struct usb_device*,int,int ,int *) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct video_data *VAR_8)
{
 struct usb_device *VAR_9 = VAR_8->pd->udev;
 int VAR_10;

 if (VAR_8->urb_array[0])
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  struct urb *VAR_11;
  void *VAR_12;
  int VAR_13;

  VAR_11 = FUNC_0(VAR_3, VAR_1);
  if (VAR_11 == ((void*)0))
   goto out;

  VAR_8->urb_array[VAR_10] = VAR_11;
  VAR_12 = FUNC_1(VAR_9,
      VAR_2 * VAR_3,
      VAR_1,
      &VAR_11->transfer_dma);

  VAR_11->complete = VAR_7;
  VAR_11->dev = VAR_9;
  VAR_11->context = VAR_8->front;
  VAR_11->pipe = FUNC_2(VAR_9,
      VAR_8->endpoint_addr);
  VAR_11->interval = 1;
  VAR_11->transfer_flags = VAR_5 | VAR_6;
  VAR_11->number_of_packets = VAR_3;
  VAR_11->transfer_buffer = VAR_12;
  VAR_11->transfer_buffer_length = VAR_3 * VAR_2;

  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   VAR_11->iso_frame_desc[VAR_13].offset = VAR_2 * VAR_13;
   VAR_11->iso_frame_desc[VAR_13].length = VAR_2;
  }
 }
 return 0;
out:
 for (; VAR_10 > 0; VAR_10--)
  ;
 return -VAR_0;
}
