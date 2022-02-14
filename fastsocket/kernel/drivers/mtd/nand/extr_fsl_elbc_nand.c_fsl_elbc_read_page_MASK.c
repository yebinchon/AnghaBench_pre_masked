
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {int * oob_poi; } ;
struct TYPE_2__ {int failed; } ;
struct mtd_info {TYPE_1__ ecc_stats; int oobsize; int writesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int *,int ) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1,
                              struct nand_chip *VAR_2,
         uint8_t *VAR_3,
         int VAR_4)
{
 FUNC_0(VAR_1, VAR_3, VAR_1->writesize);
 FUNC_0(VAR_1, VAR_2->oob_poi, VAR_1->oobsize);

 if (FUNC_1(VAR_1, VAR_2) & VAR_0)
  VAR_1->ecc_stats.failed++;

 return 0;
}
