
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; int offset; } ;
struct TYPE_5__ {int offset; int length; } ;
struct TYPE_4__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ vsync_len; scalar_t__ lower_margin; scalar_t__ upper_margin; scalar_t__ hsync_len; scalar_t__ right_margin; scalar_t__ left_margin; int yres; int xres; int pixclock; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct display_timing {scalar_t__ ver_sync_end; scalar_t__ ver_addr; scalar_t__ ver_sync_start; scalar_t__ ver_total; scalar_t__ hor_sync_end; scalar_t__ hor_addr; scalar_t__ hor_sync_start; scalar_t__ hor_total; } ;
struct crt_mode_table {int refresh_rate; struct display_timing crtc; } ;
struct VideoModeTable {int mode_array; struct crt_mode_table* crtc; } ;


 struct VideoModeTable* VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct fb_var_screeninfo *VAR_1, int VAR_2,
     int VAR_3)
{
 struct VideoModeTable *VAR_4 = ((void*)0);
 struct crt_mode_table *VAR_5 = ((void*)0);
 struct display_timing VAR_6;
 int VAR_7 = 0, VAR_8 = 0;
 VAR_4 = &VAR_0[FUNC_0(VAR_3)];
 VAR_5 = VAR_4->crtc;
 for (VAR_7 = 0; VAR_7 < VAR_4->mode_array; VAR_7++) {
  VAR_8 = VAR_7;
  if (VAR_5[VAR_7].refresh_rate == VAR_2)
   break;
 }

 VAR_6 = VAR_5[VAR_8].crtc;
 switch (VAR_1->bits_per_pixel) {
 case 8:
  VAR_1->red.offset = 0;
  VAR_1->green.offset = 0;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 6;
  VAR_1->green.length = 6;
  VAR_1->blue.length = 6;
  break;
 case 16:
  VAR_1->red.offset = 11;
  VAR_1->green.offset = 5;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 5;
  VAR_1->green.length = 6;
  VAR_1->blue.length = 5;
  break;
 case 32:
  VAR_1->red.offset = 16;
  VAR_1->green.offset = 8;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.length = 8;
  break;
 default:

  break;
 }

 VAR_1->pixclock = FUNC_1(VAR_1->xres, VAR_1->yres, VAR_2);
 VAR_1->left_margin =
     VAR_6.hor_total - (VAR_6.hor_sync_start + VAR_6.hor_sync_end);
 VAR_1->right_margin = VAR_6.hor_sync_start - VAR_6.hor_addr;
 VAR_1->hsync_len = VAR_6.hor_sync_end;
 VAR_1->upper_margin =
     VAR_6.ver_total - (VAR_6.ver_sync_start + VAR_6.ver_sync_end);
 VAR_1->lower_margin = VAR_6.ver_sync_start - VAR_6.ver_addr;
 VAR_1->vsync_len = VAR_6.ver_sync_end;
}
