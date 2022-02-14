
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;int (* select_chip ) (struct mtd_info*,int) ;int (* dev_ready ) (struct mtd_info*) ;} ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*,int) ;
 int FUNC_2 (struct mtd_info*,int ,int,int) ;
 int FUNC_3 (struct mtd_info*,int ,int,int) ;
 int FUNC_4 (struct mtd_info*,int ,int,int) ;
 int FUNC_5 (struct mtd_info*,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_2, int VAR_3)
{
 struct nand_chip *VAR_4 = VAR_2->priv;


 while (!VAR_4->dev_ready(VAR_2)) ;

 VAR_4->select_chip(VAR_2, VAR_3);


 VAR_4->cmdfunc(VAR_2, VAR_0, 0x0000, 0x0000);
 VAR_4->cmdfunc(VAR_2, VAR_1, -1, -1);


 VAR_4->cmdfunc(VAR_2, VAR_0, 0x0000, 0x0004);
 VAR_4->cmdfunc(VAR_2, VAR_1, -1, -1);

}
