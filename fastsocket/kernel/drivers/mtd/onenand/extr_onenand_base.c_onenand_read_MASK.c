
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct onenand_chip {int dummy; } ;
struct mtd_oob_ops {size_t len; size_t retlen; int * oobbuf; int * datbuf; int ooblen; } ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct onenand_chip*) ;
 int FUNC_1 (struct mtd_info*,int ) ;
 int FUNC_2 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_3 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_4 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
 size_t *VAR_4, u_char *VAR_5)
{
 struct onenand_chip *VAR_6 = VAR_1->priv;
 struct mtd_oob_ops VAR_7 = {
  .len = VAR_3,
  .ooblen = 0,
  .datbuf = VAR_5,
  .oobbuf = ((void*)0),
 };
 int VAR_8;

 FUNC_1(VAR_1, VAR_0);
 VAR_8 = FUNC_0(VAR_6) ?
  FUNC_2(VAR_1, VAR_2, &VAR_7) :
  FUNC_3(VAR_1, VAR_2, &VAR_7);
 FUNC_4(VAR_1);

 *VAR_4 = VAR_7.retlen;
 return VAR_8;
}
