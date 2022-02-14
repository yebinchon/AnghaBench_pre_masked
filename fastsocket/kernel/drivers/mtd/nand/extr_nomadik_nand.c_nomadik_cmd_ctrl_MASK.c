
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nomadik_nand_host {int addr_va; int cmd_va; } ;
struct nand_chip {struct nomadik_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_2, int VAR_3, unsigned int VAR_4)
{
 struct nand_chip *VAR_5 = VAR_2->priv;
 struct nomadik_nand_host *VAR_6 = VAR_5->priv;

 if (VAR_3 == VAR_1)
  return;

 if (VAR_4 & VAR_0)
  FUNC_0(VAR_3, VAR_6->cmd_va);
 else
  FUNC_0(VAR_3, VAR_6->addr_va);
}
