
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int (* block_markbad ) (struct mtd_info*,int ) ;} ;
struct mtd_info {struct nand_chip* priv; } ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*,int ) ;
 int FUNC_1 (struct mtd_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1)
{
 struct nand_chip *VAR_2 = VAR_0->priv;
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0, VAR_1))) {

  if (VAR_3 > 0)
   return 0;
  return VAR_3;
 }

 return VAR_2->block_markbad(VAR_0, VAR_1);
}
