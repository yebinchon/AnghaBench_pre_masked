
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int frame_num; scalar_t__ data_format; int format_param; int frame_width; int frame_height; int frame_latency; int frame_phase; int header_length; int magic_1; int magic_2; } ;
struct TYPE_3__ {int depth; } ;
struct usbvision_frame {int frmwidth; int frmheight; int v4l2_linesize; scalar_t__ curline; int scanstate; TYPE_2__ isoc_header; TYPE_1__ v4l2_format; } ;
struct usb_usbvision {int last_isoc_frame_num; int stretch_width; int stretch_height; int header_count; scalar_t__ request_intra; struct usbvision_frame* cur_frame; } ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct usb_usbvision*,TYPE_2__*) ;
 int FUNC_2 (struct usb_usbvision*) ;
 int FUNC_3 (struct usb_usbvision*) ;
 int FUNC_4 (struct usb_usbvision*,int,int) ;
 int FUNC_5 (struct usb_usbvision*) ;

__attribute__((used)) static enum parse_state FUNC_6(struct usb_usbvision *VAR_8)
{
 struct usbvision_frame *VAR_9;
 int VAR_10 = 0;

 VAR_9 = VAR_8->cur_frame;

 while (FUNC_1(VAR_8, &VAR_9->isoc_header) == VAR_2) {

  FUNC_0(VAR_0, "found header: 0x%02x%02x %d %d %d %d %#x 0x%02x %u %u",
    VAR_9->isoc_header.magic_2,
    VAR_9->isoc_header.magic_1,
    VAR_9->isoc_header.header_length,
    VAR_9->isoc_header.frame_num,
    VAR_9->isoc_header.frame_phase,
    VAR_9->isoc_header.frame_latency,
    VAR_9->isoc_header.data_format,
    VAR_9->isoc_header.format_param,
    VAR_9->isoc_header.frame_width,
    VAR_9->isoc_header.frame_height);

  if (VAR_8->request_intra) {
   if (VAR_9->isoc_header.format_param & 0x80) {
    VAR_10 = 1;
    VAR_8->last_isoc_frame_num = -1;
    FUNC_5(VAR_8);
    break;
   }
  } else {
   VAR_10 = 1;
   break;
  }
 }

 if (VAR_10) {
  VAR_9->frmwidth = VAR_9->isoc_header.frame_width * VAR_8->stretch_width;
  VAR_9->frmheight = VAR_9->isoc_header.frame_height * VAR_8->stretch_height;
  VAR_9->v4l2_linesize = (VAR_9->frmwidth * VAR_9->v4l2_format.depth) >> 3;
 } else {
  FUNC_0(VAR_0, "skipping scratch data, no header");
  FUNC_2(VAR_8);
  return VAR_5;
 }


 if (VAR_9->isoc_header.data_format == VAR_1) {

  if (VAR_8->last_isoc_frame_num >= 0) {
   if (((VAR_8->last_isoc_frame_num + 1) % 32) != VAR_9->isoc_header.frame_num) {

    FUNC_0(VAR_0, "Lost frame before %d on USB", VAR_9->isoc_header.frame_num);
    FUNC_3(VAR_8);
    return VAR_6;
   }
  }
  VAR_8->last_isoc_frame_num = VAR_9->isoc_header.frame_num;
 }
 VAR_8->header_count++;
 VAR_9->scanstate = VAR_7;
 VAR_9->curline = 0;

 if (VAR_3) {
  FUNC_4(VAR_8, 1, 1);
  return VAR_6;
 }
 return VAR_4;
}
