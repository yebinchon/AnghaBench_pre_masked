
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_complete_t ;
struct usb_device {int dummy; } ;
struct urb {unsigned int pipe; int interval; int number_of_packets; int transfer_buffer_length; TYPE_1__* iso_frame_desc; int transfer_flags; void* context; int complete; scalar_t__ actual_length; void* transfer_buffer; struct usb_device* dev; } ;
struct TYPE_2__ {int offset; int length; scalar_t__ actual_length; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct urb *VAR_1, struct usb_device *VAR_2,
       unsigned int VAR_3, void *VAR_4, int VAR_5,
       int VAR_6, usb_complete_t VAR_7,
       void *VAR_8)
{
 int VAR_9;

 VAR_1->dev=VAR_2;
 VAR_1->pipe=VAR_3;
 VAR_1->interval = 1;
 VAR_1->transfer_buffer=VAR_4;
 VAR_1->number_of_packets = VAR_5;
 VAR_1->transfer_buffer_length=VAR_5*VAR_6;
 VAR_1->actual_length = 0;
 VAR_1->complete=VAR_7;
 VAR_1->context=VAR_8;
 VAR_1->transfer_flags=VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_1->iso_frame_desc[VAR_9].offset = VAR_6 * VAR_9;
  VAR_1->iso_frame_desc[VAR_9].length = VAR_6;
  VAR_1->iso_frame_desc[VAR_9].actual_length = 0;
 }
}
