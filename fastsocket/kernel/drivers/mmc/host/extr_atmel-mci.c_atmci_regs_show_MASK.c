
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct atmel_mci* private; } ;
struct atmel_mci {int lock; int mck; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,int ,int ) ;
 int FUNC_6 (struct seq_file*,char*,int,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_12, void *VAR_13)
{
 struct atmel_mci *VAR_14 = VAR_12->private;
 u32 *VAR_15;

 VAR_15 = FUNC_4(VAR_9, VAR_1);
 if (!VAR_15)
  return -VAR_0;






 FUNC_7(&VAR_14->lock);
 FUNC_2(VAR_14->mck);
 FUNC_5(VAR_15, VAR_14->regs, VAR_9);
 FUNC_1(VAR_14->mck);
 FUNC_8(&VAR_14->lock);

 FUNC_6(VAR_12, "MR:\t0x%08x%s%s CLKDIV=%u\n",
   VAR_15[VAR_6 / 4],
   VAR_15[VAR_6 / 4] & VAR_7 ? " RDPROOF" : "",
   VAR_15[VAR_6 / 4] & VAR_8 ? " WRPROOF" : "",
   VAR_15[VAR_6 / 4] & 0xff);
 FUNC_6(VAR_12, "DTOR:\t0x%08x\n", VAR_15[VAR_4 / 4]);
 FUNC_6(VAR_12, "SDCR:\t0x%08x\n", VAR_15[VAR_10 / 4]);
 FUNC_6(VAR_12, "ARGR:\t0x%08x\n", VAR_15[VAR_2 / 4]);
 FUNC_6(VAR_12, "BLKR:\t0x%08x BCNT=%u BLKLEN=%u\n",
   VAR_15[VAR_3 / 4],
   VAR_15[VAR_3 / 4] & 0xffff,
   (VAR_15[VAR_3 / 4] >> 16) & 0xffff);



 FUNC_0(VAR_12, "SR", VAR_15[VAR_11 / 4]);
 FUNC_0(VAR_12, "IMR", VAR_15[VAR_5 / 4]);

 FUNC_3(VAR_15);

 return 0;
}
