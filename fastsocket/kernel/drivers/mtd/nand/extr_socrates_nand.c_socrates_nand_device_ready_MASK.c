
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socrates_nand_host {int io_base; } ;
struct nand_chip {struct socrates_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1)
{
 struct nand_chip *VAR_2 = VAR_1->priv;
 struct socrates_nand_host *VAR_3 = VAR_2->priv;

 if (FUNC_0(VAR_3->io_base) & VAR_0)
  return 0;
 return 1;
}
