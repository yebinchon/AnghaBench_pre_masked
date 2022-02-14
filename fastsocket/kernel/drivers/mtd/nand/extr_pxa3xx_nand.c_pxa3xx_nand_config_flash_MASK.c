
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pxa3xx_nand_platform_data {scalar_t__ enable_arbiter; } ;
struct pxa3xx_nand_info {int oob_size; int read_id_bytes; int col_addr_cycles; int row_addr_cycles; int reg_ndcr; struct pxa3xx_nand_flash const* flash_info; struct platform_device* pdev; } ;
struct pxa3xx_nand_flash {int page_size; int flash_width; int num_blocks; int page_per_block; int dfc_width; int timing; } ;
struct TYPE_2__ {struct pxa3xx_nand_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct pxa3xx_nand_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct pxa3xx_nand_info *VAR_8,
        const struct pxa3xx_nand_flash *VAR_9)
{
 struct platform_device *VAR_10 = VAR_8->pdev;
 struct pxa3xx_nand_platform_data *VAR_11 = VAR_10->dev.platform_data;
 uint32_t VAR_12 = 0x00000FFF;

 if (VAR_9->page_size != 2048 && VAR_9->page_size != 512)
  return -VAR_0;

 if (VAR_9->flash_width != 16 && VAR_9->flash_width != 8)
  return -VAR_0;


 VAR_8->oob_size = (VAR_9->page_size == 2048) ? 64 : 16;
 VAR_8->read_id_bytes = (VAR_9->page_size == 2048) ? 4 : 2;


 VAR_8->col_addr_cycles = (VAR_9->page_size == 2048) ? 2 : 1;

 if (VAR_9->num_blocks * VAR_9->page_per_block > 65536)
  VAR_8->row_addr_cycles = 3;
 else
  VAR_8->row_addr_cycles = 2;

 VAR_12 |= (VAR_11->enable_arbiter) ? VAR_3 : 0;
 VAR_12 |= (VAR_8->col_addr_cycles == 2) ? VAR_6 : 0;
 VAR_12 |= (VAR_9->page_per_block == 64) ? VAR_5 : 0;
 VAR_12 |= (VAR_9->page_size == 2048) ? VAR_4 : 0;
 VAR_12 |= (VAR_9->flash_width == 16) ? VAR_2 : 0;
 VAR_12 |= (VAR_9->dfc_width == 16) ? VAR_1 : 0;

 VAR_12 |= FUNC_0(VAR_8->read_id_bytes);
 VAR_12 |= VAR_7;

 VAR_8->reg_ndcr = VAR_12;

 FUNC_1(VAR_8, VAR_9->timing);
 VAR_8->flash_info = VAR_9;
 return 0;
}
