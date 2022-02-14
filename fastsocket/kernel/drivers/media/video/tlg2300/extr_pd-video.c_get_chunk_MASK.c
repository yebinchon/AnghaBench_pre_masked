
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {scalar_t__ actual_length; int status; } ;
struct urb {int number_of_packets; struct usb_iso_packet_descriptor* iso_frame_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(int VAR_6, struct urb *VAR_7,
   int *VAR_8, int *VAR_9, int *VAR_10)
{
 struct usb_iso_packet_descriptor *VAR_11 = ((void*)0);
 int VAR_12 = VAR_2;

 for (*VAR_8 = *VAR_9 = -1; VAR_6 < VAR_7->number_of_packets; VAR_6++) {
  VAR_11 = &VAR_7->iso_frame_desc[VAR_6];


  if (-VAR_0 == VAR_11->status) {
   if (++*VAR_10 > VAR_7->number_of_packets / 3)
    return VAR_3;
   continue;
  }


  if (VAR_11->status || VAR_11->actual_length <= 0
    || VAR_11->actual_length > VAR_5) {
   if (*VAR_8 != -1)
    break;
   continue;
  }


  if (VAR_11->actual_length == VAR_5) {
   if (*VAR_8 == -1)
    *VAR_8 = VAR_6;
   *VAR_9 = VAR_6;
   continue;
  }


  if (VAR_11->actual_length < VAR_5) {
   if (*VAR_8 == -1) {
    *VAR_8 = VAR_6;
    *VAR_9 = VAR_6;
    return VAR_4;
   }
   break;
  }
 }

 if (*VAR_8 == -1 && *VAR_9 == -1)
  VAR_12 = VAR_1;
 return VAR_12;
}
