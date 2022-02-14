
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_bbt_descr {int dummy; } ;
struct mtd_info {int writesize; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int *,int,int ,struct nand_bbt_descr*) ;
 int FUNC_1 (struct mtd_info*,int *,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, struct nand_bbt_descr *VAR_1,
      loff_t VAR_2, uint8_t *VAR_3, size_t VAR_4,
      int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_0, VAR_3, VAR_2, VAR_4);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++, VAR_3 += VAR_5) {
  if (FUNC_0(VAR_3, VAR_5, VAR_0->writesize, VAR_1))
   return 1;
 }
 return 0;
}
