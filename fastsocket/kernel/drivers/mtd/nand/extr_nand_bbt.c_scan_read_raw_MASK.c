
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_oob_ops {size_t len; int * datbuf; int * oobbuf; int ooblen; scalar_t__ ooboffs; int mode; } ;
struct mtd_info {int (* read_oob ) (struct mtd_info*,int ,struct mtd_oob_ops*) ;int oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, uint8_t *VAR_2, loff_t VAR_3,
    size_t VAR_4)
{
 struct mtd_oob_ops VAR_5;

 VAR_5.mode = VAR_0;
 VAR_5.ooboffs = 0;
 VAR_5.ooblen = VAR_1->oobsize;
 VAR_5.oobbuf = VAR_2;
 VAR_5.datbuf = VAR_2;
 VAR_5.len = VAR_4;

 return VAR_1->read_oob(VAR_1, VAR_3, &VAR_5);
}
