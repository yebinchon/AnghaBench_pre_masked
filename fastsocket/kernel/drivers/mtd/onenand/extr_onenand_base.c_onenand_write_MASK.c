
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_oob_ops {size_t len; size_t retlen; int * oobbuf; int * datbuf; int ooblen; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
 size_t *VAR_4, const u_char *VAR_5)
{
 struct mtd_oob_ops VAR_6 = {
  .len = VAR_3,
  .ooblen = 0,
  .datbuf = (u_char *) VAR_5,
  .oobbuf = ((void*)0),
 };
 int VAR_7;

 FUNC_0(VAR_1, VAR_0);
 VAR_7 = FUNC_2(VAR_1, VAR_2, &VAR_6);
 FUNC_1(VAR_1);

 *VAR_4 = VAR_6.retlen;
 return VAR_7;
}
