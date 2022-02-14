
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {scalar_t__ cmds_start; int ptr1_reg; int ptr2_reg; int cnt2_reg; int cnt1_reg; int cdt; unsigned int fifo_size; unsigned int fifo_start; unsigned int ctrl_start; } ;
struct cx25821_dev {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int,unsigned int) ;

int FUNC_2(struct cx25821_dev *VAR_1,
     struct sram_channel *VAR_2,
     unsigned int VAR_3, u32 VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u32 VAR_7;

 if (VAR_2->cmds_start == 0) {
  FUNC_1(VAR_2->ptr1_reg, 0);
  FUNC_1(VAR_2->ptr2_reg, 0);
  FUNC_1(VAR_2->cnt2_reg, 0);
  FUNC_1(VAR_2->cnt1_reg, 0);
  return 0;
 }

 VAR_3 = (VAR_3 + 7) & ~7;
 VAR_7 = VAR_2->cdt;
 VAR_6 = VAR_2->fifo_size / VAR_3;

 if (VAR_6 > 4) {
  VAR_6 = 4;
 }

 FUNC_0(VAR_6 < 2);


 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  FUNC_1(VAR_7 + 16 * VAR_5, VAR_2->fifo_start + VAR_3 * VAR_5);
  FUNC_1(VAR_7 + 16 * VAR_5 + 4, 0);
  FUNC_1(VAR_7 + 16 * VAR_5 + 8, 0);
  FUNC_1(VAR_7 + 16 * VAR_5 + 12, 0);
 }


 FUNC_1(VAR_2->cmds_start + 0, VAR_4);

 FUNC_1(VAR_2->cmds_start + 4, 0);
 FUNC_1(VAR_2->cmds_start + 8, VAR_7);
 FUNC_1(VAR_2->cmds_start + 12, (VAR_6 * 16) >> 3);
 FUNC_1(VAR_2->cmds_start + 16, VAR_2->ctrl_start);

 FUNC_1(VAR_2->cmds_start + 20, VAR_0);

 for (VAR_5 = 24; VAR_5 < 80; VAR_5 += 4)
  FUNC_1(VAR_2->cmds_start + VAR_5, 0);


 FUNC_1(VAR_2->ptr1_reg, VAR_2->fifo_start);
 FUNC_1(VAR_2->ptr2_reg, VAR_7);
 FUNC_1(VAR_2->cnt2_reg, (VAR_6 * 16) >> 3);
 FUNC_1(VAR_2->cnt1_reg, (VAR_3 >> 3) - 1);

 return 0;
}
