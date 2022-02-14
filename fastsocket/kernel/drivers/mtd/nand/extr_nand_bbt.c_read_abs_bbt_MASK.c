
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int numchips; int chipsize; int bbt_erase_shift; } ;
struct nand_bbt_descr {int options; int reserved_block_code; int * pages; } ;
struct mtd_info {int size; struct nand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int *,int ,int,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2, uint8_t *VAR_3, struct nand_bbt_descr *VAR_4, int VAR_5)
{
 struct nand_chip *VAR_6 = VAR_2->priv;
 int VAR_7 = 0, VAR_8;
 int VAR_9;

 VAR_9 = VAR_4->options & VAR_0;
 if (VAR_4->options & VAR_1) {
  int VAR_10 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6->numchips; VAR_8++) {
   if (VAR_5 == -1 || VAR_5 == VAR_8)
    VAR_7 = FUNC_0 (VAR_2, VAR_3, VAR_4->pages[VAR_8], VAR_6->chipsize >> VAR_6->bbt_erase_shift, VAR_9, VAR_10, VAR_4->reserved_block_code);
   if (VAR_7)
    return VAR_7;
   VAR_10 += VAR_6->chipsize >> (VAR_6->bbt_erase_shift + 2);
  }
 } else {
  VAR_7 = FUNC_0 (VAR_2, VAR_3, VAR_4->pages[0], VAR_2->size >> VAR_6->bbt_erase_shift, VAR_9, 0, VAR_4->reserved_block_code);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
