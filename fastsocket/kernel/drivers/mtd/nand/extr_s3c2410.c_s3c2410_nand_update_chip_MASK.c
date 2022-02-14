
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int size; int bytes; int * layout; } ;
struct nand_chip {int page_shift; TYPE_1__ ecc; } ;
struct s3c2410_nand_mtd {struct nand_chip chip; } ;
struct s3c2410_nand_info {int device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,struct nand_chip*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct s3c2410_nand_info *VAR_2,
         struct s3c2410_nand_mtd *VAR_3)
{
 struct nand_chip *VAR_4 = &VAR_3->chip;

 FUNC_0(VAR_2->device, "chip %p => page shift %d\n",
  VAR_4, VAR_4->page_shift);

 if (VAR_4->ecc.mode != VAR_0)
  return;




 if (VAR_4->page_shift > 10) {
  VAR_4->ecc.size = 256;
  VAR_4->ecc.bytes = 3;
 } else {
  VAR_4->ecc.size = 512;
  VAR_4->ecc.bytes = 3;
  VAR_4->ecc.layout = &VAR_1;
 }
}
