
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sti_struct {int lock; int glob_cfg; int block_move; } ;
struct sti_blkmv_outptr {int member_0; } ;
struct sti_blkmv_inptr {int src_x; int src_y; int dest_x; int dest_y; int width; int height; int bg_color; int fg_color; } ;
typedef int s32 ;


 int FUNC_0 (int ,int *,struct sti_blkmv_inptr*,struct sti_blkmv_outptr*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(struct sti_struct *VAR_1, int VAR_2, int VAR_3,
 int VAR_4, int VAR_5, u8 VAR_6)
{
 struct sti_blkmv_inptr VAR_7 = {
  .fg_color = VAR_6,
  .bg_color = VAR_6,
  .src_x = VAR_3,
  .src_y = VAR_2,
  .dest_x = VAR_3,
  .dest_y = VAR_2,
  .width = VAR_5,
  .height = VAR_4,
 };
 struct sti_blkmv_outptr VAR_8 = { 0, };
 s32 VAR_9;
 unsigned long VAR_10;

 do {
  FUNC_1(&VAR_1->lock, VAR_10);
  VAR_9 = FUNC_0(VAR_1->block_move, &VAR_0,
   &VAR_7, &VAR_8, VAR_1->glob_cfg);
  FUNC_2(&VAR_1->lock, VAR_10);
 } while (VAR_9 == 1);
}
