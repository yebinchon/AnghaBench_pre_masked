
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_5__ {int height; int width; } ;
struct vc_data {TYPE_2__ vc_font; } ;
struct fbcon_ops {TYPE_1__* p; } ;
struct fb_info {TYPE_3__* fbops; struct fbcon_ops* fbcon_par; } ;
struct fb_copyarea {int sy; int dy; int width; int height; void* dx; void* sx; } ;
struct TYPE_6__ {int (* fb_copyarea ) (struct fb_info*,struct fb_copyarea*) ;} ;
struct TYPE_4__ {int scrollmode; } ;


 void* FUNC_0 (int ,struct fb_info*) ;
 int FUNC_1 (struct fb_info*,struct fb_copyarea*) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_0, struct fb_info *VAR_1, int VAR_2,
       int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct fbcon_ops *VAR_8 = VAR_1->fbcon_par;
 struct fb_copyarea VAR_9;
 u32 VAR_10 = FUNC_0(VAR_8->p->scrollmode, VAR_1);

 VAR_9.sx = VAR_10 - ((VAR_2 + VAR_6) * VAR_0->vc_font.height);
 VAR_9.sy = VAR_3 * VAR_0->vc_font.width;
 VAR_9.dx = VAR_10 - ((VAR_4 + VAR_6) * VAR_0->vc_font.height);
 VAR_9.dy = VAR_5 * VAR_0->vc_font.width;
 VAR_9.width = VAR_6 * VAR_0->vc_font.height;
 VAR_9.height = VAR_7 * VAR_0->vc_font.width;

 VAR_1->fbops->fb_copyarea(VAR_1, &VAR_9);
}
