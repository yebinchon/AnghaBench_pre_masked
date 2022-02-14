
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; } ;
struct vc_data {size_t vc_num; TYPE_1__ vc_font; } ;
struct TYPE_4__ {int yoffset; int vmode; scalar_t__ xoffset; } ;
struct fbcon_ops {int (* update_start ) (struct fb_info*) ;TYPE_2__ var; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct display {int yscroll; int vrows; } ;


 int VAR_0 ;
 size_t* VAR_1 ;
 struct display* VAR_2 ;
 struct fb_info** VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct fb_info*) ;

__attribute__((used)) static __inline__ void FUNC_1(struct vc_data *VAR_7, int VAR_8)
{
 struct fb_info *VAR_9 = VAR_3[VAR_1[VAR_7->vc_num]];
 struct fbcon_ops *VAR_10 = VAR_9->fbcon_par;
 struct display *VAR_11 = &VAR_2[VAR_7->vc_num];

 VAR_11->yscroll += VAR_8;
 if (VAR_11->yscroll >= VAR_11->vrows)
  VAR_11->yscroll -= VAR_11->vrows;
 VAR_10->var.xoffset = 0;
 VAR_10->var.yoffset = VAR_11->yscroll * VAR_7->vc_font.height;
 VAR_10->var.vmode |= VAR_0;
 VAR_10->update_start(VAR_9);
 VAR_5 += VAR_8;
 if (VAR_5 > VAR_6)
  VAR_5 = VAR_6;
 VAR_4 = 0;
}
