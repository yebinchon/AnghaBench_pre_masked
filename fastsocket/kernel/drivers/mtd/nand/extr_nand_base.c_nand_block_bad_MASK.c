
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nand_chip {int page_shift; int pagemask; int chip_shift; int options; int badblockpos; int (* read_byte ) (struct mtd_info*) ;int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;int (* read_word ) (struct mtd_info*) ;int (* select_chip ) (struct mtd_info*,int) ;} ;
struct mtd_info {struct nand_chip* priv; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*,struct mtd_info*,int ) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*,int) ;
 int FUNC_4 (struct mtd_info*,int ,int,int) ;
 int FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (struct mtd_info*,int ,int,int) ;
 int FUNC_7 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_3, loff_t VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 struct nand_chip *VAR_9 = VAR_3->priv;
 u16 VAR_10;

 VAR_6 = (int)(VAR_4 >> VAR_9->page_shift) & VAR_9->pagemask;

 if (VAR_5) {
  VAR_7 = (int)(VAR_4 >> VAR_9->chip_shift);

  FUNC_1(VAR_9, VAR_3, VAR_0);


  VAR_9->select_chip(VAR_3, VAR_7);
 }

 if (VAR_9->options & VAR_1) {
  VAR_9->cmdfunc(VAR_3, VAR_2, VAR_9->badblockpos & 0xFE,
         VAR_6);
  VAR_10 = FUNC_0(VAR_9->read_word(VAR_3));
  if (VAR_9->badblockpos & 0x1)
   VAR_10 >>= 8;
  if ((VAR_10 & 0xFF) != 0xff)
   VAR_8 = 1;
 } else {
  VAR_9->cmdfunc(VAR_3, VAR_2, VAR_9->badblockpos, VAR_6);
  if (VAR_9->read_byte(VAR_3) != 0xff)
   VAR_8 = 1;
 }

 if (VAR_5)
  FUNC_2(VAR_3);

 return VAR_8;
}
