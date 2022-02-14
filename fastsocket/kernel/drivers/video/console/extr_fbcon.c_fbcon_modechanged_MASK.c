
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; } ;
struct vc_data {scalar_t__ vc_mode; size_t vc_num; TYPE_1__ vc_font; } ;
struct TYPE_6__ {scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct fbcon_ops {size_t currcon; int (* update_start ) (struct fb_info*) ;TYPE_2__ var; int rotate; } ;
struct TYPE_8__ {int xres; int yres; } ;
struct fb_info {TYPE_4__ var; struct fbcon_ops* fbcon_par; } ;
struct display {scalar_t__ yscroll; } ;
struct TYPE_7__ {struct vc_data* d; } ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 struct display* VAR_3 ;
 int FUNC_2 (struct vc_data*,struct fb_info*) ;
 int FUNC_3 (struct vc_data*,int ) ;
 int FUNC_4 (struct vc_data*) ;
 struct fb_info** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct vc_data*,struct fb_info*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (struct vc_data*) ;
 int FUNC_8 (struct display*,struct fb_info*,struct vc_data*) ;
 int FUNC_9 (struct display*,TYPE_4__*,struct fb_info*) ;
 TYPE_3__* VAR_8 ;
 int FUNC_10 (struct vc_data*,int,int) ;

__attribute__((used)) static void FUNC_11(struct fb_info *VAR_9)
{
 struct fbcon_ops *VAR_10 = VAR_9->fbcon_par;
 struct vc_data *VAR_11;
 struct display *VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_10 || VAR_10->currcon < 0)
  return;
 VAR_11 = VAR_8[VAR_10->currcon].d;
 if (VAR_11->vc_mode != VAR_0 ||
     VAR_4[VAR_2[VAR_10->currcon]] != VAR_9)
  return;

 VAR_12 = &VAR_3[VAR_11->vc_num];
 FUNC_5(VAR_11, VAR_9);

 if (FUNC_0(VAR_11)) {
  FUNC_9(VAR_12, &VAR_9->var, VAR_9);
  VAR_14 = FUNC_1(VAR_10->rotate, VAR_9->var.xres, VAR_9->var.yres);
  VAR_13 = FUNC_1(VAR_10->rotate, VAR_9->var.yres, VAR_9->var.xres);
  VAR_14 /= VAR_11->vc_font.width;
  VAR_13 /= VAR_11->vc_font.height;
  FUNC_10(VAR_11, VAR_14, VAR_13);
  FUNC_8(VAR_12, VAR_9, VAR_11);
  VAR_6 = 0;
  VAR_5 = 0;

  if (!FUNC_2(VAR_11, VAR_9)) {
      VAR_10->var.xoffset = VAR_10->var.yoffset = VAR_12->yscroll = 0;
      VAR_10->update_start(VAR_9);
  }

  FUNC_3(VAR_11, VAR_1);
  FUNC_7(VAR_11);
  if (VAR_7)
   FUNC_4(VAR_11);
 }
}
