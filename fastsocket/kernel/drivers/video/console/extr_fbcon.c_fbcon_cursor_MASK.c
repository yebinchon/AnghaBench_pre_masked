
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {size_t vc_num; int vc_deccm; int vc_cursor_type; scalar_t__ vc_pos; } ;
struct fbcon_ops {int cursor_flash; int (* cursor ) (struct vc_data*,struct fb_info*,int,int,int ,int ) ;} ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;
 scalar_t__ FUNC_2 (struct vc_data*,struct fb_info*) ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (struct vc_data*,struct fb_info*,int,int) ;
 struct fb_info** VAR_4 ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (struct vc_data*,struct fb_info*,int,int,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(struct vc_data *VAR_7, int VAR_8)
{
 struct fb_info *VAR_9 = VAR_4[VAR_3[VAR_7->vc_num]];
 struct fbcon_ops *VAR_10 = VAR_9->fbcon_par;
 int VAR_11;
  int VAR_12 = FUNC_5((u16 *) VAR_7->vc_pos);

 if (FUNC_2(VAR_7, VAR_9) || VAR_7->vc_deccm != 1)
  return;

 if (VAR_7->vc_cursor_type & 0x10)
  FUNC_1(VAR_9);
 else
  FUNC_0(VAR_9);

 VAR_10->cursor_flash = (VAR_8 == VAR_0) ? 0 : 1;
 if (VAR_8 & VAR_1) {
  VAR_8 &= ~VAR_1;
  VAR_11 = VAR_5;
 } else {
  if (VAR_5)
   FUNC_3(VAR_7);
  VAR_11 = 0;
 }

 VAR_10->cursor(VAR_7, VAR_9, VAR_8, VAR_11, FUNC_4(VAR_7, VAR_9, VAR_12, 1),
      FUNC_4(VAR_7, VAR_9, VAR_12, 0));
 VAR_6 = VAR_2;
}
