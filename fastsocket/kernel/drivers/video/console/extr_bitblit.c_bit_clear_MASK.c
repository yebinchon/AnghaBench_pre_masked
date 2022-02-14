
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
struct vc_data {TYPE_1__ vc_font; scalar_t__ vc_hi_font_mask; } ;
struct fb_info {TYPE_2__* fbops; } ;
struct fb_fillrect {int dx; int dy; int width; int height; int rop; int color; } ;
struct TYPE_4__ {int (* fb_fillrect ) (struct fb_info*,struct fb_fillrect*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,struct vc_data*,struct fb_info*) ;
 int FUNC_1 (struct fb_info*,struct fb_fillrect*) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_1, struct fb_info *VAR_2, int VAR_3,
        int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = (VAR_1->vc_hi_font_mask) ? 13 : 12;
 struct fb_fillrect VAR_8;

 VAR_8.color = FUNC_0(VAR_7, VAR_1, VAR_2);
 VAR_8.dx = VAR_4 * VAR_1->vc_font.width;
 VAR_8.dy = VAR_3 * VAR_1->vc_font.height;
 VAR_8.width = VAR_6 * VAR_1->vc_font.width;
 VAR_8.height = VAR_5 * VAR_1->vc_font.height;
 VAR_8.rop = VAR_0;

 VAR_2->fbops->fb_fillrect(VAR_2, &VAR_8);
}
