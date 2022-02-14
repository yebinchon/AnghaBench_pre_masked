
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_struct {int font_width; int font_height; int lock; int glob_cfg; int block_move; } ;
struct sti_blkmv_outptr {int member_0; } ;
struct sti_blkmv_inptr {int src_x; int src_y; int dest_x; int dest_y; int width; int height; } ;
typedef int s32 ;


 int FUNC_0 (int ,int *,struct sti_blkmv_inptr*,struct sti_blkmv_outptr*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(struct sti_struct *VAR_1, int VAR_2, int VAR_3,
   int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct sti_blkmv_inptr VAR_8 = {
  .src_x = VAR_3 * VAR_1->font_width,
  .src_y = VAR_2 * VAR_1->font_height,
  .dest_x = VAR_5 * VAR_1->font_width,
  .dest_y = VAR_4 * VAR_1->font_height,
  .width = VAR_7 * VAR_1->font_width,
  .height = VAR_6* VAR_1->font_height,
 };
 struct sti_blkmv_outptr VAR_9 = { 0, };
 s32 VAR_10;
 unsigned long VAR_11;

 do {
  FUNC_1(&VAR_1->lock, VAR_11);
  VAR_10 = FUNC_0(VAR_1->block_move, &VAR_0,
   &VAR_8, &VAR_9, VAR_1->glob_cfg);
  FUNC_2(&VAR_1->lock, VAR_11);
 } while (VAR_10 == 1);
}
