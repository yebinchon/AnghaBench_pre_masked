
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct osd_info {int video_buffer_size; } ;
struct TYPE_6__ {int width; int height; } ;
struct ivtv {TYPE_1__ osd_rect; scalar_t__ is_50hz; struct osd_info* osd_info; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_9__ {int length; scalar_t__ offset; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int yres; int xres_virtual; int yres_virtual; int xoffset; int yoffset; int nonstd; int vmode; int left_margin; int upper_margin; int right_margin; int lower_margin; int hsync_len; int vsync_len; int pixclock; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_5, struct ivtv *VAR_6)
{
 struct osd_info *VAR_7 = VAR_6->osd_info;
 int VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 FUNC_0("ivtvfb_check_var\n");


 if (VAR_6->is_50hz) {
  VAR_9 = 84316;
  VAR_10 = 776;
  VAR_11 = 591;
  VAR_8 = 576;
 }
 else {
  VAR_9 = 83926;
  VAR_10 = 776;
  VAR_11 = 495;
  VAR_8 = 480;
 }

 if (VAR_5->bits_per_pixel == 8 || VAR_5->bits_per_pixel == 32) {
  VAR_5->transp.offset = 24;
  VAR_5->transp.length = 8;
  VAR_5->red.offset = 16;
  VAR_5->red.length = 8;
  VAR_5->green.offset = 8;
  VAR_5->green.length = 8;
  VAR_5->blue.offset = 0;
  VAR_5->blue.length = 8;
 }
 else if (VAR_5->bits_per_pixel == 16) {

  switch (VAR_5->green.length) {
   case 4:
    VAR_5->red.offset = 8;
    VAR_5->red.length = 4;
    VAR_5->green.offset = 4;
    VAR_5->green.length = 4;
    VAR_5->blue.offset = 0;
    VAR_5->blue.length = 4;
    VAR_5->transp.offset = 12;
    VAR_5->transp.length = 1;
    break;
   case 5:
    VAR_5->red.offset = 10;
    VAR_5->red.length = 5;
    VAR_5->green.offset = 5;
    VAR_5->green.length = 5;
    VAR_5->blue.offset = 0;
    VAR_5->blue.length = 5;
    VAR_5->transp.offset = 15;
    VAR_5->transp.length = 1;
    break;
   default:
    VAR_5->red.offset = 11;
    VAR_5->red.length = 5;
    VAR_5->green.offset = 5;
    VAR_5->green.length = 6;
    VAR_5->blue.offset = 0;
    VAR_5->blue.length = 5;
    VAR_5->transp.offset = 0;
    VAR_5->transp.length = 0;
    break;
  }
 }
 else {
  FUNC_1("Invalid colour mode: %d\n", VAR_5->bits_per_pixel);
  return -VAR_0;
 }


 if (VAR_5->xres > VAR_4 || VAR_5->yres > VAR_8) {
  FUNC_1("Invalid resolution: %dx%d\n",
    VAR_5->xres, VAR_5->yres);
  return -VAR_0;
 }


 if (VAR_5->xres_virtual > 4095 / (VAR_5->bits_per_pixel / 8) ||
     VAR_5->xres_virtual * VAR_5->yres_virtual * (VAR_5->bits_per_pixel / 8) > VAR_7->video_buffer_size ||
     VAR_5->xres_virtual < VAR_5->xres ||
     VAR_5->yres_virtual < VAR_5->yres) {
  FUNC_1("Invalid virtual resolution: %dx%d\n",
   VAR_5->xres_virtual, VAR_5->yres_virtual);
  return -VAR_0;
 }


 if (VAR_5->bits_per_pixel == 8) {

  if (VAR_5->xres & 3) {
   FUNC_1("Invalid resolution for 8bpp: %d\n", VAR_5->xres);
   return -VAR_0;
  }
  if (VAR_5->xres_virtual & 3) {
   FUNC_1("Invalid virtual resolution for 8bpp: %d)\n", VAR_5->xres_virtual);
   return -VAR_0;
  }
 }
 else if (VAR_5->bits_per_pixel == 16) {

  if (VAR_5->xres & 1) {
   FUNC_1("Invalid resolution for 16bpp: %d\n", VAR_5->xres);
   return -VAR_0;
  }
  if (VAR_5->xres_virtual & 1) {
   FUNC_1("Invalid virtual resolution for 16bpp: %d)\n", VAR_5->xres_virtual);
   return -VAR_0;
  }
 }


 if (VAR_5->xoffset >= VAR_5->xres_virtual || VAR_5->yoffset >= VAR_5->yres_virtual) {
  FUNC_1("Invalid offset: %d (%d) %d (%d)\n",
   VAR_5->xoffset, VAR_5->xres_virtual, VAR_5->yoffset, VAR_5->yres_virtual);
  return -VAR_0;
 }


 if (VAR_5->nonstd > 1) {
  FUNC_1("Invalid nonstd % d\n", VAR_5->nonstd);
  return -VAR_0;
 }


 if (((VAR_5->vmode & VAR_2) != VAR_3) &&
  ((VAR_5->vmode & VAR_2) != VAR_1)) {
  FUNC_1("Invalid video mode: %d\n", VAR_5->vmode & VAR_2);
  return -VAR_0;
 }





 if (VAR_5->left_margin + VAR_5->xres > VAR_4 + 1) {
  VAR_5->left_margin = 1 + ((VAR_4 - VAR_5->xres) / 2);
 }
 if (VAR_5->upper_margin + VAR_5->yres > (VAR_6->is_50hz ? 577 : 481)) {
  VAR_5->upper_margin = 1 + (((VAR_6->is_50hz ? 576 : 480) - VAR_5->yres) / 2);
 }


 VAR_5->right_margin = VAR_10 - VAR_5->left_margin - VAR_5->xres;
 VAR_5->lower_margin = VAR_11 - VAR_5->upper_margin - VAR_5->yres;


 VAR_5->hsync_len = 24;
 VAR_5->vsync_len = 2;




 if ((VAR_5->vmode & VAR_2) == VAR_3)
  VAR_5->pixclock = VAR_9 / 2;
 else
  VAR_5->pixclock = VAR_9;

 VAR_6->osd_rect.width = VAR_5->xres;
 VAR_6->osd_rect.height = VAR_5->yres;

 FUNC_0("Display size: %dx%d (virtual %dx%d) @ %dbpp\n",
        VAR_5->xres, VAR_5->yres,
        VAR_5->xres_virtual, VAR_5->yres_virtual,
        VAR_5->bits_per_pixel);

 FUNC_0("Display position: %d, %d\n",
        VAR_5->left_margin, VAR_5->upper_margin);

 FUNC_0("Display filter: %s\n",
   (VAR_5->vmode & VAR_2) == VAR_3 ? "on" : "off");
 FUNC_0("Color space: %s\n", VAR_5->nonstd ? "YUV" : "RGB");
 return 0;
}
