
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int numchips; int chipsize; int bbt_erase_shift; int page_shift; int* bbt; } ;
struct nand_bbt_descr {int options; int* pages; int maxblocks; scalar_t__ reserved_block_code; } ;
struct mtd_info {int size; struct nand_chip* priv; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtd_info*,int) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_4, struct nand_bbt_descr *VAR_5)
{
 struct nand_chip *VAR_6 = VAR_4->priv;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 uint8_t VAR_13, VAR_14;


 if (VAR_5->options & VAR_2) {
  VAR_9 = VAR_6->numchips;
  VAR_11 = (int)(VAR_6->chipsize >> VAR_6->bbt_erase_shift);
 } else {
  VAR_9 = 1;
  VAR_11 = (int)(VAR_4->size >> VAR_6->bbt_erase_shift);
 }

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  if ((VAR_5->options & VAR_0) ||
      !(VAR_5->options & VAR_3)) {
   if (VAR_5->pages[VAR_7] == -1)
    continue;
   VAR_10 = VAR_5->pages[VAR_7] >> (VAR_6->bbt_erase_shift - VAR_6->page_shift);
   VAR_10 <<= 1;
   VAR_13 = VAR_6->bbt[(VAR_10 >> 3)];
   VAR_14 = VAR_13 | (0x2 << (VAR_10 & 0x06));
   VAR_6->bbt[(VAR_10 >> 3)] = VAR_14;
   if ((VAR_13 != VAR_14) && VAR_5->reserved_block_code)
    FUNC_0(VAR_4, (loff_t)VAR_10 << (VAR_6->bbt_erase_shift - 1));
   continue;
  }
  VAR_12 = 0;
  if (VAR_5->options & VAR_1)
   VAR_10 = ((VAR_7 + 1) * VAR_11) - VAR_5->maxblocks;
  else
   VAR_10 = VAR_7 * VAR_11;
  VAR_10 <<= 1;
  for (VAR_8 = 0; VAR_8 < VAR_5->maxblocks; VAR_8++) {
   VAR_13 = VAR_6->bbt[(VAR_10 >> 3)];
   VAR_14 = VAR_13 | (0x2 << (VAR_10 & 0x06));
   VAR_6->bbt[(VAR_10 >> 3)] = VAR_14;
   if (VAR_13 != VAR_14)
    VAR_12 = 1;
   VAR_10 += 2;
  }



  if (VAR_12 && VAR_5->reserved_block_code)
   FUNC_0(VAR_4, (loff_t)(VAR_10 - 2) << (VAR_6->bbt_erase_shift - 1));
 }
}
