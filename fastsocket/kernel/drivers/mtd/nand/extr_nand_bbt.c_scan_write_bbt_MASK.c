
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_oob_ops {size_t len; int * oobbuf; int * datbuf; int ooblen; scalar_t__ ooboffs; int mode; } ;
struct mtd_info {int (* write_oob ) (struct mtd_info*,int ,struct mtd_oob_ops*) ;int oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
     uint8_t *VAR_4, uint8_t *VAR_5)
{
 struct mtd_oob_ops VAR_6;

 VAR_6.mode = VAR_0;
 VAR_6.ooboffs = 0;
 VAR_6.ooblen = VAR_1->oobsize;
 VAR_6.datbuf = VAR_4;
 VAR_6.oobbuf = VAR_5;
 VAR_6.len = VAR_3;

 return VAR_1->write_oob(VAR_1, VAR_2, &VAR_6);
}
