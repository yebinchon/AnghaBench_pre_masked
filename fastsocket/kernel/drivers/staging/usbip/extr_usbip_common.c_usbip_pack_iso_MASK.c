
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_iso_packet_descriptor {int actual_length; int status; int length; int offset; } ;
struct usb_iso_packet_descriptor {int actual_length; int status; int length; int offset; } ;



__attribute__((used)) static void FUNC_0(struct usbip_iso_packet_descriptor *VAR_0,
  struct usb_iso_packet_descriptor *VAR_1, int VAR_2)
{
 if (VAR_2) {
  VAR_0->offset = VAR_1->offset;
  VAR_0->length = VAR_1->length;
  VAR_0->status = VAR_1->status;
  VAR_0->actual_length = VAR_1->actual_length;
 } else {
  VAR_1->offset = VAR_0->offset;
  VAR_1->length = VAR_0->length;
  VAR_1->status = VAR_0->status;
  VAR_1->actual_length = VAR_0->actual_length;
 }
}
