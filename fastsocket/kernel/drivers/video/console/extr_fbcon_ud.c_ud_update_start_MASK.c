
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int xoffset; int yoffset; int vmode; } ;
struct fbcon_ops {TYPE_3__ var; TYPE_1__* p; } ;
struct TYPE_5__ {int xres; int yres; int xoffset; int yoffset; int vmode; } ;
struct fb_info {TYPE_2__ var; struct fbcon_ops* fbcon_par; } ;
struct TYPE_4__ {int scrollmode; } ;


 int FUNC_0 (int ,struct fb_info*) ;
 int FUNC_1 (int ,struct fb_info*) ;
 int FUNC_2 (struct fb_info*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_0)
{
 struct fbcon_ops *VAR_1 = VAR_0->fbcon_par;
 int VAR_2, VAR_3;
 u32 VAR_4 = FUNC_1(VAR_1->p->scrollmode, VAR_0);
 u32 VAR_5 = FUNC_0(VAR_1->p->scrollmode, VAR_0);
 int VAR_6;

 VAR_2 = VAR_5 - VAR_0->var.xres - VAR_1->var.xoffset;
 VAR_3 = VAR_4 - VAR_0->var.yres - VAR_1->var.yoffset;
 if (VAR_3 < 0)
  VAR_3 += VAR_4;
 VAR_1->var.xoffset = VAR_2;
 VAR_1->var.yoffset = VAR_3;
 VAR_6 = FUNC_2(VAR_0, &VAR_1->var);
 VAR_1->var.xoffset = VAR_0->var.xoffset;
 VAR_1->var.yoffset = VAR_0->var.yoffset;
 VAR_1->var.vmode = VAR_0->var.vmode;
 return VAR_6;
}
