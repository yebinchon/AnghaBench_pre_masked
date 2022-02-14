
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int osd_x_pan; int osd_y_pan; int yuv_forced_update; } ;
struct ivtv {TYPE_2__* osd_info; TYPE_1__ yuv_info; } ;
struct fb_var_screeninfo {int xoffset; int yoffset; int xres_virtual; int bits_per_pixel; } ;
struct fb_info {scalar_t__ par; } ;
struct TYPE_4__ {int pan_cur; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_0, struct fb_info *VAR_1)
{
 u32 VAR_2;
 struct ivtv *VAR_3 = (struct ivtv *) VAR_1->par;

 VAR_2 = (VAR_0->xoffset + (VAR_0->yoffset * VAR_0->xres_virtual))*VAR_0->bits_per_pixel/8;
 FUNC_0(VAR_2, 0x02A0C);


 VAR_3->yuv_info.osd_x_pan = VAR_0->xoffset;
 VAR_3->yuv_info.osd_y_pan = VAR_0->yoffset;

 VAR_3->yuv_info.yuv_forced_update = 1;

 VAR_3->osd_info->pan_cur = VAR_2;
 return 0;
}
