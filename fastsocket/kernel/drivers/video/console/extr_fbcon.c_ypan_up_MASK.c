
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; } ;
struct vc_data {size_t vc_num; int vc_rows; TYPE_1__ vc_font; int vc_cols; } ;
struct TYPE_4__ {int yoffset; int vmode; scalar_t__ xoffset; } ;
struct fbcon_ops {int (* update_start ) (struct fb_info*) ;TYPE_2__ var; int (* bmove ) (struct vc_data*,struct fb_info*,int,int ,int ,int ,int,int ) ;} ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct display {int yscroll; int vrows; } ;


 int VAR_0 ;
 size_t* VAR_1 ;
 struct display* VAR_2 ;
 int FUNC_0 (struct vc_data*,int) ;
 struct fb_info** VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct vc_data*,struct fb_info*,int,int ,int ,int ,int,int ) ;
 int FUNC_2 (struct fb_info*) ;

__attribute__((used)) static __inline__ void FUNC_3(struct vc_data *VAR_7, int VAR_8)
{
 struct fb_info *VAR_9 = VAR_3[VAR_1[VAR_7->vc_num]];
 struct display *VAR_10 = &VAR_2[VAR_7->vc_num];
 struct fbcon_ops *VAR_11 = VAR_9->fbcon_par;

 VAR_10->yscroll += VAR_8;
 if (VAR_10->yscroll > VAR_10->vrows - VAR_7->vc_rows) {
  VAR_11->bmove(VAR_7, VAR_9, VAR_10->vrows - VAR_7->vc_rows,
       0, 0, 0, VAR_7->vc_rows, VAR_7->vc_cols);
  VAR_10->yscroll -= VAR_10->vrows - VAR_7->vc_rows;
 }

 VAR_11->var.xoffset = 0;
 VAR_11->var.yoffset = VAR_10->yscroll * VAR_7->vc_font.height;
 VAR_11->var.vmode &= ~VAR_0;
 VAR_11->update_start(VAR_9);
 FUNC_0(VAR_7, 1);
 VAR_5 += VAR_8;
 if (VAR_5 > VAR_6)
  VAR_5 = VAR_6;
 VAR_4 = 0;
}
