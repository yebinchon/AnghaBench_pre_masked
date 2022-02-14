
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int vc_video_erase_char; scalar_t__ vc_hi_font_mask; } ;
struct fb_tilerect {int index; int sx; int sy; int width; int height; int rop; int bg; int fg; } ;
struct fb_info {TYPE_1__* tileops; } ;
struct TYPE_2__ {int (* fb_tilefill ) (struct fb_info*,struct fb_tilerect*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,struct vc_data*,struct fb_info*) ;
 int FUNC_1 (int,struct vc_data*,struct fb_info*) ;
 int FUNC_2 (struct fb_info*,struct fb_tilerect*) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_1, struct fb_info *VAR_2, int VAR_3,
         int VAR_4, int VAR_5, int VAR_6)
{
 struct fb_tilerect VAR_7;
 int VAR_8 = (VAR_1->vc_hi_font_mask) ? 13 : 12;
 int VAR_9 = (VAR_1->vc_hi_font_mask) ? 9 : 8;

 VAR_7.index = VAR_1->vc_video_erase_char &
  ((VAR_1->vc_hi_font_mask) ? 0x1ff : 0xff);
 VAR_7.fg = FUNC_1(VAR_9, VAR_1, VAR_2);
 VAR_7.bg = FUNC_0(VAR_8, VAR_1, VAR_2);
 VAR_7.sx = VAR_4;
 VAR_7.sy = VAR_3;
 VAR_7.width = VAR_6;
 VAR_7.height = VAR_5;
 VAR_7.rop = VAR_0;

 VAR_2->tileops->fb_tilefill(VAR_2, &VAR_7);
}
