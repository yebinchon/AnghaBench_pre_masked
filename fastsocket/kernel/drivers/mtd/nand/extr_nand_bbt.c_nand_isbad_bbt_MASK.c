
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int bbt_erase_shift; int* bbt; } ;
struct mtd_info {struct nand_chip* priv; } ;
typedef int loff_t ;


 int FUNC_0 (int ,char*,unsigned int,int,int) ;
 int VAR_0 ;

int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct nand_chip *VAR_4 = VAR_1->priv;
 int VAR_5;
 uint8_t VAR_6;


 VAR_5 = (int)(VAR_2 >> (VAR_4->bbt_erase_shift - 1));
 VAR_6 = (VAR_4->bbt[VAR_5 >> 3] >> (VAR_5 & 0x06)) & 0x03;

 FUNC_0(VAR_0, "nand_isbad_bbt(): bbt info for offs 0x%08x: (block %d) 0x%02x\n",
       (unsigned int)VAR_2, VAR_5 >> 1, VAR_6);

 switch ((int)VAR_6) {
 case 0x00:
  return 0;
 case 0x01:
  return 1;
 case 0x02:
  return VAR_3 ? 0 : 1;
 }
 return 1;
}
