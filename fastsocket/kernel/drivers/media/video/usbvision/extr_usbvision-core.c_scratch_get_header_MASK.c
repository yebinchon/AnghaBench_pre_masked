
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbvision_frame_header {scalar_t__ magic_1; scalar_t__ magic_2; int header_length; int frame_width_hi; int frame_height_hi; scalar_t__ frame_height_lo; scalar_t__ frame_height; scalar_t__ frame_width_lo; scalar_t__ frame_width; } ;
struct usb_usbvision {size_t scratch_headermarker_read_ptr; scalar_t__ scratch_headermarker_write_ptr; int * scratch_headermarker; int scratch_read_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_usbvision*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct usb_usbvision *VAR_5,
         struct usbvision_frame_header *VAR_6)
{
 int VAR_7 = 0;

 FUNC_0(VAR_0, "from read_ptr=%d", VAR_5->scratch_headermarker_read_ptr);

 while (VAR_5->scratch_headermarker_write_ptr -
  VAR_5->scratch_headermarker_read_ptr != 0) {
  VAR_5->scratch_read_ptr =
   VAR_5->scratch_headermarker[VAR_5->scratch_headermarker_read_ptr];
  VAR_5->scratch_headermarker_read_ptr += 1;
  VAR_5->scratch_headermarker_read_ptr %= VAR_4;
  FUNC_1(VAR_5, (unsigned char *)VAR_6, VAR_1);
  if ((VAR_6->magic_1 == VAR_2)
    && (VAR_6->magic_2 == VAR_3)
    && (VAR_6->header_length == VAR_1)) {
   VAR_7 = VAR_1;
   VAR_6->frame_width = VAR_6->frame_width_lo + (VAR_6->frame_width_hi << 8);
   VAR_6->frame_height = VAR_6->frame_height_lo + (VAR_6->frame_height_hi << 8);
   break;
  }
 }

 return VAR_7;
}
