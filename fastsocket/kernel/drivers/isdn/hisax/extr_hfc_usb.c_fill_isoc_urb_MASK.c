
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_complete_t ;
struct usb_device {int dummy; } ;
struct urb {unsigned int pipe; int number_of_packets; int transfer_buffer_length; int interval; TYPE_1__* iso_frame_desc; scalar_t__ actual_length; int transfer_flags; void* transfer_buffer; void* context; int complete; struct usb_device* dev; } ;
struct TYPE_2__ {int offset; int length; scalar_t__ actual_length; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct urb *VAR_1, struct usb_device *VAR_2, unsigned int VAR_3,
       void *VAR_4, int VAR_5, int VAR_6, int VAR_7,
       usb_complete_t VAR_8, void *VAR_9)
{
 int VAR_10;

 VAR_1->dev = VAR_2;
 VAR_1->pipe = VAR_3;
 VAR_1->complete = VAR_8;
 VAR_1->number_of_packets = VAR_5;
 VAR_1->transfer_buffer_length = VAR_6 * VAR_5;
 VAR_1->context = VAR_9;
 VAR_1->transfer_buffer = VAR_4;
 VAR_1->transfer_flags = VAR_0;
 VAR_1->actual_length = 0;
 VAR_1->interval = VAR_7;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_1->iso_frame_desc[VAR_10].offset = VAR_6 * VAR_10;
  VAR_1->iso_frame_desc[VAR_10].length = VAR_6;
  VAR_1->iso_frame_desc[VAR_10].actual_length = 0;
 }
}
