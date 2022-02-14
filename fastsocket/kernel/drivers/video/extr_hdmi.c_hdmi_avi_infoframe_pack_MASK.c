
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_avi_infoframe {size_t length; int type; int version; int colorspace; int scan_mode; int colorimetry; int picture_aspect; int active_aspect; int extended_colorimetry; int quantization_range; int nups; int video_code; int ycc_quantization_range; int content_type; int pixel_repeat; int top_bar; int bottom_bar; int left_bar; int right_bar; scalar_t__ itc; scalar_t__ vertical_bar_valid; scalar_t__ horizontal_bar_valid; scalar_t__ active_info_valid; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;

ssize_t FUNC_3(struct hdmi_avi_infoframe *VAR_2, void *VAR_3,
    size_t VAR_4)
{
 u8 *VAR_5 = VAR_3;
 size_t VAR_6;

 VAR_6 = VAR_1 + VAR_2->length;

 if (VAR_4 < VAR_6)
  return -VAR_0;

 FUNC_2(VAR_3, 0, VAR_6);

 VAR_5[0] = VAR_2->type;
 VAR_5[1] = VAR_2->version;
 VAR_5[2] = VAR_2->length;
 VAR_5[3] = 0;


 VAR_5 += VAR_1;

 VAR_5[0] = ((VAR_2->colorspace & 0x3) << 5) | (VAR_2->scan_mode & 0x3);

 if (VAR_2->active_info_valid)
  VAR_5[0] |= FUNC_0(4);

 if (VAR_2->horizontal_bar_valid)
  VAR_5[0] |= FUNC_0(3);

 if (VAR_2->vertical_bar_valid)
  VAR_5[0] |= FUNC_0(2);

 VAR_5[1] = ((VAR_2->colorimetry & 0x3) << 6) |
   ((VAR_2->picture_aspect & 0x3) << 4) |
   (VAR_2->active_aspect & 0xf);

 VAR_5[2] = ((VAR_2->extended_colorimetry & 0x7) << 4) |
   ((VAR_2->quantization_range & 0x3) << 2) |
   (VAR_2->nups & 0x3);

 if (VAR_2->itc)
  VAR_5[2] |= FUNC_0(7);

 VAR_5[3] = VAR_2->video_code & 0x7f;

 VAR_5[4] = ((VAR_2->ycc_quantization_range & 0x3) << 6) |
   ((VAR_2->content_type & 0x3) << 4) |
   (VAR_2->pixel_repeat & 0xf);

 VAR_5[5] = VAR_2->top_bar & 0xff;
 VAR_5[6] = (VAR_2->top_bar >> 8) & 0xff;
 VAR_5[7] = VAR_2->bottom_bar & 0xff;
 VAR_5[8] = (VAR_2->bottom_bar >> 8) & 0xff;
 VAR_5[9] = VAR_2->left_bar & 0xff;
 VAR_5[10] = (VAR_2->left_bar >> 8) & 0xff;
 VAR_5[11] = VAR_2->right_bar & 0xff;
 VAR_5[12] = (VAR_2->right_bar >> 8) & 0xff;

 FUNC_1(VAR_3, VAR_6);

 return VAR_6;
}
