
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pxa3xx_nand_info {int data_size; int ndcb0; int ndcb1; int ndcb2; int row_addr_cycles; int col_addr_cycles; int use_ecc; struct pxa3xx_nand_flash* flash_info; } ;
struct pxa3xx_nand_flash {int page_size; struct pxa3xx_nand_cmdset* cmdset; } ;
struct pxa3xx_nand_cmdset {int program; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pxa3xx_nand_info *VAR_3,
   uint16_t VAR_4, int VAR_5, int VAR_6)
{
 const struct pxa3xx_nand_flash *VAR_7 = VAR_3->flash_info;
 const struct pxa3xx_nand_cmdset *VAR_8 = VAR_7->cmdset;


 switch (VAR_7->page_size) {
 case 2048:
  VAR_3->data_size = (VAR_3->use_ecc) ? 2088 : 2112;
  break;
 case 512:
  VAR_3->data_size = (VAR_3->use_ecc) ? 520 : 528;
  break;
 default:
  return -VAR_0;
 }


 VAR_3->ndcb0 = VAR_4 | ((VAR_4 & 0xff00) ? VAR_2 : 0);
 VAR_3->ndcb1 = 0;
 VAR_3->ndcb2 = 0;
 VAR_3->ndcb0 |= FUNC_0(VAR_3->row_addr_cycles + VAR_3->col_addr_cycles);

 if (VAR_3->col_addr_cycles == 2) {



  VAR_3->ndcb1 |= VAR_6 << 16;
  if (VAR_3->row_addr_cycles == 3)
   VAR_3->ndcb2 = (VAR_6 >> 16) & 0xff;
 } else



  VAR_3->ndcb1 = VAR_6 << 8;

 if (VAR_4 == VAR_8->program)
  VAR_3->ndcb0 |= FUNC_1(1) | VAR_1;

 return 0;
}
