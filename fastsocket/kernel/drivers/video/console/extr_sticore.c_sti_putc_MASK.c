
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_struct {int font_width; int font_height; int lock; int glob_cfg; int font_unpmv; TYPE_1__* font; } ;
struct sti_font_outptr {int member_0; } ;
struct sti_font_inptr {int dest_x; int dest_y; int bg_color; int fg_color; int index; int font_start_addr; } ;
typedef int s32 ;
struct TYPE_2__ {int raw; } ;


 int FUNC_0 (int ,int *,struct sti_font_inptr*,struct sti_font_outptr*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sti_struct*,int) ;
 int FUNC_3 (struct sti_struct*,int) ;
 int FUNC_4 (struct sti_struct*,int) ;
 int VAR_0 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void
FUNC_7(struct sti_struct *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct sti_font_inptr VAR_5 = {
  .font_start_addr= FUNC_1(VAR_1->font->raw),
  .index = FUNC_4(VAR_1, VAR_2),
  .fg_color = FUNC_3(VAR_1, VAR_2),
  .bg_color = FUNC_2(VAR_1, VAR_2),
  .dest_x = VAR_4 * VAR_1->font_width,
  .dest_y = VAR_3 * VAR_1->font_height,
 };
 struct sti_font_outptr VAR_6 = { 0, };
 s32 VAR_7;
 unsigned long VAR_8;

 do {
  FUNC_5(&VAR_1->lock, VAR_8);
  VAR_7 = FUNC_0(VAR_1->font_unpmv, &VAR_0,
   &VAR_5, &VAR_6, VAR_1->glob_cfg);
  FUNC_6(&VAR_1->lock, VAR_8);
 } while (VAR_7 == 1);
}
