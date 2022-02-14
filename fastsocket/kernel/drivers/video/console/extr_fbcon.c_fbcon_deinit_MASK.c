
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct fbcon_ops {int flags; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct display {int dummy; } ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct display* VAR_3 ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct display*) ;
 struct fb_info** VAR_4 ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_5)
{
 struct display *VAR_6 = &VAR_3[VAR_5->vc_num];
 struct fb_info *VAR_7;
 struct fbcon_ops *VAR_8;
 int VAR_9;

 FUNC_4(VAR_6);
 VAR_9 = VAR_1[VAR_5->vc_num];

 if (VAR_9 == -1)
  goto finished;

 VAR_7 = VAR_4[VAR_9];

 if (!VAR_7)
  goto finished;

 VAR_8 = VAR_7->fbcon_par;

 if (!VAR_8)
  goto finished;

 if (FUNC_0(VAR_5))
  FUNC_2(VAR_7);

 VAR_8->flags &= ~VAR_0;
finished:

 if (!FUNC_1(&VAR_2))
  FUNC_3();

 return;
}
