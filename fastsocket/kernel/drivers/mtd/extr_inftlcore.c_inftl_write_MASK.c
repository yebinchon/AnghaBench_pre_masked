
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_oob_ops {int ooboffs; size_t len; size_t retlen; int * datbuf; int * oobbuf; int ooblen; int mode; } ;
struct mtd_info {int (* write_oob ) (struct mtd_info*,int,struct mtd_oob_ops*) ;int writesize; int oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
         size_t *VAR_4, uint8_t *VAR_5, uint8_t *VAR_6)
{
 struct mtd_oob_ops VAR_7;
 int VAR_8;

 VAR_7.mode = VAR_0;
 VAR_7.ooboffs = VAR_2;
 VAR_7.ooblen = VAR_1->oobsize;
 VAR_7.oobbuf = VAR_6;
 VAR_7.datbuf = VAR_5;
 VAR_7.len = VAR_3;

 VAR_8 = VAR_1->write_oob(VAR_1, VAR_2 & ~(VAR_1->writesize - 1), &VAR_7);
 *VAR_4 = VAR_7.retlen;
 return VAR_8;
}
