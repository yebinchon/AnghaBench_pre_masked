
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int (* block_bad ) (struct mtd_info*,int ,int) ;int bbt; } ;
struct mtd_info {struct nand_chip* priv; } ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*,int ,int) ;
 int FUNC_1 (struct mtd_info*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1, int VAR_2,
          int VAR_3)
{
 struct nand_chip *VAR_4 = VAR_0->priv;

 if (!VAR_4->bbt)
  return VAR_4->block_bad(VAR_0, VAR_1, VAR_2);


 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
