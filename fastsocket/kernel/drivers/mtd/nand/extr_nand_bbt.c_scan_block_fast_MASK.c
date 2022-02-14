
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_bbt_descr {int dummy; } ;
struct mtd_oob_ops {int mode; int * datbuf; scalar_t__ ooboffs; int * oobbuf; int ooblen; } ;
struct mtd_info {int (* read_oob ) (struct mtd_info*,int ,struct mtd_oob_ops*) ;scalar_t__ writesize; int oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct nand_bbt_descr*) ;
 int FUNC_1 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, struct nand_bbt_descr *VAR_2,
      loff_t VAR_3, uint8_t *VAR_4, int VAR_5)
{
 struct mtd_oob_ops VAR_6;
 int VAR_7, VAR_8;

 VAR_6.ooblen = VAR_1->oobsize;
 VAR_6.oobbuf = VAR_4;
 VAR_6.ooboffs = 0;
 VAR_6.datbuf = ((void*)0);
 VAR_6.mode = VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {





  VAR_8 = VAR_1->read_oob(VAR_1, VAR_3, &VAR_6);
  if (VAR_8)
   return VAR_8;

  if (FUNC_0(VAR_4, VAR_2))
   return 1;

  VAR_3 += VAR_1->writesize;
 }
 return 0;
}
