
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct fb_var_screeninfo {int activate; } ;
struct fbcon_ops {int graphics; int blank_state; int cursor_flash; struct fb_var_screeninfo var; } ;
struct fb_info {int flags; struct fb_var_screeninfo var; struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t* VAR_6 ;
 scalar_t__ FUNC_0 (struct fb_info*,int) ;
 int FUNC_1 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct vc_data*,int ) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct vc_data*,struct fb_info*,int) ;
 scalar_t__ FUNC_6 (struct vc_data*,struct fb_info*) ;
 struct fb_info** VAR_7 ;
 int FUNC_7 (struct vc_data*) ;

__attribute__((used)) static int FUNC_8(struct vc_data *VAR_8, int VAR_9, int VAR_10)
{
 struct fb_info *VAR_11 = VAR_7[VAR_6[VAR_8->vc_num]];
 struct fbcon_ops *VAR_12 = VAR_11->fbcon_par;

 if (VAR_10) {
  struct fb_var_screeninfo VAR_13 = VAR_11->var;

  VAR_12->graphics = 1;

  if (!VAR_9) {
   VAR_13.activate = VAR_4 | VAR_3;
   FUNC_1(VAR_11, &VAR_13);
   VAR_12->graphics = 0;
   VAR_12->var = VAR_11->var;
  }
 }

  if (!FUNC_6(VAR_8, VAR_11)) {
  if (VAR_12->blank_state != VAR_9) {
   VAR_12->blank_state = VAR_9;
   FUNC_3(VAR_8, VAR_9 ? VAR_1 : VAR_0);
   VAR_12->cursor_flash = (!VAR_9);

   if (!(VAR_11->flags & VAR_2))
    if (FUNC_0(VAR_11, VAR_9))
     FUNC_5(VAR_8, VAR_11, VAR_9);
  }

  if (!VAR_9)
   FUNC_7(VAR_8);
 }

 if (VAR_10 || FUNC_6(VAR_8, VAR_11) ||
     VAR_12->blank_state != VAR_5)
  FUNC_4(VAR_11);
 else
  FUNC_2(VAR_11);

 return 0;
}
