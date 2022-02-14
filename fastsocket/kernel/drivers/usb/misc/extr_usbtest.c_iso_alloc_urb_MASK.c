
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bInterval; int wMaxPacketSize; } ;
struct usb_device {int dummy; } ;
struct urb {int pipe; unsigned int number_of_packets; long transfer_buffer_length; int interval; int transfer_flags; int complete; TYPE_1__* iso_frame_desc; int transfer_buffer; int transfer_dma; struct usb_device* dev; } ;
struct TYPE_2__ {unsigned int offset; scalar_t__ length; } ;


 unsigned int FUNC_0 (long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,long) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int) ;
 struct urb* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct usb_device*,long,int ,int *) ;
 int FUNC_6 (struct urb*) ;

__attribute__((used)) static struct urb *FUNC_7 (
 struct usb_device *VAR_4,
 int VAR_5,
 struct usb_endpoint_descriptor *VAR_6,
 long VAR_7
)
{
 struct urb *VAR_8;
 unsigned VAR_9, VAR_10, VAR_11;

 if (VAR_7 < 0 || !VAR_6)
  return ((void*)0);
 VAR_10 = 0x7ff & FUNC_1(VAR_6->wMaxPacketSize);
 VAR_10 *= 1 + (0x3 & (FUNC_1(VAR_6->wMaxPacketSize) >> 11));
 VAR_11 = FUNC_0(VAR_7, VAR_10);

 VAR_8 = FUNC_4 (VAR_11, VAR_0);
 if (!VAR_8)
  return VAR_8;
 VAR_8->dev = VAR_4;
 VAR_8->pipe = VAR_5;

 VAR_8->number_of_packets = VAR_11;
 VAR_8->transfer_buffer_length = VAR_7;
 VAR_8->transfer_buffer = FUNC_5 (VAR_4, VAR_7, VAR_0,
   &VAR_8->transfer_dma);
 if (!VAR_8->transfer_buffer) {
  FUNC_6 (VAR_8);
  return ((void*)0);
 }
 FUNC_2 (VAR_8->transfer_buffer, 0, VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {

  VAR_8->iso_frame_desc[VAR_9].length = FUNC_3 ((unsigned) VAR_7, VAR_10);
  VAR_7 -= VAR_8->iso_frame_desc[VAR_9].length;

  VAR_8->iso_frame_desc[VAR_9].offset = VAR_10 * VAR_9;
 }

 VAR_8->complete = VAR_3;

 VAR_8->interval = 1 << (VAR_6->bInterval - 1);
 VAR_8->transfer_flags = VAR_1 | VAR_2;
 return VAR_8;
}
