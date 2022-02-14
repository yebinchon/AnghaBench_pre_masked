
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {scalar_t__ status; unsigned int actual_length; int offset; } ;
struct urb {scalar_t__ status; size_t number_of_packets; unsigned char* transfer_buffer; struct usb_iso_packet_descriptor* iso_frame_desc; } ;



__attribute__((used)) static int FUNC_0(struct urb *VAR_0)
{
 struct usb_iso_packet_descriptor *VAR_1,*VAR_2;
 unsigned char *VAR_3,*VAR_4;
 unsigned int VAR_5;

 if (VAR_0->status < 0) {
  return VAR_0->status;
 }
 for (VAR_1 = &VAR_0->iso_frame_desc[0],
       VAR_2 = &VAR_0->iso_frame_desc[VAR_0->number_of_packets],
       VAR_4 = VAR_0->transfer_buffer;
      VAR_1 < VAR_2;
      VAR_1++) {

  if (VAR_1->status < 0) {
   return (VAR_1->status);
  }

  VAR_5 = VAR_1->actual_length;
  VAR_1->actual_length = 0;
  VAR_3 = VAR_0->transfer_buffer+VAR_1->offset;

  if (VAR_3 != VAR_4) {

   while (VAR_5--) {
    *VAR_4++ = *VAR_3++;
   }
  } else {

   VAR_4 += VAR_5;
  }
 }

 return (VAR_4 - (unsigned char *)VAR_0->transfer_buffer);
}
