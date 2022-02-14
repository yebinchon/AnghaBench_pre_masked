
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct fbcon_ops {int (* clear_margins ) (struct vc_data*,struct fb_info*,int) ;} ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;


 size_t* VAR_0 ;
 int FUNC_0 (struct vc_data*,struct fb_info*) ;
 struct fb_info** VAR_1 ;
 int FUNC_1 (struct vc_data*,struct fb_info*,int) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_2, int VAR_3)
{
 struct fb_info *VAR_4 = VAR_1[VAR_0[VAR_2->vc_num]];
 struct fbcon_ops *VAR_5 = VAR_4->fbcon_par;

 if (!FUNC_0(VAR_2, VAR_4))
  VAR_5->clear_margins(VAR_2, VAR_4, VAR_3);
}
