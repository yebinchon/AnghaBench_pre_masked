
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sram_channel {scalar_t__ cmds_start; scalar_t__ ptr1_reg; scalar_t__ ptr2_reg; scalar_t__ cnt2_reg; scalar_t__ cnt1_reg; scalar_t__ cdt; unsigned int fifo_size; scalar_t__ fifo_start; scalar_t__ ctrl_start; } ;
struct cx25821_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

int FUNC_2(struct cx25821_dev *VAR_3,
           struct sram_channel *VAR_4,
           unsigned int VAR_5, u32 VAR_6)
{
 unsigned int VAR_7, VAR_8;
 u32 VAR_9;

 if (VAR_4->cmds_start == 0) {
  FUNC_1(VAR_4->ptr1_reg, 0);
  FUNC_1(VAR_4->ptr2_reg, 0);
  FUNC_1(VAR_4->cnt2_reg, 0);
  FUNC_1(VAR_4->cnt1_reg, 0);
  return 0;
 }

 VAR_5 = (VAR_5 + 7) & ~7;
 VAR_9 = VAR_4->cdt;
 VAR_8 = VAR_4->fifo_size / VAR_5;

 if (VAR_8 > 3) {
  VAR_8 = 3;
 }

 FUNC_0(VAR_8 < 2);


 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_1(VAR_9 + 16 * VAR_7, VAR_4->fifo_start + VAR_5 * VAR_7);
  FUNC_1(VAR_9 + 16 * VAR_7 + 4, 0);
  FUNC_1(VAR_9 + 16 * VAR_7 + 8, 0);
  FUNC_1(VAR_9 + 16 * VAR_7 + 12, 0);
 }


 FUNC_1(VAR_4->cmds_start + 0, VAR_6);

 FUNC_1(VAR_4->cmds_start + 4, 0);
 FUNC_1(VAR_4->cmds_start + 8, VAR_9);
 FUNC_1(VAR_4->cmds_start + 12, VAR_0);
 FUNC_1(VAR_4->cmds_start + 16, VAR_4->ctrl_start);


 FUNC_1(VAR_4->cmds_start + 20, VAR_2);

 for (VAR_7 = 24; VAR_7 < 80; VAR_7 += 4)
  FUNC_1(VAR_4->cmds_start + VAR_7, 0);


 FUNC_1(VAR_4->ptr1_reg, VAR_4->fifo_start);
 FUNC_1(VAR_4->ptr2_reg, VAR_9);
 FUNC_1(VAR_4->cnt2_reg, VAR_0);
 FUNC_1(VAR_4->cnt1_reg, VAR_1 - 1);

 return 0;
}
