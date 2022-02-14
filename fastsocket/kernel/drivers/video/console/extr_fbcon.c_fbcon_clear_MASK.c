
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vc_data {size_t vc_num; int vc_top; } ;
struct fbcon_ops {int (* clear ) (struct vc_data*,struct fb_info*,int ,int,int,int) ;} ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct display {int vrows; int yscroll; } ;


 size_t* VAR_0 ;
 struct display* VAR_1 ;
 scalar_t__ FUNC_0 (struct vc_data*,struct fb_info*) ;
 int VAR_2 ;
 int FUNC_1 (struct display*,int) ;
 struct fb_info** VAR_3 ;
 int FUNC_2 (struct vc_data*,struct fb_info*,int ,int,int,int) ;
 int FUNC_3 (struct vc_data*,struct fb_info*,int ,int,int,int) ;
 int FUNC_4 (struct vc_data*,struct fb_info*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_4, int VAR_5, int VAR_6, int VAR_7,
   int VAR_8)
{
 struct fb_info *VAR_9 = VAR_3[VAR_0[VAR_4->vc_num]];
 struct fbcon_ops *VAR_10 = VAR_9->fbcon_par;

 struct display *VAR_11 = &VAR_1[VAR_4->vc_num];
 u_int VAR_12;

 if (FUNC_0(VAR_4, VAR_9))
  return;

 if (!VAR_7 || !VAR_8)
  return;

 if (VAR_5 < VAR_4->vc_top && VAR_4->vc_top == VAR_2)
  VAR_4->vc_top = 0;



 VAR_12 = VAR_11->vrows - VAR_11->yscroll;
 if (VAR_5 < VAR_12 && VAR_5 + VAR_7 - 1 >= VAR_12) {
  u_int VAR_13 = VAR_12 - VAR_5;
  VAR_10->clear(VAR_4, VAR_9, FUNC_1(VAR_11, VAR_5), VAR_6, VAR_13, VAR_8);
  VAR_10->clear(VAR_4, VAR_9, FUNC_1(VAR_11, VAR_5 + VAR_13), VAR_6, VAR_7 - VAR_13,
     VAR_8);
 } else
  VAR_10->clear(VAR_4, VAR_9, FUNC_1(VAR_11, VAR_5), VAR_6, VAR_7, VAR_8);
}
