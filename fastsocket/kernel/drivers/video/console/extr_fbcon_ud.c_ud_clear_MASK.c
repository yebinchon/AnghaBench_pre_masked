
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_5__ {int height; int width; } ;
struct vc_data {TYPE_2__ vc_font; scalar_t__ vc_hi_font_mask; } ;
struct fbcon_ops {TYPE_1__* p; } ;
struct fb_info {TYPE_3__* fbops; struct fbcon_ops* fbcon_par; } ;
struct fb_fillrect {int width; int height; int rop; void* dx; void* dy; int color; } ;
struct TYPE_6__ {int (* fb_fillrect ) (struct fb_info*,struct fb_fillrect*) ;} ;
struct TYPE_4__ {int scrollmode; } ;


 void* FUNC_0 (int ,struct fb_info*) ;
 void* FUNC_1 (int ,struct fb_info*) ;
 int VAR_0 ;
 int FUNC_2 (int,struct vc_data*,struct fb_info*) ;
 int FUNC_3 (struct fb_info*,struct fb_fillrect*) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_1, struct fb_info *VAR_2, int VAR_3,
       int VAR_4, int VAR_5, int VAR_6)
{
 struct fbcon_ops *VAR_7 = VAR_2->fbcon_par;
 struct fb_fillrect VAR_8;
 int VAR_9 = (VAR_1->vc_hi_font_mask) ? 13 : 12;
 u32 VAR_10 = FUNC_1(VAR_7->p->scrollmode, VAR_2);
 u32 VAR_11 = FUNC_0(VAR_7->p->scrollmode, VAR_2);

 VAR_8.color = FUNC_2(VAR_9,VAR_1,VAR_2);
 VAR_8.dy = VAR_10 - ((VAR_3 + VAR_5) * VAR_1->vc_font.height);
 VAR_8.dx = VAR_11 - ((VAR_4 + VAR_6) * VAR_1->vc_font.width);
 VAR_8.width = VAR_6 * VAR_1->vc_font.width;
 VAR_8.height = VAR_5 * VAR_1->vc_font.height;
 VAR_8.rop = VAR_0;

 VAR_2->fbops->fb_fillrect(VAR_2, &VAR_8);
}
