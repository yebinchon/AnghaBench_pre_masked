
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,struct mtd_info*,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1)
{
 struct nand_chip *VAR_2 = VAR_1->priv;

 return FUNC_0(VAR_2, VAR_1, VAR_0);
}
