
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbip_header_cmd_submit {int interval; int number_of_packets; int start_frame; int transfer_buffer_length; int transfer_flags; } ;
struct TYPE_2__ {struct usbip_header_cmd_submit cmd_submit; } ;
struct usbip_header {TYPE_1__ u; } ;
struct urb {int interval; int number_of_packets; int start_frame; int transfer_buffer_length; int transfer_flags; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct usbip_header *VAR_0, struct urb *VAR_1,
        int VAR_2)
{
 struct usbip_header_cmd_submit *VAR_3 = &VAR_0->u.cmd_submit;





 if (VAR_2) {

  VAR_3->transfer_flags =
    FUNC_0(VAR_1->transfer_flags);
  VAR_3->transfer_buffer_length = VAR_1->transfer_buffer_length;
  VAR_3->start_frame = VAR_1->start_frame;
  VAR_3->number_of_packets = VAR_1->number_of_packets;
  VAR_3->interval = VAR_1->interval;
 } else {

  VAR_1->transfer_flags = VAR_3->transfer_flags;

  VAR_1->transfer_buffer_length = VAR_3->transfer_buffer_length;
  VAR_1->start_frame = VAR_3->start_frame;
  VAR_1->number_of_packets = VAR_3->number_of_packets;
  VAR_1->interval = VAR_3->interval;
 }
}
