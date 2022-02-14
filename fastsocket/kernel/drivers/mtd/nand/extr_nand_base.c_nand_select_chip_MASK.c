
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int (* cmd_ctrl ) (struct mtd_info*,int ,int) ;} ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mtd_info*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_2, int VAR_3)
{
 struct nand_chip *VAR_4 = VAR_2->priv;

 switch (VAR_3) {
 case -1:
  VAR_4->cmd_ctrl(VAR_2, VAR_0, 0 | VAR_1);
  break;
 case 0:
  break;

 default:
  FUNC_0();
 }
}
