
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int cdt; unsigned int fifo_size; unsigned int fifo_start; int cmds_start; unsigned int ctrl_start; int ptr1_reg; int ptr2_reg; int cnt1_reg; int cnt2_reg; int name; } ;
struct cx88_core {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int,char*,int ,unsigned int,unsigned int) ;

int FUNC_3(struct cx88_core *VAR_0,
       struct sram_channel *VAR_1,
       unsigned int VAR_2, u32 VAR_3)
{
 unsigned int VAR_4,VAR_5;
 u32 VAR_6;

 VAR_2 = (VAR_2 + 7) & ~7;
 VAR_6 = VAR_1->cdt;
 VAR_5 = VAR_1->fifo_size / VAR_2;
 if (VAR_5 > 6)
  VAR_5 = 6;
 FUNC_0(VAR_5 < 2);


 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_1(VAR_6 + 16*VAR_4, VAR_1->fifo_start + VAR_2*VAR_4);


 FUNC_1(VAR_1->cmds_start + 0, VAR_3);
 FUNC_1(VAR_1->cmds_start + 4, VAR_6);
 FUNC_1(VAR_1->cmds_start + 8, (VAR_5*16) >> 3);
 FUNC_1(VAR_1->cmds_start + 12, VAR_1->ctrl_start);
 FUNC_1(VAR_1->cmds_start + 16, 64 >> 2);
 for (VAR_4 = 20; VAR_4 < 64; VAR_4 += 4)
  FUNC_1(VAR_1->cmds_start + VAR_4, 0);


 FUNC_1(VAR_1->ptr1_reg, VAR_1->fifo_start);
 FUNC_1(VAR_1->ptr2_reg, VAR_6);
 FUNC_1(VAR_1->cnt1_reg, (VAR_2 >> 3) -1);
 FUNC_1(VAR_1->cnt2_reg, (VAR_5*16) >> 3);

 FUNC_2(2,"sram setup %s: bpl=%d lines=%d\n", VAR_1->name, VAR_2, VAR_5);
 return 0;
}
