
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pxa3xx_nand_info {int read_id_bytes; int reg_ndcr; int oob_size; int col_addr_cycles; int row_addr_cycles; TYPE_1__* flash_info; } ;
struct nand_flash_dev {int id; int chipsize; int * name; } ;
struct TYPE_2__ {int page_per_block; int page_size; int flash_width; int dfc_width; int num_blocks; int * timing; int * cmdset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pxa3xx_nand_info*,int*) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nand_flash_dev* VAR_9 ;
 int FUNC_2 (struct pxa3xx_nand_info*,int ) ;
 int FUNC_3 (struct pxa3xx_nand_info*,int *) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(struct pxa3xx_nand_info *VAR_11)
{
 uint32_t VAR_12 = FUNC_2(VAR_11, VAR_1);
 struct nand_flash_dev *VAR_13 = ((void*)0);
 uint32_t VAR_14 = -1;
 int VAR_15;

 VAR_6.page_per_block = VAR_12 & VAR_5 ? 64 : 32;
 VAR_6.page_size = VAR_12 & VAR_4 ? 2048 : 512;
 VAR_6.flash_width = VAR_12 & VAR_3 ? 16 : 8;
 VAR_6.dfc_width = VAR_12 & VAR_2 ? 16 : 8;

 if (VAR_6.page_size == 2048)
  VAR_6.cmdset = &VAR_8;
 else
  VAR_6.cmdset = &VAR_10;


 VAR_11->flash_info = &VAR_6;
 VAR_11->read_id_bytes = (VAR_6.page_size == 2048) ? 4 : 2;
 VAR_11->reg_ndcr = VAR_12;

 if (FUNC_1(VAR_11, &VAR_14))
  return -VAR_0;


 VAR_14 = (VAR_14 >> 8) & 0xff;
 for (VAR_15 = 0; VAR_9[VAR_15].name != ((void*)0); VAR_15++) {
  if (VAR_14 == VAR_9[VAR_15].id) {
   VAR_13 = &VAR_9[VAR_15];
   break;
  }
 }

 if (!VAR_13)
  return -VAR_0;


 VAR_15 = FUNC_0(VAR_6.page_per_block * VAR_6.page_size);
 VAR_6.num_blocks = VAR_13->chipsize << (20 - VAR_15);

 VAR_11->oob_size = (VAR_6.page_size == 2048) ? 64 : 16;


 VAR_11->col_addr_cycles = (VAR_6.page_size == 2048) ? 2 : 1;

 if (VAR_6.num_blocks * VAR_6.page_per_block > 65536)
  VAR_11->row_addr_cycles = 3;
 else
  VAR_11->row_addr_cycles = 2;

 FUNC_3(VAR_11, &VAR_7);
 VAR_6.timing = &VAR_7;

 return 0;
}
