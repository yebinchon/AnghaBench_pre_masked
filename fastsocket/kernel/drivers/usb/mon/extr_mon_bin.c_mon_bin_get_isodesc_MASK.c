
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int actual_length; int length; int offset; int status; } ;
struct urb {struct usb_iso_packet_descriptor* iso_frame_desc; } ;
struct mon_reader_bin {unsigned int b_size; TYPE_1__* b_vec; } ;
struct mon_bin_isodesc {scalar_t__ _pad; int iso_len; int iso_off; int iso_status; } ;
struct TYPE_2__ {scalar_t__ ptr; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct mon_reader_bin *VAR_1,
    unsigned int VAR_2, struct urb *VAR_3, char VAR_4, unsigned int VAR_5)
{
 struct mon_bin_isodesc *VAR_6;
 struct usb_iso_packet_descriptor *VAR_7;

 VAR_7 = VAR_3->iso_frame_desc;
 while (VAR_5-- != 0) {
  VAR_6 = (struct mon_bin_isodesc *)
      (VAR_1->b_vec[VAR_2 / VAR_0].ptr + VAR_2 % VAR_0);
  VAR_6->iso_status = VAR_7->status;
  VAR_6->iso_off = VAR_7->offset;
  VAR_6->iso_len = (VAR_4 == 'S') ? VAR_7->length : VAR_7->actual_length;
  VAR_6->_pad = 0;
  if ((VAR_2 += sizeof(struct mon_bin_isodesc)) >= VAR_1->b_size)
   VAR_2 = 0;
  VAR_7++;
 }
}
