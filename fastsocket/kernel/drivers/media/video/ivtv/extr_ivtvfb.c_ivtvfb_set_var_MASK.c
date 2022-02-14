
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_rect {scalar_t__ left; scalar_t__ top; int height; int width; } ;
struct osd_info {int bits_per_pixel; int bytes_per_pixel; int fbvar_cur; } ;
struct ivtv_osd_coords {int lines; int pixel_stride; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_4__ {int yuv_forced_update; int osd_full_h; int osd_full_w; } ;
struct ivtv {TYPE_2__ yuv_info; struct osd_info* osd_info; } ;
struct TYPE_3__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int vmode; scalar_t__ nonstd; scalar_t__ upper_margin; scalar_t__ left_margin; int yres_virtual; int xres_virtual; int yres; int xres; TYPE_1__ green; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ivtv*,int ,int,int) ;
 int FUNC_3 (struct ivtv*,struct ivtv_osd_coords*) ;
 int FUNC_4 (struct ivtv*,struct v4l2_rect*) ;
 int FUNC_5 (struct ivtv*,struct ivtv_osd_coords*) ;
 int FUNC_6 (int *,struct fb_var_screeninfo*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct ivtv *VAR_8, struct fb_var_screeninfo *VAR_9)
{
 struct osd_info *VAR_10 = VAR_8->osd_info;
 struct ivtv_osd_coords VAR_11;
 struct v4l2_rect VAR_12;
 int VAR_13 = -1;

 FUNC_0("ivtvfb_set_var\n");


 if (VAR_9->nonstd)
  FUNC_8(FUNC_7(0x02a00) | 0x0002000, 0x02a00);
 else
  FUNC_8(FUNC_7(0x02a00) & ~0x0002000, 0x02a00);


 switch (VAR_9->bits_per_pixel) {
  case 8:
   VAR_13 = VAR_7;
   break;
  case 32:
   VAR_13 = VAR_6;
   break;
  case 16:
   switch (VAR_9->green.length) {
   case 4:
    VAR_13 = VAR_3;
    break;
   case 5:
    VAR_13 = VAR_4;
    break;
   case 6:
    VAR_13 = VAR_5;
    break;
   default:
    FUNC_1("ivtvfb_set_var - Invalid bpp\n");
   }
   break;
  default:
   FUNC_1("ivtvfb_set_var - Invalid bpp\n");
 }



 if (VAR_13 != -1) {
  FUNC_2(VAR_8, VAR_1, 1, 0);
  FUNC_2(VAR_8, VAR_1, 1, VAR_13);
 }

 VAR_10->bits_per_pixel = VAR_9->bits_per_pixel;
 VAR_10->bytes_per_pixel = VAR_9->bits_per_pixel / 8;


 switch (VAR_9->vmode & VAR_2) {
  case 128:
   FUNC_2(VAR_8, VAR_0, 1, 1);
   break;
  case 129:
   FUNC_2(VAR_8, VAR_0, 1, 0);
   break;
  default:
   FUNC_1("ivtvfb_set_var - Invalid video mode\n");
 }


 FUNC_3(VAR_8, &VAR_11);


 VAR_11.pixel_stride = VAR_9->xres_virtual;
 VAR_11.lines = VAR_9->yres_virtual;
 VAR_11.x = 0;
 VAR_11.y = 0;
 FUNC_5(VAR_8, &VAR_11);



 VAR_12.width = VAR_9->xres;
 VAR_12.height = VAR_9->yres;


 if (!VAR_9->upper_margin)
  VAR_9->upper_margin++;
 if (!VAR_9->left_margin)
  VAR_9->left_margin++;
 VAR_12.top = VAR_9->upper_margin - 1;
 VAR_12.left = VAR_9->left_margin - 1;

 FUNC_4(VAR_8, &VAR_12);


 VAR_8->yuv_info.osd_full_w = VAR_11.pixel_stride;
 VAR_8->yuv_info.osd_full_h = VAR_11.lines;


 VAR_8->yuv_info.yuv_forced_update = 1;


 FUNC_6(&VAR_10->fbvar_cur, VAR_9, sizeof(VAR_10->fbvar_cur));

 FUNC_0("Display size: %dx%d (virtual %dx%d) @ %dbpp\n",
        VAR_9->xres, VAR_9->yres,
        VAR_9->xres_virtual, VAR_9->yres_virtual,
        VAR_9->bits_per_pixel);

 FUNC_0("Display position: %d, %d\n",
        VAR_9->left_margin, VAR_9->upper_margin);

 FUNC_0("Display filter: %s\n",
   (VAR_9->vmode & VAR_2) == 128 ? "on" : "off");
 FUNC_0("Color space: %s\n", VAR_9->nonstd ? "YUV" : "RGB");

 return 0;
}
