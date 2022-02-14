
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int pixclock; int height; int width; int vmode; int yres; int bits_per_pixel; int xres; int xres_virtual; int yres_virtual; int left_margin; int right_margin; int hsync_len; int upper_margin; int lower_margin; int vsync_len; int yoffset; scalar_t__ activate; scalar_t__ nonstd; scalar_t__ xoffset; TYPE_2__ transp; TYPE_1__ red; TYPE_1__ green; TYPE_1__ blue; scalar_t__ grayscale; int sync; } ;
struct falcon_hw {int sync; int vid_control; int vid_mode; int vde; int vdb; int f_shift; int st_shift; int line_width; int line_offset; int hdb; int hht; int hde; int hbb; int hss; int vft; int vss; scalar_t__ ste_mode; scalar_t__ xoffset; } ;
struct TYPE_9__ {struct falcon_hw falcon; } ;
struct atafb_par {int yres_virtual; int screen_base; TYPE_3__ hw; } ;
struct TYPE_12__ {int t; } ;
struct TYPE_11__ {int t; } ;
struct TYPE_10__ {int t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_6__ VAR_12 ;
 TYPE_5__ VAR_13 ;
 TYPE_4__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct falcon_hw*) ;
 int FUNC_1 (struct fb_var_screeninfo*,int ,int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_19,
        struct atafb_par *VAR_20)
{

 int VAR_21;
 int VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26;
 struct falcon_hw *VAR_27 = &VAR_20->hw.falcon;

 FUNC_1(VAR_19, 0, sizeof(struct fb_var_screeninfo));

 VAR_19->pixclock = VAR_27->sync & 0x1 ? VAR_14.t :
                 VAR_27->vid_control & VAR_6 ? VAR_12 : VAR_13;

 VAR_19->height = -1;
 VAR_19->width = -1;

 VAR_19->sync = 0;
 if (VAR_27->vid_control & VAR_7)
  VAR_19->sync |= VAR_0;
 if (VAR_27->vid_control & VAR_9)
  VAR_19->sync |= VAR_1;

 VAR_19->vmode = VAR_4;
 if (VAR_27->vid_mode & VAR_11)
  VAR_19->vmode |= VAR_3;
 if (VAR_27->vid_mode & VAR_10)
  VAR_19->vmode |= VAR_2;






 VAR_19->yres = VAR_27->vde - VAR_27->vdb;
 if (!(VAR_19->vmode & VAR_3))
  VAR_19->yres >>= 1;
 if (VAR_19->vmode & VAR_2)
  VAR_19->yres >>= 1;
 if (VAR_27->f_shift & 0x400)
  VAR_19->bits_per_pixel = 1;
 else if (VAR_27->f_shift & 0x100)
  VAR_19->bits_per_pixel = 16;
 else if (VAR_27->f_shift & 0x010)
  VAR_19->bits_per_pixel = 8;
 else if (VAR_27->st_shift == 0)
  VAR_19->bits_per_pixel = 4;
 else if (VAR_27->st_shift == 0x100)
  VAR_19->bits_per_pixel = 2;
 else
  VAR_19->bits_per_pixel = 1;

 VAR_19->xres = VAR_27->line_width * 16 / VAR_19->bits_per_pixel;
 VAR_19->xres_virtual = VAR_19->xres + VAR_27->line_offset * 16 / VAR_19->bits_per_pixel;
 if (VAR_27->xoffset)
  VAR_19->xres_virtual += 16;

 if (VAR_19->bits_per_pixel == 16) {
  VAR_19->red.offset = 11;
  VAR_19->red.length = 5;
  VAR_19->red.msb_right = 0;
  VAR_19->green.offset = 5;
  VAR_19->green.length = 6;
  VAR_19->green.msb_right = 0;
  VAR_19->blue.offset = 0;
  VAR_19->blue.length = 5;
  VAR_19->blue.msb_right = 0;
 } else {
  VAR_19->red.offset = 0;
  VAR_19->red.length = VAR_27->ste_mode ? 4 : 6;
  if (VAR_19->red.length > VAR_19->bits_per_pixel)
   VAR_19->red.length = VAR_19->bits_per_pixel;
  VAR_19->red.msb_right = 0;
  VAR_19->grayscale = 0;
  VAR_19->blue = VAR_19->green = VAR_19->red;
 }
 VAR_19->transp.offset = 0;
 VAR_19->transp.length = 0;
 VAR_19->transp.msb_right = 0;

 VAR_21 = VAR_19->xres_virtual * VAR_19->bits_per_pixel / 8;
 if (VAR_18) {
  if (VAR_20->yres_virtual)
   VAR_19->yres_virtual = VAR_20->yres_virtual;
  else

   VAR_19->yres_virtual = VAR_18 / VAR_21;
 } else {
  if (VAR_15 < 0)
   VAR_19->yres_virtual = 2 * VAR_19->yres;
  else
   VAR_19->yres_virtual = VAR_19->yres + VAR_15 * 16;
 }
 VAR_19->xoffset = 0;


 VAR_22 = FUNC_0(VAR_27);
 VAR_23 = 4 >> (VAR_27->vid_mode >> 2 & 0x3);
 VAR_26 = VAR_27->vid_control & VAR_8 ? 64 : 128;
 if (VAR_27->f_shift & 0x100) {
  VAR_25 = 0;
  VAR_24 = (VAR_26 + 16 * VAR_23) + VAR_22;
 } else {
  VAR_25 = ((128 / VAR_19->bits_per_pixel + 2) * VAR_23);
  if (VAR_27->ste_mode)
   VAR_24 = (64 + VAR_26 + (128 / VAR_19->bits_per_pixel + 2) * VAR_23)
      + VAR_22;
  else
   VAR_24 = (VAR_26 + (128 / VAR_19->bits_per_pixel + 18) * VAR_23)
      + VAR_22;
 }


 VAR_19->left_margin = VAR_24 + VAR_22 * ((VAR_27->hdb & 0x1ff) -
        (VAR_27->hdb & 0x200 ? 2 + VAR_27->hht : 0));
 if (VAR_27->ste_mode || VAR_16 != VAR_5)
  VAR_19->right_margin = VAR_22 * (VAR_27->hht + 2 - VAR_27->hde) - VAR_25;
 else

  VAR_19->right_margin = VAR_22 * (VAR_27->hht + 2 - VAR_27->hbb);
 VAR_19->hsync_len = VAR_22 * (VAR_27->hht + 2 - VAR_27->hss);


 VAR_19->upper_margin = VAR_27->vdb / 2;
 VAR_19->lower_margin = (VAR_27->vft + 1 - VAR_27->vde + 1) / 2;
 VAR_19->vsync_len = (VAR_27->vft + 1 - VAR_27->vss + 1) / 2;
 if (VAR_19->vmode & VAR_3) {
  VAR_19->upper_margin *= 2;
  VAR_19->lower_margin *= 2;
  VAR_19->vsync_len *= 2;
 } else if (VAR_19->vmode & VAR_2) {
  VAR_19->upper_margin = (VAR_19->upper_margin + 1) / 2;
  VAR_19->lower_margin = (VAR_19->lower_margin + 1) / 2;
  VAR_19->vsync_len = (VAR_19->vsync_len + 1) / 2;
 }

 VAR_19->pixclock *= VAR_23;
 VAR_19->left_margin /= VAR_23;
 VAR_19->right_margin /= VAR_23;
 VAR_19->hsync_len /= VAR_23;

 VAR_19->right_margin -= VAR_19->hsync_len;
 VAR_19->lower_margin -= VAR_19->vsync_len;

 if (VAR_17)
  VAR_19->yoffset = (VAR_20->screen_base - VAR_17) / VAR_21;
 else
  VAR_19->yoffset = 0;
 VAR_19->nonstd = 0;
 VAR_19->activate = 0;
 return 0;
}
