
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int * layout; int correct; int calculate; int hwctl; int mode; } ;
struct nand_chip {int chip_delay; TYPE_1__ ecc; int verify_buf; int write_buf; int read_buf; int read_byte; int read_word; int cmdfunc; int dev_ready; int select_chip; int waitfunc; int options; } ;
struct pxa3xx_nand_info {struct nand_chip nand_chip; struct pxa3xx_nand_flash* flash_info; } ;
struct pxa3xx_nand_flash {int flash_width; int page_size; } ;
struct mtd_info {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_16,
     struct pxa3xx_nand_info *VAR_17)
{
 const struct pxa3xx_nand_flash *VAR_18 = VAR_17->flash_info;
 struct nand_chip *VAR_19 = &VAR_17->nand_chip;

 VAR_19->options = (VAR_18->flash_width == 16) ? VAR_0: 0;

 VAR_19->waitfunc = VAR_14;
 VAR_19->select_chip = VAR_12;
 VAR_19->dev_ready = VAR_5;
 VAR_19->cmdfunc = VAR_4;
 VAR_19->read_word = VAR_11;
 VAR_19->read_byte = VAR_10;
 VAR_19->read_buf = VAR_9;
 VAR_19->write_buf = VAR_15;
 VAR_19->verify_buf = VAR_13;

 VAR_19->ecc.mode = VAR_1;
 VAR_19->ecc.hwctl = VAR_8;
 VAR_19->ecc.calculate = VAR_6;
 VAR_19->ecc.correct = VAR_7;
 VAR_19->ecc.size = VAR_18->page_size;

 if (VAR_18->page_size == 2048)
  VAR_19->ecc.layout = &VAR_2;
 else
  VAR_19->ecc.layout = &VAR_3;

 VAR_19->chip_delay = 25;
}
